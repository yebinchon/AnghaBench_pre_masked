
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
struct sc_info {int rev; int * dmac_reg; void* dmac_rid; void* dmac_type; int * dmaa_reg; void* dmaa_rid; void* dmaa_type; int * enh_reg; void* enh_rid; void* enh_type; int * irq; void* irqid; scalar_t__ ih; scalar_t__ parent_dmat; void* dmac_sh; void* dmac_st; void* dmaa_sh; void* dmaa_st; int bufsz; void* enh_sh; void* enh_st; int dev; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 scalar_t__ VAR_25 ;
 void* FUNC_2 (int ,void*,void**,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int ,void*,void*,int *) ;
 int FUNC_8 (int ,void*,void*,int,int ) ;
 int FUNC_9 (int ,int *,scalar_t__) ;
 int VAR_26 ;
 int FUNC_10 (int ,char*,...) ;
 struct sc_info* FUNC_11 (int,int ,int) ;
 scalar_t__ FUNC_12 (int ,int *,struct sc_info*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,void*,int) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ,void*,int,int) ;
 int FUNC_18 (int ,int ,int *,struct sc_info*) ;
 int FUNC_19 (int ,int,int ,int) ;
 scalar_t__ FUNC_20 (int ,struct sc_info*,int,int) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,...) ;
 void* FUNC_23 (int *) ;
 void* FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ,int *,int ,int ,struct sc_info*,scalar_t__*) ;
 int VAR_27 ;
 int FUNC_27 (char*,int,char*,int ,int ,int ) ;
 int FUNC_28 (struct sc_info*) ;
 int VAR_28 ;
 int FUNC_29 (struct sc_info*) ;
 int VAR_29 ;
 int FUNC_30 (struct sc_info*,int ) ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static int
FUNC_31(device_t VAR_32) {
 struct sc_info *VAR_33;
 rman_res_t VAR_34, VAR_35, VAR_36;
 u_int32_t VAR_37;
 char VAR_38[VAR_12];
 u_long VAR_39, VAR_40, VAR_41, VAR_42;

 VAR_33 = FUNC_11(sizeof(*VAR_33), VAR_4, VAR_5 | VAR_6);
 VAR_33->dev = VAR_32;

 FUNC_13(VAR_32);

        if (FUNC_14(VAR_32) != VAR_7) {
                FUNC_10(VAR_32, "chip is in D%d power mode "
                              "-- setting to D0\n", FUNC_14(VAR_32));
                FUNC_16(VAR_32, VAR_7);
        }
 VAR_33->enh_rid = VAR_20;
 VAR_33->enh_type = VAR_23;
 VAR_33->enh_reg = FUNC_2(VAR_32, VAR_33->enh_type,
           &VAR_33->enh_rid, VAR_10);
 if (VAR_33->enh_reg == ((void*)0)) {
  FUNC_10(VAR_32, "sv_attach: cannot allocate enh\n");
  return VAR_2;
 }
 VAR_33->enh_st = FUNC_24(VAR_33->enh_reg);
 VAR_33->enh_sh = FUNC_23(VAR_33->enh_reg);

 VAR_37 = FUNC_15(VAR_32, VAR_14, 4);
 FUNC_0(FUNC_22("sv_attach: initial dmaa 0x%08x\n", VAR_37));
 VAR_37 = FUNC_15(VAR_32, VAR_16, 4);
 FUNC_0(FUNC_22("sv_attach: initial dmac 0x%08x\n", VAR_37));


 FUNC_17(VAR_32, VAR_14, VAR_19, 4);
 FUNC_17(VAR_32, VAR_16, 0, 4);


 VAR_33->irqid = 0;
        VAR_33->irq = FUNC_2(VAR_32, VAR_24, &VAR_33->irqid,
        VAR_10 | VAR_11);
        if (!VAR_33->irq ||
     FUNC_26(VAR_32, VAR_33->irq, 0, VAR_28, VAR_33, &VAR_33->ih)) {
                FUNC_10(VAR_32, "sv_attach: Unable to map interrupt\n");
                goto fail;
        }

 VAR_33->bufsz = FUNC_19(VAR_32, 4096, VAR_13, 65536);
        if (FUNC_3( FUNC_5(VAR_32), 2,
                      0,
                                          VAR_1,
                                           VAR_0,
                                         ((void*)0), ((void*)0),
                                          VAR_33->bufsz, 1,
                                          0x3ffff, 0,
                      VAR_26,
                     &VAR_3, &VAR_33->parent_dmat) != 0) {
                FUNC_10(VAR_32, "sv_attach: Unable to create dma tag\n");
                goto fail;
        }


 FUNC_29(VAR_33);
 FUNC_30(VAR_33, 0);
 FUNC_28(VAR_33);

 if (FUNC_12(VAR_32, &VAR_29, VAR_33) != 0) {
  FUNC_10(VAR_32, "sv_attach: Mixer failed to initialize\n");
  goto fail;
 }
 FUNC_6(VAR_32, VAR_23, VAR_22, &VAR_35, &VAR_34);
 FUNC_6(VAR_32, VAR_23, VAR_21, &VAR_36, &VAR_34);

 if (VAR_36 < VAR_35) {
  VAR_41 = VAR_36;
  VAR_42 = VAR_35;
 } else {
  VAR_41 = VAR_35;
  VAR_42 = VAR_36;
 }



 if ((VAR_42 - VAR_41 >= 0x800) ||
     ((VAR_42 - VAR_41) % 0x200)) {
  FUNC_10(VAR_32, "sv_attach: resource assumptions not met "
         "(midi 0x%08lx, games 0x%08lx)\n",
         (u_long)VAR_35, (u_long)VAR_36);
  goto fail;
 }

 VAR_39 = VAR_41 + 0x40;
 VAR_40 = VAR_39 + 0x40;



 FUNC_8(VAR_32, VAR_23, VAR_14, VAR_39, VAR_15);
 FUNC_8(VAR_32, VAR_23, VAR_16, VAR_40, VAR_17);


 VAR_33->dmaa_rid = VAR_14;
 VAR_33->dmaa_type = VAR_23;
 VAR_33->dmaa_reg = FUNC_2(VAR_32, VAR_33->dmaa_type,
            &VAR_33->dmaa_rid, VAR_10);
 if (VAR_33->dmaa_reg == ((void*)0)) {
  FUNC_10(VAR_32, "sv_attach: cannot allocate dmaa\n");
  goto fail;
 }
 VAR_33->dmaa_st = FUNC_24(VAR_33->dmaa_reg);
 VAR_33->dmaa_sh = FUNC_23(VAR_33->dmaa_reg);


 VAR_37 = FUNC_15(VAR_32, VAR_14, 4) | VAR_18 | VAR_19;
 VAR_37 = ((u_int32_t)VAR_39 & 0xfffffff0) | (VAR_37 & 0x0f);
 FUNC_17(VAR_32, VAR_14, VAR_37, 4);
 FUNC_0(FUNC_22("dmaa: 0x%x 0x%x\n", VAR_37, FUNC_15(VAR_32, VAR_14, 4)));


 VAR_33->dmac_rid = VAR_16;
 VAR_33->dmac_type = VAR_23;
 VAR_33->dmac_reg = FUNC_2(VAR_32, VAR_33->dmac_type,
            &VAR_33->dmac_rid, VAR_10);
 if (VAR_33->dmac_reg == ((void*)0)) {
  FUNC_10(VAR_32, "sv_attach: cannot allocate dmac\n");
  goto fail;
 }
 VAR_33->dmac_st = FUNC_24(VAR_33->dmac_reg);
 VAR_33->dmac_sh = FUNC_23(VAR_33->dmac_reg);


 VAR_37 = FUNC_15(VAR_32, VAR_16, 4) | VAR_18 | VAR_19;
 VAR_37 = ((u_int32_t)VAR_40 & 0xfffffff0) | (VAR_37 & 0x0f);
 FUNC_17(VAR_32, VAR_16, VAR_37, 4);
 FUNC_0(FUNC_22("dmac: 0x%x 0x%x\n", VAR_37, FUNC_15(VAR_32, VAR_16, 4)));

 if (VAR_25)
  FUNC_22("Sonicvibes: revision %d.\n", VAR_33->rev);

        if (FUNC_20(VAR_32, VAR_33, 1, 1)) {
  FUNC_10(VAR_32, "sv_attach: pcm_register fail\n");
                goto fail;
 }

        FUNC_18(VAR_32, VAR_8, &VAR_30, VAR_33);
        FUNC_18(VAR_32, VAR_9, &VAR_31, VAR_33);

        FUNC_27(VAR_38, VAR_12, "at io 0x%jx irq %jd %s",
                 FUNC_25(VAR_33->enh_reg), FUNC_25(VAR_33->irq),FUNC_1(VAR_27));
        FUNC_21(VAR_32, VAR_38);

        FUNC_0(FUNC_22("sv_attach: succeeded\n"));

 return 0;

 fail:
 if (VAR_33->parent_dmat)
  FUNC_4(VAR_33->parent_dmat);
        if (VAR_33->ih)
  FUNC_9(VAR_32, VAR_33->irq, VAR_33->ih);
        if (VAR_33->irq)
  FUNC_7(VAR_32, VAR_24, VAR_33->irqid, VAR_33->irq);
 if (VAR_33->enh_reg)
  FUNC_7(VAR_32, VAR_33->enh_type, VAR_33->enh_rid, VAR_33->enh_reg);
 if (VAR_33->dmaa_reg)
  FUNC_7(VAR_32, VAR_33->dmaa_type, VAR_33->dmaa_rid, VAR_33->dmaa_reg);
 if (VAR_33->dmac_reg)
  FUNC_7(VAR_32, VAR_33->dmac_type, VAR_33->dmac_rid, VAR_33->dmac_reg);
 return VAR_2;
}
