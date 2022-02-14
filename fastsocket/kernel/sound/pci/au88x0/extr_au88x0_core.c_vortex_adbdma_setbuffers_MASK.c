
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mmio; TYPE_2__* dma_adb; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_7__ {int period_bytes; int nr_periods; int cfg0; int cfg1; int substream; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void
FUNC_4(vortex_t * VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 stream_t *VAR_7 = &VAR_3->dma_adb[VAR_4];

 VAR_7->period_bytes = VAR_5;
 VAR_7->nr_periods = VAR_6;

 VAR_7->cfg0 = 0;
 VAR_7->cfg1 = 0;
 switch (VAR_6) {

 default:
 case 4:
  VAR_7->cfg1 |= 0x88000000 | 0x44000000 | 0x30000000 | (VAR_5 - 1);
  FUNC_0(VAR_3->mmio,
   VAR_0 + (VAR_4 << 4) + 0xc,
   FUNC_1(VAR_7->substream, VAR_5 * 3));

 case 3:
  VAR_7->cfg0 |= 0x12000000;
  VAR_7->cfg1 |= 0x80000000 | 0x40000000 | ((VAR_5 - 1) << 0xc);
  FUNC_0(VAR_3->mmio,
   VAR_0 + (VAR_4 << 4) + 0x8,
   FUNC_1(VAR_7->substream, VAR_5 * 2));

 case 2:
  VAR_7->cfg0 |= 0x88000000 | 0x44000000 | 0x10000000 | (VAR_5 - 1);
  FUNC_0(VAR_3->mmio,
   VAR_0 + (VAR_4 << 4) + 0x4,
   FUNC_1(VAR_7->substream, VAR_5));

 case 1:
  VAR_7->cfg0 |= 0x80000000 | 0x40000000 | ((VAR_5 - 1) << 0xc);
  FUNC_0(VAR_3->mmio,
   VAR_0 + (VAR_4 << 4),
   FUNC_1(VAR_7->substream, 0));
  break;
 }




 FUNC_0(VAR_3->mmio, VAR_1 + (VAR_4 << 3), VAR_7->cfg0);
 FUNC_0(VAR_3->mmio, VAR_2 + (VAR_4 << 3), VAR_7->cfg1);

 FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_4, 0);
}
