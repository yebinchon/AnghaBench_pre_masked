
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_6__ {int* resources; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int ,int ,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(vortex_t * VAR_2, int VAR_3, unsigned int VAR_4, int VAR_5)
{
 stream_t *VAR_6 = &(VAR_2->dma_adb[VAR_3]);
 int VAR_7, VAR_8;


 if (VAR_5)
  VAR_8 = FUNC_0(VAR_4, 48000);
 else
  VAR_8 = FUNC_0(48000, VAR_4);


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6->resources[VAR_1] & (1 << VAR_7))
   FUNC_1(VAR_2, VAR_7, VAR_8, 0, 0, VAR_7, VAR_5, 1, VAR_8, VAR_5);
 }
}
