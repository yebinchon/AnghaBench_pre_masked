
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lithium_t ;
struct TYPE_7__ {unsigned long baseval; unsigned long cfgval; unsigned long ctlval; int * lith; TYPE_2__ const* desc; } ;
typedef TYPE_1__ dma_chan_t ;
struct TYPE_8__ {unsigned long ad1843_slot; unsigned long direction; int ctlreg; int cfgreg; int basereg; } ;
typedef TYPE_2__ dma_chan_desc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,TYPE_2__ const*,int *,unsigned long,int,int,int,int) ;
 int FUNC_2 (char*,int ,unsigned long) ;
 int FUNC_3 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(dma_chan_t *VAR_11,
    const dma_chan_desc_t *VAR_12,
    lithium_t *VAR_13,
    unsigned long VAR_14,
    int VAR_15,
    int VAR_16,
    int VAR_17,
    int VAR_18)
{
 unsigned long VAR_19, VAR_20;
 unsigned long VAR_21, VAR_22;

 FUNC_1("(chan=0x%p, desc=0x%p, lith=0x%p, buffer_paddr=0x%lx, "
      "bufshift=%d, fragshift=%d, channels=%d, sampsize=%d)\n",
      VAR_11, VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_16, VAR_17, VAR_18);



 FUNC_5(VAR_13, VAR_12->ctlreg, VAR_7);

 FUNC_0(VAR_17 == 1 || VAR_17 == 2);
 if (VAR_17 == 2)
  VAR_19 = VAR_4;
 else
  VAR_19 = VAR_3;
 FUNC_0(VAR_18 == 1 || VAR_18 == 2);
 if (VAR_18 == 2)
  VAR_20 = VAR_0;
 else
  VAR_20 = VAR_1;
 VAR_11->desc = VAR_12;
 VAR_11->lith = VAR_13;







 FUNC_0(!(VAR_14 & 0xFF));
 VAR_11->baseval = (VAR_14 >> 8) | 1 << (37 - 8);

 VAR_11->cfgval = ((VAR_11->cfgval & ~VAR_2) |
   FUNC_4(VAR_12->ad1843_slot, VAR_5) |
   VAR_12->direction |
   VAR_19 |
   VAR_20);

 VAR_21 = VAR_15 - 6;
 VAR_22 = 13 - VAR_16;
 FUNC_0(VAR_21 >= 2 && VAR_21 <= 7);
 FUNC_0(VAR_22 >= 1 && VAR_22 <= 7);
 VAR_11->ctlval = ((VAR_11->ctlval & ~VAR_7) |
   FUNC_4(VAR_21, VAR_8) |
   (VAR_11->ctlval & ~VAR_6) |
   FUNC_4(VAR_22, VAR_9) |
   FUNC_4(0, VAR_10));

 FUNC_2("basereg 0x%x = 0x%lx\n", VAR_12->basereg, VAR_11->baseval);
 FUNC_2("cfgreg 0x%x = 0x%lx\n", VAR_12->cfgreg, VAR_11->cfgval);
 FUNC_2("ctlreg 0x%x = 0x%lx\n", VAR_12->ctlreg, VAR_11->ctlval);

 FUNC_5(VAR_13, VAR_12->basereg, VAR_11->baseval);
 FUNC_5(VAR_13, VAR_12->cfgreg, VAR_11->cfgval);
 FUNC_5(VAR_13, VAR_12->ctlreg, VAR_11->ctlval);

 FUNC_3();
}
