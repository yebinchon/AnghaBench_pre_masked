
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {scalar_t__ regtype; scalar_t__ parent_dmat; int * irq; void* irqid; scalar_t__ ih; int * mem; void* memid; int * reg; void* regid; int bufsz; int sh; int st; int type; int dev; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;


 struct ac97_info* FUNC_0 (int ,struct sc_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,scalar_t__,void**,int) ;
 scalar_t__ FUNC_6 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,scalar_t__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,void*,int *) ;
 int FUNC_10 (int ,int *,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (struct sc_info*) ;
 int VAR_19 ;
 int FUNC_12 (struct sc_info*,int ) ;
 int VAR_20 ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct sc_info*,int ) ;
 struct sc_info* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int ,int ,struct ac97_info*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (int ,int ,int *,struct sc_info*) ;
 int FUNC_22 (int ,int,int ,int) ;
 scalar_t__ FUNC_23 (int ,struct sc_info*,int,int) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int VAR_21 ;
 scalar_t__ FUNC_28 (int ,int *,int ,int ,struct sc_info*,scalar_t__*) ;
 int FUNC_29 (char*,int,char*,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_22)
{
    struct sc_info *VAR_23;
    struct ac97_info *VAR_24 = ((void*)0);
    char VAR_25[VAR_13];

    VAR_23 = FUNC_15(sizeof(*VAR_23), VAR_5, VAR_6 | VAR_7);
    VAR_23->dev = VAR_22;
    VAR_23->type = FUNC_18(VAR_22);

    FUNC_17(VAR_22);

    if (FUNC_19(VAR_22) != VAR_8) {

 FUNC_13(VAR_22, "chip is in D%d power mode "
        "-- setting to D0\n", FUNC_19(VAR_22));

 FUNC_20(VAR_22, VAR_8);
    }

    VAR_23->regid = FUNC_1(0);
    VAR_23->regtype = VAR_16;
    VAR_23->reg = FUNC_5(VAR_22, VAR_23->regtype, &VAR_23->regid, VAR_11);
    if (!VAR_23->reg) {
 VAR_23->regtype = VAR_14;
 VAR_23->reg = FUNC_5(VAR_22, VAR_23->regtype, &VAR_23->regid,
      VAR_11);
 if (!VAR_23->reg) {
     FUNC_13(VAR_22, "unable to allocate register space\n");
     goto bad;
 }
    }
    VAR_23->st = FUNC_26(VAR_23->reg);
    VAR_23->sh = FUNC_25(VAR_23->reg);

    VAR_23->memid = FUNC_1(1);
    VAR_23->mem = FUNC_5(VAR_22, VAR_16, &VAR_23->memid,
         VAR_11);
    if (VAR_23->mem == ((void*)0)) {
 FUNC_13(VAR_22, "unable to allocate fifo space\n");
 goto bad;
    }

    VAR_23->irqid = 0;
    VAR_23->irq = FUNC_5(VAR_22, VAR_15, &VAR_23->irqid,
         VAR_11 | VAR_12);
    if (!VAR_23->irq) {
 FUNC_13(VAR_22, "unable to allocate interrupt\n");
 goto bad;
    }

    if (FUNC_28(VAR_22, VAR_23->irq, 0, VAR_19, VAR_23, &VAR_23->ih)) {
 FUNC_13(VAR_22, "unable to setup interrupt\n");
 goto bad;
    }

    VAR_23->bufsz = FUNC_22(VAR_22, 4096, VAR_2, 65536);

    if (FUNC_6( FUNC_8(VAR_22), 2,
                  0,
                 VAR_1,
                  VAR_0,
                ((void*)0), ((void*)0),
                 VAR_23->bufsz, 1,
                 0x3ffff,
               0, VAR_17,
                 &VAR_4, &VAR_23->parent_dmat) != 0) {
 FUNC_13(VAR_22, "unable to create dma tag\n");
 goto bad;
    }


    FUNC_12(VAR_23, 0);


    if (FUNC_11(VAR_23) == -1) {
 FUNC_13(VAR_22, "unable to initialize the card\n");
 goto bad;
    }


    VAR_24 = FUNC_0(VAR_22, VAR_23, VAR_18);
    if (VAR_24 == ((void*)0))
        goto bad;

    FUNC_16(VAR_22, FUNC_4(), VAR_24);

    if (FUNC_23(VAR_22, VAR_23, 1, 1))
 goto bad;

    FUNC_21(VAR_22, VAR_9, &VAR_20, VAR_23);
    FUNC_21(VAR_22, VAR_10, &VAR_20, VAR_23);

    FUNC_29(VAR_25, VAR_13, "at %s 0x%jx irq %jd %s",
      (VAR_23->regtype == VAR_14)? "io" : "memory",
      FUNC_27(VAR_23->reg), FUNC_27(VAR_23->irq),FUNC_2(VAR_21));
    FUNC_24(VAR_22, VAR_25);

    return 0;

 bad:
    if (VAR_24)
 FUNC_3(VAR_24);
    if (VAR_23->reg)
 FUNC_9(VAR_22, VAR_23->regtype, VAR_23->regid, VAR_23->reg);
    if (VAR_23->mem)
 FUNC_9(VAR_22, VAR_16, VAR_23->memid, VAR_23->mem);
    if (VAR_23->ih)
 FUNC_10(VAR_22, VAR_23->irq, VAR_23->ih);
    if (VAR_23->irq)
 FUNC_9(VAR_22, VAR_15, VAR_23->irqid, VAR_23->irq);
    if (VAR_23->parent_dmat)
 FUNC_7(VAR_23->parent_dmat);
    FUNC_14(VAR_23, VAR_5);

    return VAR_3;
}
