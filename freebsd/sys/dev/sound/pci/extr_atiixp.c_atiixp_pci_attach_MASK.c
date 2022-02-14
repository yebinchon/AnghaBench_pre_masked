
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* ich_func ) (struct atiixp_info*) ;struct atiixp_info* ich_arg; } ;
struct atiixp_info {int poll_ticks; int polling; int bufsz; int blkcnt; TYPE_1__ delayed_attach; int sgd_table; int sgd_dmamap; int sgd_dmat; int parent_dmat; int ih; void* irq; scalar_t__ irqid; void* reg; int sh; int st; scalar_t__ regid; int regtype; int dev; int poll_timer; int lock; } ;
struct atiixp_dma_op {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct atiixp_info*) ;
 int FUNC_2 (struct atiixp_info*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct atiixp_info*) ;
 void* FUNC_4 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int,int ,struct atiixp_info*,int ) ;
 int FUNC_7 (int ,void**,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 struct atiixp_info* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_18 (int ,int ,char*,int*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (int ,char*) ;
 scalar_t__ FUNC_22 (int ,void*,int ,int ,struct atiixp_info*,int *) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_24)
{
 struct atiixp_info *VAR_25;
 int VAR_26;

 VAR_25 = FUNC_15(sizeof(*VAR_25), VAR_14, VAR_15 | VAR_16);
 VAR_25->lock = FUNC_21(FUNC_12(VAR_24), "snd_atiixp softc");
 VAR_25->dev = VAR_24;

 FUNC_9(&VAR_25->poll_timer, 1);
 VAR_25->poll_ticks = 1;

 if (FUNC_18(FUNC_11(VAR_25->dev),
     FUNC_13(VAR_25->dev), "polling", &VAR_26) == 0 && VAR_26 != 0)
  VAR_25->polling = 1;
 else
  VAR_25->polling = 0;

 FUNC_16(VAR_24);

 VAR_25->regid = FUNC_0(0);
 VAR_25->regtype = VAR_20;
 VAR_25->reg = FUNC_4(VAR_24, VAR_25->regtype,
     &VAR_25->regid, VAR_17);

 if (!VAR_25->reg) {
  FUNC_14(VAR_24, "unable to allocate register space\n");
  goto bad;
 }

 VAR_25->st = FUNC_20(VAR_25->reg);
 VAR_25->sh = FUNC_19(VAR_25->reg);

 VAR_25->bufsz = FUNC_17(VAR_24, VAR_4,
     VAR_2, VAR_3);

 VAR_25->irqid = 0;
 VAR_25->irq = FUNC_4(VAR_24, VAR_19, &VAR_25->irqid,
     VAR_17 | VAR_18);
 if (!VAR_25->irq || FUNC_22(VAR_24, VAR_25->irq, VAR_13,
     VAR_22, VAR_25, &VAR_25->ih)) {
  FUNC_14(VAR_24, "unable to map interrupt\n");
  goto bad;
 }




 if (FUNC_18(FUNC_11(VAR_24),
     FUNC_13(VAR_24), "blocksize", &VAR_26) == 0 && VAR_26 > 0) {
  VAR_26 &= VAR_0;
  if (VAR_26 < VAR_1)
   VAR_26 = VAR_1;
  VAR_25->blkcnt = VAR_25->bufsz / VAR_26;
  VAR_26 = 0;
  while (VAR_25->blkcnt >> VAR_26)
   VAR_26++;
  VAR_25->blkcnt = 1 << (VAR_26 - 1);
  if (VAR_25->blkcnt < VAR_7)
   VAR_25->blkcnt = VAR_7;
  else if (VAR_25->blkcnt > VAR_6)
   VAR_25->blkcnt = VAR_6;

 } else
  VAR_25->blkcnt = VAR_5;




 if (FUNC_5( FUNC_8(VAR_24), 2,
              0,
             VAR_11,
              VAR_10,
            ((void*)0), ((void*)0),
             VAR_25->bufsz, 1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_25->parent_dmat) != 0) {
  FUNC_14(VAR_24, "unable to create dma tag\n");
  goto bad;
 }

 if (FUNC_5( FUNC_8(VAR_24), 2,
              0,
             VAR_11,
              VAR_10,
            ((void*)0), ((void*)0),
             VAR_6 * VAR_8 *
  sizeof(struct atiixp_dma_op),
               1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_25->sgd_dmat) != 0) {
  FUNC_14(VAR_24, "unable to create dma tag\n");
  goto bad;
 }

 if (FUNC_7(VAR_25->sgd_dmat, (void **)&VAR_25->sgd_table,
     VAR_9, &VAR_25->sgd_dmamap) == -1)
  goto bad;

 if (FUNC_6(VAR_25->sgd_dmat, VAR_25->sgd_dmamap, VAR_25->sgd_table,
     VAR_6 * VAR_8 *
     sizeof(struct atiixp_dma_op), VAR_21, VAR_25, 0))
  goto bad;


 FUNC_2(VAR_25);

 VAR_25->delayed_attach.ich_func = FUNC_1;
 VAR_25->delayed_attach.ich_arg = VAR_25;
 if (VAR_23 == 0 ||
     FUNC_10(&VAR_25->delayed_attach) != 0) {
  VAR_25->delayed_attach.ich_func = ((void*)0);
  FUNC_1(VAR_25);
 }

 return (0);

bad:
 FUNC_3(VAR_25);
 return (VAR_12);
}
