
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct resource {int dummy; } ;
struct agg_info {int bufsz; int regid; int irqid; int lock; int * buf_dmat; int * stat_dmat; int stat_map; int * stat; int playchns; int pch; struct ac97_info* codec; void* ih; struct resource* irq; int sh; int st; struct resource* reg; int curpwr; scalar_t__ phys; int dev; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;


 struct ac97_info* FUNC_0 (int ,struct agg_info*,int ) ;
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
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct ac97_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (struct agg_info*) ;
 int FUNC_6 (struct agg_info*,int ) ;
 int FUNC_7 (struct agg_info*,int ) ;
 int FUNC_8 (struct agg_info*) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 struct resource* FUNC_9 (int ,int ,int*,int) ;
 scalar_t__ FUNC_10 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int ,int *,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int,struct resource*) ;
 int FUNC_14 (int ,struct resource*,void*) ;
 int VAR_28 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int *,int *,int ) ;
 int * FUNC_20 (int *,int,scalar_t__*,int *) ;
 int FUNC_21 (struct agg_info*,int ) ;
 struct agg_info* FUNC_22 (int,int ,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,struct ac97_info*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,char*,int) ;
 scalar_t__ FUNC_27 (int *) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,int ,int *,struct agg_info*) ;
 int FUNC_34 (int ,int,int ,int) ;
 int FUNC_35 (int ,struct agg_info*,int,int) ;
 int FUNC_36 (int ,char*) ;
 int VAR_29 ;
 scalar_t__ FUNC_37 (int ,int ,char*,int*) ;
 int FUNC_38 (struct resource*) ;
 int FUNC_39 (struct resource*) ;
 int FUNC_40 (struct resource*) ;
 int FUNC_41 (struct resource*) ;
 scalar_t__ FUNC_42 (int ,struct resource*,int ,int ,struct agg_info*,void**) ;
 int FUNC_43 (char*,int,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_44(device_t VAR_30)
{
 struct agg_info *VAR_31 = ((void*)0);
 u_int32_t VAR_32;
 int VAR_33 = FUNC_1(0);
 struct resource *VAR_34 = ((void*)0);
 struct ac97_info *VAR_35 = ((void*)0);
 int VAR_36 = 0;
 struct resource *VAR_37 = ((void*)0);
 void *VAR_38 = ((void*)0);
 char VAR_39[VAR_19];
 int VAR_40, VAR_41 = 0;

 VAR_31 = FUNC_22(sizeof(*VAR_31), VAR_10, VAR_11 | VAR_12);
 VAR_31->dev = VAR_30;

 FUNC_26(&VAR_31->lock, FUNC_15(VAR_30), "snd_maestro softc",
   VAR_8 | VAR_9);
 if (!FUNC_27(&VAR_31->lock)) {
  FUNC_18(VAR_30, "failed to create a mutex.\n");
  VAR_41 = VAR_3;
  goto bad;
 }

 if (FUNC_37(FUNC_16(VAR_30), FUNC_17(VAR_30),
     "dac", &VAR_40) == 0) {
      if (VAR_40 < 1)
   VAR_40 = 1;
  else if (VAR_40 > VAR_1)
   VAR_40 = VAR_1;
 } else
  VAR_40 = VAR_1;

 VAR_31->bufsz = FUNC_34(VAR_30, 4096, VAR_0, 65536);
 if (FUNC_10( FUNC_12(VAR_30),
                     4, 1 << (16+1),
                     VAR_7, VAR_2,
                     ((void*)0), ((void*)0),
                     VAR_31->bufsz, 1, 0x3ffff,
                     0,
                     VAR_28, &VAR_5,
          &VAR_31->buf_dmat) != 0) {
  FUNC_18(VAR_30, "unable to create dma tag\n");
  VAR_41 = VAR_3;
  goto bad;
 }

 if (FUNC_10( FUNC_12(VAR_30),
                     1 << VAR_22,
                     1 << (16+1),
                     VAR_7, VAR_2,
                     ((void*)0), ((void*)0),
                     3*VAR_31->bufsz, 1, 0x3ffff,
                     0,
                     VAR_28, &VAR_5,
          &VAR_31->stat_dmat) != 0) {
  FUNC_18(VAR_30, "unable to create dma tag\n");
  VAR_41 = VAR_3;
  goto bad;
 }


 VAR_31->stat = FUNC_20(VAR_31->stat_dmat, 3*VAR_31->bufsz, &VAR_31->phys,
     &VAR_31->stat_map);
 if (VAR_31->stat == ((void*)0)) {
  FUNC_18(VAR_30, "cannot allocate status buffer\n");
  VAR_41 = VAR_3;
  goto bad;
 }
 if (VAR_27)
  FUNC_18(VAR_30, "Maestro status/record buffer: %#llx\n",
      (long long)VAR_31->phys);


 VAR_31->curpwr = VAR_14;
 FUNC_32(VAR_30, VAR_13);

 FUNC_28(VAR_30);


 VAR_34 = FUNC_9(VAR_30, VAR_20, &VAR_33, VAR_17);
 if (VAR_34 != ((void*)0)) {
  VAR_31->reg = VAR_34;
  VAR_31->regid = VAR_33;
  VAR_31->st = FUNC_39(VAR_34);
  VAR_31->sh = FUNC_38(VAR_34);
 } else {
  FUNC_18(VAR_30, "unable to map register space\n");
  VAR_41 = VAR_4;
  goto bad;
 }
 VAR_37 = FUNC_9(VAR_30, VAR_21, &VAR_36,
     VAR_17 | VAR_18);
 if (VAR_37 != ((void*)0)) {
  VAR_31->irq = VAR_37;
  VAR_31->irqid = VAR_36;
 } else {
  FUNC_18(VAR_30, "unable to map interrupt\n");
  VAR_41 = VAR_4;
  goto bad;
 }


 if (FUNC_42(VAR_30, VAR_37, VAR_6, VAR_24, VAR_31, &VAR_38)) {
  FUNC_18(VAR_30, "unable to setup interrupt\n");
  VAR_41 = VAR_4;
  goto bad;
 } else
  VAR_31->ih = VAR_38;


 FUNC_5(VAR_31);
 FUNC_6(VAR_31, VAR_13);
 if (FUNC_7(VAR_31, 0) == 0x80) {

  FUNC_8(VAR_31);
  FUNC_18(VAR_30, "PT101 codec detected!\n");
  VAR_41 = VAR_4;
  goto bad;
 }
 FUNC_8(VAR_31);
 VAR_35 = FUNC_0(VAR_30, VAR_31, VAR_23);
 if (VAR_35 == ((void*)0)) {
  FUNC_18(VAR_30, "failed to create AC97 codec softc!\n");
  VAR_41 = VAR_3;
  goto bad;
 }
 if (FUNC_24(VAR_30, FUNC_3(), VAR_35) == -1) {
  FUNC_18(VAR_30, "mixer initialization failed!\n");
  VAR_41 = VAR_4;
  goto bad;
 }
 VAR_31->codec = VAR_35;

 VAR_41 = FUNC_35(VAR_30, VAR_31, VAR_40, 1);
 if (VAR_41)
  goto bad;

 FUNC_23(VAR_30);
 FUNC_5(VAR_31);
 FUNC_6(VAR_31, VAR_29);
 FUNC_8(VAR_31);
 for (VAR_32 = 0; VAR_32 < VAR_40; VAR_32++)
  FUNC_33(VAR_30, VAR_15, &VAR_25, VAR_31);
 FUNC_33(VAR_30, VAR_16, &VAR_26, VAR_31);
 FUNC_4(VAR_31->pch, VAR_31->playchns, VAR_31->bufsz);

 FUNC_43(VAR_39, VAR_19,
     "port 0x%jx-0x%jx irq %jd at device %d.%d on pci%d",
     FUNC_41(VAR_34), FUNC_40(VAR_34), FUNC_41(VAR_37),
     FUNC_31(VAR_30), FUNC_30(VAR_30), FUNC_29(VAR_30));
 FUNC_36(VAR_30, VAR_39);

 return 0;

 bad:
 if (VAR_35 != ((void*)0))
  FUNC_2(VAR_35);
 if (VAR_38 != ((void*)0))
  FUNC_14(VAR_30, VAR_37, VAR_38);
 if (VAR_37 != ((void*)0))
  FUNC_13(VAR_30, VAR_21, VAR_36, VAR_37);
 if (VAR_34 != ((void*)0))
  FUNC_13(VAR_30, VAR_20, VAR_33, VAR_34);
 if (VAR_31 != ((void*)0)) {
  if (VAR_31->stat != ((void*)0))
   FUNC_19(VAR_31->stat_dmat, VAR_31->stat, VAR_31->stat_map);
  if (VAR_31->stat_dmat != ((void*)0))
   FUNC_11(VAR_31->stat_dmat);
  if (VAR_31->buf_dmat != ((void*)0))
   FUNC_11(VAR_31->buf_dmat);
  if (FUNC_27(&VAR_31->lock))
   FUNC_25(&VAR_31->lock);
  FUNC_21(VAR_31, VAR_10);
 }

 return VAR_41;
}
