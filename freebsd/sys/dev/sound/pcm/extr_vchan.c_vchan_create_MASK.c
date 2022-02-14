
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct snddev_info {scalar_t__ pvchanformat; scalar_t__ pvchanrate; scalar_t__ rvchanformat; scalar_t__ rvchanrate; } ;
struct pcmchan_caps {int maxspeed; scalar_t__ minspeed; int fmtlist; } ;
struct pcm_channel {int flags; scalar_t__ direction; scalar_t__ format; scalar_t__ speed; int devinfo; int methods; int dev; struct snddev_info* parentsnddev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pcm_channel*,struct pcm_channel*,int ) ;
 int FUNC_2 (struct pcm_channel*) ;
 int FUNC_3 (struct pcm_channel*) ;
 int FUNC_4 (struct pcm_channel*,struct pcm_channel*,int ) ;
 int FUNC_5 (struct pcm_channel*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct snddev_info*) ;
 int FUNC_7 (struct snddev_info*) ;
 int FUNC_8 (struct snddev_info*) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_15 ;
 struct pcmchan_caps* FUNC_12 (struct pcm_channel*) ;
 int FUNC_13 (struct pcm_channel*,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_16 (struct snddev_info*,struct pcm_channel*) ;
 struct pcm_channel* FUNC_17 (struct snddev_info*,struct pcm_channel*,int *,int,int,struct pcm_channel*) ;
 int FUNC_18 (struct pcm_channel*) ;
 scalar_t__ FUNC_19 (struct snddev_info*,struct pcm_channel*) ;
 int FUNC_20 (int ,int ,int ,scalar_t__*) ;
 int FUNC_21 (int ,int ,int ,char const**) ;
 scalar_t__ FUNC_22 (int ,int ) ;
 scalar_t__ FUNC_23 (char const*) ;
 int VAR_19 ;

int
FUNC_24(struct pcm_channel *VAR_20, int VAR_21)
{
 struct snddev_info *VAR_22;
 struct pcm_channel *VAR_23;
 struct pcmchan_caps *VAR_24;
 uint32_t VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 VAR_22 = VAR_20->parentsnddev;

 FUNC_6(VAR_22);
 FUNC_3(VAR_20);

 if (!(VAR_20->flags & VAR_2))
  return (VAR_6);

 if (!(VAR_20->direction == VAR_9 ||
     VAR_20->direction == VAR_11))
  return (VAR_7);

 VAR_22 = VAR_20->parentsnddev;

 FUNC_5(VAR_20);
 FUNC_7(VAR_22);

 if (VAR_20->direction == VAR_9) {
  VAR_28 = VAR_10;
  VAR_25 = VAR_22->pvchanformat;
  VAR_26 = VAR_22->pvchanrate;
 } else {
  VAR_28 = VAR_12;
  VAR_25 = VAR_22->rvchanformat;
  VAR_26 = VAR_22->rvchanrate;
 }


 VAR_23 = FUNC_17(VAR_22, VAR_20, &VAR_19, VAR_28, VAR_21, VAR_20);
 if (VAR_23 == ((void*)0)) {
  FUNC_8(VAR_22);
  FUNC_2(VAR_20);
  return (VAR_8);
 }


 VAR_27 = FUNC_16(VAR_22, VAR_23);
 FUNC_8(VAR_22);
 if (VAR_27 != 0) {
  FUNC_18(VAR_23);
  FUNC_2(VAR_20);
  return (VAR_27);
 }

 FUNC_2(VAR_20);





 FUNC_1(VAR_20, VAR_23, VAR_15);

 if (VAR_20->flags & VAR_3)
  return (0);

 VAR_20->flags |= VAR_3;

 VAR_24 = FUNC_12(VAR_20);
 if (VAR_24 == ((void*)0))
  VAR_27 = VAR_7;

 VAR_30 = 0;

 if (VAR_27 == 0 && VAR_25 == 0) {
  const char *VAR_31;

  FUNC_5(VAR_20);
  VAR_29 = FUNC_21(FUNC_14(VAR_20->dev),
      FUNC_15(VAR_20->dev), FUNC_10(VAR_28),
      &VAR_31);
  FUNC_2(VAR_20);
  if (VAR_29 != 0)
   VAR_31 = ((void*)0);
  if (VAR_31 != ((void*)0)) {
   VAR_25 = FUNC_23(VAR_31);
   if (VAR_25 != 0 && !(VAR_25 & VAR_1))
    VAR_25 = 0;
  }
  if (VAR_25 == 0)
   VAR_25 = VAR_13;
  VAR_30 = 1;
 }

 if (VAR_27 == 0 && VAR_26 == 0) {






  FUNC_5(VAR_20);
  VAR_29 = FUNC_20(FUNC_14(VAR_20->dev),
      FUNC_15(VAR_20->dev), FUNC_11(VAR_28),
      &VAR_26);
  FUNC_2(VAR_20);
  if (VAR_29 != 0) {






   switch (VAR_24->maxspeed) {
   case 45000:
   case 49000:
    VAR_26 = 44100;
    break;
   default:
    VAR_26 = VAR_14;
    if (VAR_26 > VAR_24->maxspeed)
     VAR_26 = VAR_24->maxspeed;
    break;
   }
   if (VAR_26 < VAR_24->minspeed)
    VAR_26 = VAR_24->minspeed;
  }
  VAR_30 = 1;
 }

 if (VAR_27 == 0) {



  if (VAR_26 < VAR_17)
   VAR_26 = VAR_17;
  if (VAR_26 > VAR_16)
   VAR_26 = VAR_16;

  if (VAR_18) {
   FUNC_9(VAR_26, VAR_24->minspeed,
       VAR_24->maxspeed);
   VAR_26 = FUNC_0(VAR_20->methods,
       VAR_20->devinfo, VAR_26);
  }

  VAR_27 = FUNC_13(VAR_20, VAR_25, VAR_26);
 }

 if (VAR_27 == 0 && VAR_30) {



  if (VAR_28 == VAR_10) {
   VAR_22->pvchanformat = VAR_20->format;
   VAR_22->pvchanrate = VAR_20->speed;
  } else {
   VAR_22->rvchanformat = VAR_20->format;
   VAR_22->rvchanrate = VAR_20->speed;
  }
 }





 if (VAR_27 == 0 && FUNC_22(VAR_0, VAR_24->fmtlist)) {
  VAR_20->flags &= ~VAR_4;
  VAR_20->flags |= VAR_5;
 }

 if (VAR_27 != 0) {
  FUNC_4(VAR_20, VAR_23, VAR_15);
  VAR_20->flags &= ~VAR_3;
  FUNC_5(VAR_20);
  FUNC_7(VAR_22);
  if (FUNC_19(VAR_22, VAR_23) == 0) {
   FUNC_8(VAR_22);
   FUNC_18(VAR_23);
  } else
   FUNC_8(VAR_22);
  FUNC_2(VAR_20);
 }

 return (VAR_27);
}
