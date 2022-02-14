
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_info {int type; scalar_t__ lock; scalar_t__ parent_dmat; void* irq; scalar_t__ irqid; scalar_t__ ih; void* reg; scalar_t__ regid; int regtype; int bufsz; int hwchns; scalar_t__ playchns; int sh; int st; int rev; } ;
struct ac97_info {int dummy; } ;
typedef struct tr_info device_t ;
typedef int bus_addr_t ;


 struct ac97_info* FUNC_0 (struct tr_info,struct tr_info*,int ) ;
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
 scalar_t__ FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_24 ;
 void* FUNC_5 (struct tr_info,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct tr_info) ;
 int FUNC_9 (struct tr_info,int ,scalar_t__,void*) ;
 int FUNC_10 (struct tr_info,void*,scalar_t__) ;
 int VAR_25 ;
 scalar_t__ FUNC_11 (int ,struct tr_info**,int*) ;
 int FUNC_12 (struct tr_info) ;
 int FUNC_13 (struct tr_info) ;
 int FUNC_14 (struct tr_info) ;
 int FUNC_15 (struct tr_info) ;
 int FUNC_16 (struct tr_info,char*,...) ;
 int FUNC_17 (struct tr_info*,int ) ;
 struct tr_info* FUNC_18 (int,int ,int) ;
 int FUNC_19 (struct tr_info,int ,struct ac97_info*) ;
 int FUNC_20 (struct tr_info) ;
 int FUNC_21 (struct tr_info) ;
 int FUNC_22 (struct tr_info) ;
 int FUNC_23 (struct tr_info,int,int) ;
 int FUNC_24 (struct tr_info,int,int,int) ;
 int FUNC_25 (struct tr_info,int ,int *,struct tr_info*) ;
 int FUNC_26 (struct tr_info,int,int ,int) ;
 scalar_t__ FUNC_27 (struct tr_info,struct tr_info*,int,int) ;
 int FUNC_28 (struct tr_info,char*) ;
 int FUNC_29 (char*,int) ;
 scalar_t__ FUNC_30 (int ,int ,char*,int*) ;
 int FUNC_31 (void*) ;
 int FUNC_32 (void*) ;
 int FUNC_33 (void*) ;
 scalar_t__ FUNC_34 (int ,char*) ;
 int FUNC_35 (scalar_t__) ;
 scalar_t__ FUNC_36 (struct tr_info,void*,int ,int ,struct tr_info*,scalar_t__*) ;
 int VAR_26 ;
 int FUNC_37 (char*,int,char*,int ,int ,int ) ;
 int VAR_27 ;
 int FUNC_38 (struct tr_info*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static int
FUNC_39(device_t VAR_31)
{
 struct tr_info *VAR_32;
 struct ac97_info *VAR_33 = ((void*)0);
 bus_addr_t VAR_34;
 int VAR_35, VAR_36;
 char VAR_37[VAR_16];






 VAR_32 = FUNC_18(sizeof(*VAR_32), VAR_8, VAR_10 | VAR_11);
 VAR_32->type = FUNC_21(VAR_31);
 VAR_32->rev = FUNC_22(VAR_31);
 VAR_32->lock = FUNC_34(FUNC_13(VAR_31), "snd_t4dwave softc");

 if (FUNC_30(FUNC_12(VAR_31), FUNC_15(VAR_31),
     "dac", &VAR_35) == 0) {
      if (VAR_35 < 1)
   VAR_36 = 1;
  else if (VAR_35 > VAR_23)
   VAR_36 = VAR_23;
  else
   VAR_36 = VAR_35;
 } else {
  switch (VAR_32->type) {
  case 128:
   VAR_36 = VAR_3;
   break;
  default:
   VAR_36 = VAR_23;
   break;
  }
 }

 FUNC_20(VAR_31);

 VAR_32->regid = FUNC_1(0);
 VAR_32->regtype = VAR_17;
 VAR_32->reg = FUNC_5(VAR_31, VAR_32->regtype, &VAR_32->regid,
  VAR_14);
 if (VAR_32->reg) {
  VAR_32->st = FUNC_32(VAR_32->reg);
  VAR_32->sh = FUNC_31(VAR_32->reg);
 } else {
  FUNC_16(VAR_31, "unable to map register space\n");
  goto bad;
 }

 if (FUNC_38(VAR_32) == -1) {
  FUNC_16(VAR_31, "unable to initialize the card\n");
  goto bad;
 }
 VAR_32->playchns = 0;

 VAR_33 = FUNC_0(VAR_31, VAR_32, VAR_27);
 if (VAR_33 == ((void*)0)) goto bad;
 if (FUNC_19(VAR_31, FUNC_4(), VAR_33) == -1) goto bad;

 VAR_32->irqid = 0;
 VAR_32->irq = FUNC_5(VAR_31, VAR_18, &VAR_32->irqid,
     VAR_14 | VAR_15);
 if (!VAR_32->irq || FUNC_36(VAR_31, VAR_32->irq, 0, VAR_28, VAR_32, &VAR_32->ih)) {
  FUNC_16(VAR_31, "unable to map interrupt\n");
  goto bad;
 }

 if (VAR_32->type == 128) {
  VAR_34 = VAR_1;
  VAR_32->hwchns = VAR_2;
  VAR_32->bufsz = VAR_0;
 } else {
  VAR_34 = VAR_21;
  VAR_32->hwchns = VAR_22;
  VAR_32->bufsz = FUNC_26(VAR_31, 4096, VAR_20,
      65536);
 }

 if (FUNC_6( FUNC_8(VAR_31),
               VAR_19,
              0,
             VAR_34,
              VAR_4,
            ((void*)0), ((void*)0),
             VAR_32->bufsz, 1, VAR_32->bufsz,
           0, VAR_25,
             &VAR_7, &VAR_32->parent_dmat) != 0) {
  FUNC_16(VAR_31, "unable to create dma tag\n");
  goto bad;
 }

 FUNC_37(VAR_37, 64, "at io 0x%jx irq %jd %s",
   FUNC_33(VAR_32->reg), FUNC_33(VAR_32->irq),FUNC_2(VAR_26));

 if (FUNC_27(VAR_31, VAR_32, VAR_36, 1))
  goto bad;
 FUNC_25(VAR_31, VAR_13, &VAR_30, VAR_32);
 for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++)
  FUNC_25(VAR_31, VAR_12, &VAR_29, VAR_32);
 FUNC_28(VAR_31, VAR_37);

 return 0;

bad:
 if (VAR_33) FUNC_3(VAR_33);
 if (VAR_32->reg) FUNC_9(VAR_31, VAR_32->regtype, VAR_32->regid, VAR_32->reg);
 if (VAR_32->ih) FUNC_10(VAR_31, VAR_32->irq, VAR_32->ih);
 if (VAR_32->irq) FUNC_9(VAR_31, VAR_18, VAR_32->irqid, VAR_32->irq);
 if (VAR_32->parent_dmat) FUNC_7(VAR_32->parent_dmat);
 if (VAR_32->lock) FUNC_35(VAR_32->lock);
 FUNC_17(VAR_32, VAR_8);
 return VAR_6;
}
