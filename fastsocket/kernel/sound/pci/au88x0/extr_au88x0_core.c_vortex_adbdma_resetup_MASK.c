
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int nr_periods; int period_virt; int period_real; int period_bytes; int substream; } ;
typedef TYPE_2__ stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(vortex_t *VAR_1, int VAR_2) {
 stream_t *VAR_3 = &VAR_1->dma_adb[VAR_2];
 int VAR_4, VAR_5, VAR_6;


 for (VAR_6=0 ; VAR_6 < 4 && VAR_6 < VAR_3->nr_periods; VAR_6++) {

  VAR_4 = VAR_3->period_virt + VAR_6;
  if (VAR_4 >= VAR_3->nr_periods)
   VAR_4 -= VAR_3->nr_periods;

  VAR_5 = VAR_3->period_real + VAR_6;
  if (VAR_3->nr_periods < 4) {
   if (VAR_5 >= VAR_3->nr_periods)
    VAR_5 -= VAR_3->nr_periods;
  }
  else {
   if (VAR_5 >= 4)
    VAR_5 -= 4;
  }
  FUNC_1(VAR_1->mmio,
   VAR_0 + (((VAR_2 << 2) + VAR_5) << 2),
   FUNC_2(VAR_3->substream,
            VAR_3->period_bytes * VAR_4));

  FUNC_0(VAR_1->mmio, VAR_0 + (((VAR_2 << 2)+VAR_5) << 2));
 }
}
