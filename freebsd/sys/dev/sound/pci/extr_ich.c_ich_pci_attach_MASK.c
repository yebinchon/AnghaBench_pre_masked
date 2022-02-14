
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int (* ich_func ) (struct sc_info*) ;struct sc_info* ich_arg; } ;
struct sc_info {scalar_t__ vendor; scalar_t__ devid; int swap_reg; int sample_size; int flags; int bufsz; int blkcnt; int hasmic; int hasvra; int hasvrm; int dtbl_size; scalar_t__ ich_lock; scalar_t__ dmat; scalar_t__ chan_dmat; scalar_t__ dtmap; scalar_t__ dtbl; void* nabmbar; scalar_t__ nabmbarid; int regtype; void* nambar; scalar_t__ nambarid; void* irq; scalar_t__ irqid; scalar_t__ ih; int * codec; TYPE_1__ intrhook; void* nabmbarh; void* nabmbart; void* nambarh; void* nambart; int dev; } ;
struct ich_desc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,struct sc_info*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__,int,int ,struct sc_info*,int ) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,void**,int,scalar_t__*) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,scalar_t__,void*) ;
 int FUNC_17 (int ,void*,scalar_t__) ;
 scalar_t__ VAR_47 ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (struct sc_info*,int ) ;
 int VAR_48 ;
 int FUNC_24 (struct sc_info*) ;
 scalar_t__ FUNC_25 (struct sc_info*) ;
 int FUNC_26 (struct sc_info*) ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_27 (struct sc_info*) ;
 int VAR_51 ;
 struct sc_info* FUNC_28 (int,int ,int) ;
 int FUNC_29 (int ,int ,int *) ;
 int FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (int ) ;
 int FUNC_35 (int ,int ,int ,int) ;
 int FUNC_36 (int ,int ,int *,struct sc_info*) ;
 int FUNC_37 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_38 (int ,struct sc_info*,int,int) ;
 scalar_t__ FUNC_39 (int ,int ,char*,int*) ;
 void* FUNC_40 (void*) ;
 void* FUNC_41 (void*) ;
 scalar_t__ FUNC_42 (int ,char*) ;
 int FUNC_43 (scalar_t__) ;
 scalar_t__ FUNC_44 (int ,void*,int ,int ,struct sc_info*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_45(device_t VAR_52)
{
 uint32_t VAR_53;
 uint16_t VAR_54;
 uint16_t VAR_55, VAR_56;
 struct sc_info *VAR_57;
 int VAR_58;

 VAR_57 = FUNC_28(sizeof(*VAR_57), VAR_30, VAR_31 | VAR_32);
 VAR_57->ich_lock = FUNC_42(FUNC_20(VAR_52), "snd_ich softc");
 VAR_57->dev = VAR_52;

 VAR_56 = VAR_57->vendor = FUNC_34(VAR_52);
 VAR_55 = VAR_57->devid = FUNC_31(VAR_52);
 VAR_53 = (FUNC_32(VAR_52) << 16) | FUNC_33(VAR_52);




 if (VAR_56 == VAR_43 && VAR_55 == VAR_42) {
  VAR_57->swap_reg = 1;
  VAR_57->sample_size = 1;
 } else {
  VAR_57->swap_reg = 0;
  VAR_57->sample_size = 2;
 }







 if (VAR_56 == VAR_28 && VAR_55 == VAR_23)
  VAR_57->flags |= VAR_12;





 FUNC_30(VAR_52);
 if (VAR_56 == VAR_28 && (VAR_55 == VAR_24 ||
     VAR_55 == VAR_25 || VAR_55 == VAR_22 ||
     VAR_55 == VAR_26 || VAR_55 == VAR_27)) {
  VAR_57->nambarid = VAR_35;
  VAR_57->nabmbarid = VAR_34;
  VAR_57->regtype = VAR_46;
  FUNC_35(VAR_52, VAR_33, VAR_16, 1);
 } else {
  VAR_57->nambarid = VAR_37;
  VAR_57->nabmbarid = VAR_36;
  VAR_57->regtype = VAR_44;
 }

 VAR_57->nambar = FUNC_8(VAR_52, VAR_57->regtype,
  &VAR_57->nambarid, VAR_40);
 VAR_57->nabmbar = FUNC_8(VAR_52, VAR_57->regtype,
  &VAR_57->nabmbarid, VAR_40);

 if (!VAR_57->nambar || !VAR_57->nabmbar) {
  FUNC_22(VAR_52, "unable to map IO port space\n");
  goto bad;
 }

 VAR_57->nambart = FUNC_41(VAR_57->nambar);
 VAR_57->nambarh = FUNC_40(VAR_57->nambar);
 VAR_57->nabmbart = FUNC_41(VAR_57->nabmbar);
 VAR_57->nabmbarh = FUNC_40(VAR_57->nabmbar);

 VAR_57->bufsz = FUNC_37(VAR_52,
     VAR_21, VAR_11, VAR_18);

 if (FUNC_39(FUNC_19(VAR_52),
     FUNC_21(VAR_52), "blocksize", &VAR_58) == 0 && VAR_58 > 0) {
  VAR_57->blkcnt = VAR_57->bufsz / VAR_58;
  VAR_58 = 0;
  while (VAR_57->blkcnt >> VAR_58)
   VAR_58++;
  VAR_57->blkcnt = 1 << (VAR_58 - 1);
  if (VAR_57->blkcnt < VAR_19)
   VAR_57->blkcnt = VAR_19;
  else if (VAR_57->blkcnt > VAR_17)
   VAR_57->blkcnt = VAR_17;
 } else
  VAR_57->blkcnt = VAR_10;

 if (FUNC_39(FUNC_19(VAR_52),
     FUNC_21(VAR_52), "highlatency", &VAR_58) == 0 && VAR_58 != 0) {
  VAR_57->flags |= VAR_15;
  VAR_57->blkcnt = VAR_19;
 }

 if (FUNC_39(FUNC_19(VAR_52),
     FUNC_21(VAR_52), "fixedrate", &VAR_58) == 0 && VAR_58 != 0)
  VAR_57->flags |= VAR_14;

 if (FUNC_39(FUNC_19(VAR_52),
     FUNC_21(VAR_52), "micchannel_enabled", &VAR_58) == 0 && VAR_58 != 0)
  VAR_57->hasmic = 1;

 VAR_57->irqid = 0;
 VAR_57->irq = FUNC_8(VAR_52, VAR_45, &VAR_57->irqid,
     VAR_40 | VAR_41);
 if (!VAR_57->irq || FUNC_44(VAR_52, VAR_57->irq, VAR_29, VAR_49,
     VAR_57, &VAR_57->ih)) {
  FUNC_22(VAR_52, "unable to map interrupt\n");
  goto bad;
 }

 if (FUNC_25(VAR_57)) {
  FUNC_22(VAR_52, "unable to initialize the card\n");
  goto bad;
 }

 VAR_57->codec = FUNC_0(VAR_52, VAR_57, VAR_48);
 if (VAR_57->codec == ((void*)0))
  goto bad;





 switch (VAR_53) {
 case 0x202f161f:
 case 0x203a161f:
 case 0x203e161f:
 case 0x204c161f:
 case 0x8144104d:
 case 0x8197104d:
 case 0x81c0104d:
 case 0x81c5104d:
 case 0x3089103c:
 case 0x309a103c:
 case 0x82131033:
 case 0x82be1033:
  FUNC_7(VAR_57->codec, FUNC_4(VAR_57->codec) | VAR_3);
  break;
 default:
  break;
 }

 FUNC_29(VAR_52, FUNC_5(), VAR_57->codec);


 VAR_54 = FUNC_3(VAR_57->codec);
 VAR_57->hasvra = VAR_54 & VAR_1;
 VAR_57->hasvrm = VAR_54 & VAR_2;
 VAR_57->hasmic = (VAR_57->hasmic != 0 &&
     (FUNC_2(VAR_57->codec) & VAR_0)) ? 1 : 0;
 FUNC_6(VAR_57->codec, VAR_57->hasvra | VAR_57->hasvrm);

 VAR_57->dtbl_size = sizeof(struct ich_desc) * VAR_13 *
     ((VAR_57->hasmic) ? 3 : 2);


 if (FUNC_9(FUNC_15(VAR_52), 8, 0,
     VAR_7, VAR_6, ((void*)0), ((void*)0),
     VAR_57->dtbl_size, 1, 0x3ffff, 0, ((void*)0), ((void*)0), &VAR_57->dmat) != 0) {
  FUNC_22(VAR_52, "unable to create dma tag\n");
  goto bad;
 }


 if (FUNC_9(FUNC_15(VAR_52), VAR_20, 0,
     VAR_7, VAR_6, ((void*)0), ((void*)0),
     VAR_57->bufsz, 1, 0x3ffff, 0, ((void*)0), ((void*)0), &VAR_57->chan_dmat) != 0) {
  FUNC_22(VAR_52, "unable to create dma tag\n");
  goto bad;
 }

 if (FUNC_13(VAR_57->dmat, (void **)&VAR_57->dtbl, VAR_5 |
     ((VAR_57->flags & VAR_12) ? VAR_4 : 0),
     &VAR_57->dtmap))
  goto bad;

 if (FUNC_11(VAR_57->dmat, VAR_57->dtmap, VAR_57->dtbl, VAR_57->dtbl_size,
     VAR_50, VAR_57, 0))
  goto bad;

 if (FUNC_38(VAR_52, VAR_57, 1, (VAR_57->hasmic) ? 2 : 1))
  goto bad;

 FUNC_36(VAR_52, VAR_38, &VAR_51, VAR_57);
 FUNC_36(VAR_52, VAR_39, &VAR_51, VAR_57);
 if (VAR_57->hasmic)
  FUNC_36(VAR_52, VAR_39, &VAR_51, VAR_57);

 if (VAR_57->flags & VAR_14) {
  VAR_57->flags |= VAR_9;
  FUNC_27(VAR_57);
 } else {
  FUNC_26(VAR_57);

  VAR_57->intrhook.ich_func = FUNC_24;
  VAR_57->intrhook.ich_arg = VAR_57;
  if (VAR_47 == 0 ||
      FUNC_18(&VAR_57->intrhook) != 0) {
   VAR_57->intrhook.ich_func = ((void*)0);
   FUNC_24(VAR_57);
  }
 }

 return (0);

bad:
 if (VAR_57->codec)
  FUNC_1(VAR_57->codec);
 if (VAR_57->ih)
  FUNC_17(VAR_52, VAR_57->irq, VAR_57->ih);
 if (VAR_57->irq)
  FUNC_16(VAR_52, VAR_45, VAR_57->irqid, VAR_57->irq);
 if (VAR_57->nambar)
  FUNC_16(VAR_52, VAR_57->regtype,
      VAR_57->nambarid, VAR_57->nambar);
 if (VAR_57->nabmbar)
  FUNC_16(VAR_52, VAR_57->regtype,
      VAR_57->nabmbarid, VAR_57->nabmbar);
 if (VAR_57->dtmap)
  FUNC_12(VAR_57->dmat, VAR_57->dtmap);
 if (VAR_57->dtbl)
  FUNC_14(VAR_57->dmat, VAR_57->dtbl, VAR_57->dtmap);
 if (VAR_57->chan_dmat)
  FUNC_10(VAR_57->chan_dmat);
 if (VAR_57->dmat)
  FUNC_10(VAR_57->dmat);
 if (VAR_57->ich_lock)
  FUNC_43(VAR_57->ich_lock);
 FUNC_23(VAR_57, VAR_30);
 return (VAR_8);
}
