
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct via_info {int bufsz; int codec_caps; scalar_t__ lock; scalar_t__ sgd_dmat; int sgd_dmamap; scalar_t__ sgd_table; scalar_t__ sgd_addr; scalar_t__ parent_dmat; void* irq; scalar_t__ irqid; scalar_t__ ih; void* reg; scalar_t__ regid; scalar_t__ codec; int sh; int st; } ;
struct via_dma_op {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,struct via_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;
 void* FUNC_8 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,scalar_t__,int,int ,struct via_info*,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,void**,int ,int *) ;
 int FUNC_14 (scalar_t__,scalar_t__,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,scalar_t__,void*) ;
 int FUNC_17 (int ,void*,scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int VAR_31 ;
 int FUNC_20 (struct via_info*,int ) ;
 struct via_info* FUNC_21 (int,int ,int) ;
 scalar_t__ FUNC_22 (int ,int ,scalar_t__) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (int ,int ,int,int) ;
 int FUNC_26 (int ,int ,int *,struct via_info*) ;
 int FUNC_27 (int ,int,int ,int) ;
 scalar_t__ FUNC_28 (int ,struct via_info*,int,int) ;
 int FUNC_29 (int ,char*) ;
 int FUNC_30 (void*) ;
 int FUNC_31 (void*) ;
 int FUNC_32 (void*) ;
 scalar_t__ FUNC_33 (int ,char*) ;
 int FUNC_34 (scalar_t__) ;
 scalar_t__ FUNC_35 (int ,void*,int ,int ,struct via_info*,scalar_t__*) ;
 int VAR_32 ;
 int FUNC_36 (char*,int,char*,int ,int ,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_37 (struct via_info*,int ,int,int) ;
 int VAR_35 ;

__attribute__((used)) static int
FUNC_38(device_t VAR_36)
{
 struct via_info *VAR_37 = ((void*)0);
 char VAR_38[VAR_15];
 u_int32_t VAR_39, VAR_40;

 VAR_37 = FUNC_21(sizeof(*VAR_37), VAR_7, VAR_8 | VAR_9);
 VAR_37->lock = FUNC_33(FUNC_18(VAR_36),
     "snd_via82c686 softc");

 FUNC_23(VAR_36);


 VAR_39 = FUNC_24(VAR_36, VAR_18, 1);

 if ((VAR_39 & VAR_19) == 0) {

  FUNC_25(VAR_36, VAR_20, VAR_22, 1);
  FUNC_1(100);
  FUNC_25(VAR_36, VAR_20, VAR_22 | VAR_23, 1);
  FUNC_1(5);
  FUNC_25(VAR_36, VAR_20, VAR_22, 1);
 } else {

  FUNC_25(VAR_36, VAR_20, VAR_22, 1);
  FUNC_1(100);
  FUNC_25(VAR_36, VAR_20, VAR_22 | VAR_24, 1);
  FUNC_1(5);
  FUNC_25(VAR_36, VAR_20, VAR_22, 1);
  FUNC_1(5);
 }


 FUNC_25(VAR_36, VAR_20, VAR_21, 1);


 for (VAR_40 = 0; VAR_40 < 2000; VAR_40++) {
  VAR_39 = FUNC_24(VAR_36, VAR_18, 1);
  if (VAR_39 & VAR_19)
   break;
  FUNC_1(5000);
 }

 VAR_37->regid = FUNC_2(0);
 VAR_37->reg = FUNC_8(VAR_36, VAR_16,
  &VAR_37->regid, VAR_13);
 if (!VAR_37->reg) {
  FUNC_19(VAR_36, "cannot allocate bus resource.");
  goto bad;
 }
 VAR_37->st = FUNC_31(VAR_37->reg);
 VAR_37->sh = FUNC_30(VAR_37->reg);

 VAR_37->bufsz = FUNC_27(VAR_36, 4096, VAR_25, 65536);

 VAR_37->irqid = 0;
 VAR_37->irq = FUNC_8(VAR_36, VAR_17, &VAR_37->irqid,
  VAR_13 | VAR_14);
 if (!VAR_37->irq || FUNC_35(VAR_36, VAR_37->irq, VAR_6, VAR_34, VAR_37, &VAR_37->ih)) {
  FUNC_19(VAR_36, "unable to map interrupt\n");
  goto bad;
 }

 FUNC_37(VAR_37, VAR_26, VAR_28 | VAR_30 | VAR_29, 1);
 FUNC_37(VAR_37, VAR_27, VAR_28 | VAR_30 | VAR_29, 1);

 VAR_37->codec = FUNC_0(VAR_36, VAR_37, VAR_33);
 if (!VAR_37->codec)
  goto bad;

 if (FUNC_22(VAR_36, FUNC_6(), VAR_37->codec))
  goto bad;

 VAR_37->codec_caps = FUNC_5(VAR_37->codec);
 FUNC_7(VAR_37->codec,
   VAR_37->codec_caps & (VAR_0 | VAR_1));


 if (FUNC_9( FUNC_15(VAR_36), 2,
              0,
             VAR_4,
              VAR_3,
            ((void*)0), ((void*)0),
             VAR_37->bufsz, 1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_37->parent_dmat) != 0) {
  FUNC_19(VAR_36, "unable to create dma tag\n");
  goto bad;
 }






 if (FUNC_9( FUNC_15(VAR_36), 2,
              0,
             VAR_4,
              VAR_3,
            ((void*)0), ((void*)0),
             VAR_10 * sizeof(struct via_dma_op),
               1, 0x3ffff,
           0, ((void*)0),
             ((void*)0), &VAR_37->sgd_dmat) != 0) {
  FUNC_19(VAR_36, "unable to create dma tag\n");
  goto bad;
 }

 if (FUNC_13(VAR_37->sgd_dmat, (void **)&VAR_37->sgd_table,
     VAR_2, &VAR_37->sgd_dmamap) != 0)
  goto bad;
 if (FUNC_11(VAR_37->sgd_dmat, VAR_37->sgd_dmamap, VAR_37->sgd_table,
     VAR_10 * sizeof(struct via_dma_op), VAR_31, VAR_37, 0) != 0)
  goto bad;

 FUNC_36(VAR_38, VAR_15, "at io 0x%jx irq %jd %s",
   FUNC_32(VAR_37->reg), FUNC_32(VAR_37->irq),
   FUNC_3(VAR_32));


 if (FUNC_28(VAR_36, VAR_37, 1, 1)) goto bad;
 FUNC_26(VAR_36, VAR_11, &VAR_35, VAR_37);
 FUNC_26(VAR_36, VAR_12, &VAR_35, VAR_37);
 FUNC_29(VAR_36, VAR_38);
 return 0;
bad:
 if (VAR_37->codec) FUNC_4(VAR_37->codec);
 if (VAR_37->reg) FUNC_16(VAR_36, VAR_16, VAR_37->regid, VAR_37->reg);
 if (VAR_37->ih) FUNC_17(VAR_36, VAR_37->irq, VAR_37->ih);
 if (VAR_37->irq) FUNC_16(VAR_36, VAR_17, VAR_37->irqid, VAR_37->irq);
 if (VAR_37->parent_dmat) FUNC_10(VAR_37->parent_dmat);
 if (VAR_37->sgd_addr) FUNC_12(VAR_37->sgd_dmat, VAR_37->sgd_dmamap);
 if (VAR_37->sgd_table) FUNC_14(VAR_37->sgd_dmat, VAR_37->sgd_table, VAR_37->sgd_dmamap);
 if (VAR_37->sgd_dmat) FUNC_10(VAR_37->sgd_dmat);
 if (VAR_37->lock) FUNC_34(VAR_37->lock);
 if (VAR_37) FUNC_20(VAR_37, VAR_7);
 return VAR_5;
}
