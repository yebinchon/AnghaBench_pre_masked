
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_slot {scalar_t__ state; int slot; int dev; } ;
struct mvs_channel {int rslots; int toslots; int sim; int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct mvs_slot *VAR_8)
{
 device_t VAR_9 = VAR_8->dev;
 struct mvs_channel *VAR_10 = FUNC_2(VAR_9);


 if (VAR_8->state < VAR_5)
  return;
 FUNC_3(VAR_9, "Timeout on slot %d\n", VAR_8->slot);
 FUNC_3(VAR_9, "iec %08x sstat %08x serr %08x edma_s %08x "
     "dma_c %08x dma_s %08x rs %08x status %02x\n",
     FUNC_1(VAR_10->r_mem, VAR_3),
     FUNC_1(VAR_10->r_mem, VAR_7), FUNC_1(VAR_10->r_mem, VAR_6),
     FUNC_1(VAR_10->r_mem, VAR_4), FUNC_1(VAR_10->r_mem, VAR_1),
     FUNC_1(VAR_10->r_mem, VAR_2), VAR_10->rslots,
     FUNC_0(VAR_10->r_mem, VAR_0));

 FUNC_5(VAR_9);

 if (VAR_10->toslots == 0)
  FUNC_6(VAR_10->sim, 1);
 VAR_10->toslots |= (1 << VAR_8->slot);
 if ((VAR_10->rslots & ~VAR_10->toslots) == 0)
  FUNC_4(VAR_9);
 else
  FUNC_3(VAR_9, " ... waiting for slots %08x\n",
      VAR_10->rslots & ~VAR_10->toslots);
}
