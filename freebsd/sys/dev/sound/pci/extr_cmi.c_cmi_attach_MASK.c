
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {scalar_t__ lock; void* reg; scalar_t__ regid; void* irq; scalar_t__ irqid; scalar_t__ ih; scalar_t__ parent_dmat; int bufsz; int sh; int st; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_3 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__,void*) ;
 int FUNC_8 (int ,void*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sc_info*) ;
 int FUNC_10 (struct sc_info*) ;
 int VAR_15 ;
 int FUNC_11 (struct sc_info*) ;
 int VAR_16 ;
 int FUNC_12 (struct sc_info*,int ) ;
 int VAR_17 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct sc_info*,int ) ;
 struct sc_info* FUNC_16 (int,int ,int) ;
 scalar_t__ FUNC_17 (int ,int *,struct sc_info*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int *,struct sc_info*) ;
 int FUNC_20 (int ,int,int ,int) ;
 scalar_t__ FUNC_21 (int ,struct sc_info*,int,int) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (void*) ;
 int FUNC_25 (void*) ;
 int FUNC_26 (void*) ;
 int VAR_18 ;
 scalar_t__ FUNC_27 (int ,char*) ;
 int FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (int ,void*,int ,int ,struct sc_info*,scalar_t__*) ;
 int FUNC_30 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_31(device_t VAR_19)
{
 struct sc_info *VAR_20;
 char VAR_21[VAR_12];

 VAR_20 = FUNC_16(sizeof(*VAR_20), VAR_5, VAR_6 | VAR_7);
 VAR_20->lock = FUNC_27(FUNC_13(VAR_19), "snd_cmi softc");
 FUNC_18(VAR_19);

 VAR_20->dev = VAR_19;
 VAR_20->regid = FUNC_1(0);
 VAR_20->reg = FUNC_3(VAR_19, VAR_13, &VAR_20->regid,
      VAR_10);
 if (!VAR_20->reg) {
  FUNC_14(VAR_19, "cmi_attach: Cannot allocate bus resource\n");
  goto bad;
 }
 VAR_20->st = FUNC_25(VAR_20->reg);
 VAR_20->sh = FUNC_24(VAR_20->reg);

 if (0)
  FUNC_11(VAR_20);

 VAR_20->irqid = 0;
 VAR_20->irq = FUNC_3(VAR_19, VAR_14, &VAR_20->irqid,
        VAR_10 | VAR_11);
 if (!VAR_20->irq ||
     FUNC_29(VAR_19, VAR_20->irq, VAR_4, VAR_15, VAR_20, &VAR_20->ih)) {
  FUNC_14(VAR_19, "cmi_attach: Unable to map interrupt\n");
  goto bad;
 }

 VAR_20->bufsz = FUNC_20(VAR_19, 4096, VAR_2, 65536);

 if (FUNC_4( FUNC_6(VAR_19), 2,
                      0,
                     VAR_1,
                      VAR_0,
                    ((void*)0), ((void*)0),
                     VAR_20->bufsz, 1,
                     0x3ffff, 0,
                      ((void*)0),
                      ((void*)0),
          &VAR_20->parent_dmat) != 0) {
  FUNC_14(VAR_19, "cmi_attach: Unable to create dma tag\n");
  goto bad;
 }

 FUNC_12(VAR_20, 0);
 if (FUNC_9(VAR_20))
  goto bad;

 if (FUNC_17(VAR_19, &VAR_16, VAR_20))
  goto bad;

 if (FUNC_21(VAR_19, VAR_20, 1, 1))
  goto bad;

 FUNC_10(VAR_20);

 FUNC_19(VAR_19, VAR_8, &VAR_17, VAR_20);
 FUNC_19(VAR_19, VAR_9, &VAR_17, VAR_20);

 FUNC_30(VAR_21, VAR_12, "at io 0x%jx irq %jd %s",
   FUNC_26(VAR_20->reg), FUNC_26(VAR_20->irq),FUNC_2(VAR_18));
 FUNC_22(VAR_19, VAR_21);

 FUNC_0(FUNC_23("cmi_attach: succeeded\n"));
 return 0;

 bad:
 if (VAR_20->parent_dmat)
  FUNC_5(VAR_20->parent_dmat);
 if (VAR_20->ih)
  FUNC_8(VAR_19, VAR_20->irq, VAR_20->ih);
 if (VAR_20->irq)
  FUNC_7(VAR_19, VAR_14, VAR_20->irqid, VAR_20->irq);
 if (VAR_20->reg)
  FUNC_7(VAR_19, VAR_13, VAR_20->regid, VAR_20->reg);
 if (VAR_20->lock)
  FUNC_28(VAR_20->lock);
 if (VAR_20)
  FUNC_15(VAR_20, VAR_5);

 return VAR_3;
}
