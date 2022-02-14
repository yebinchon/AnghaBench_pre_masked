
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct snddev_info {int dummy; } ;
struct pcm_channel {int feederflags; scalar_t__ direction; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct pcm_channel*,int ,int ) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (struct pcm_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cdev*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pcm_channel* FUNC_6 (struct cdev*) ;
 int FUNC_7 (struct snddev_info*) ;
 int FUNC_8 (struct snddev_info*) ;
 struct pcm_channel* FUNC_9 (struct cdev*) ;
 struct pcm_channel* FUNC_10 (struct cdev*) ;
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



 int FUNC_11 (struct pcm_channel*,int ,int,int,int) ;
 int FUNC_12 (struct cdev*) ;
 struct snddev_info* FUNC_13 (struct cdev*) ;
 int FUNC_14 (struct cdev*,struct pcm_channel**) ;

__attribute__((used)) static int
FUNC_15(struct cdev *VAR_16, struct pcm_channel *VAR_17, u_long VAR_18,
    caddr_t VAR_19)
{
 struct snddev_info *VAR_20;
 struct pcm_channel *VAR_21, *VAR_22;
 int VAR_23, VAR_24, VAR_25;

 VAR_20 = FUNC_13(VAR_16);
 if (!FUNC_7(VAR_20) || !(FUNC_12(VAR_16) & VAR_4))
  return (-1);

 FUNC_8(VAR_20);

 VAR_23 = VAR_18 & 0xff;

 VAR_21 = FUNC_6(VAR_16);
 VAR_22 = FUNC_10(VAR_16);


 if (VAR_17 == ((void*)0))
  VAR_17 = FUNC_9(VAR_16);


 if (VAR_17 == ((void*)0)) {
  if (VAR_23 == VAR_15 && VAR_21 != ((void*)0))
   VAR_17 = VAR_21;
  else if (VAR_23 == VAR_14 && VAR_22 != ((void*)0))
   VAR_17 = VAR_22;
 }

 VAR_24 = FUNC_5(VAR_16);


 if (VAR_17 == ((void*)0) &&
     (VAR_24 == VAR_7 || VAR_24 == VAR_9 ||
     VAR_24 == VAR_8 || VAR_24 == VAR_10)) {
  VAR_25 = FUNC_14(VAR_16, &VAR_17);
  if (VAR_25 != 0)
   return (VAR_25);
  if (VAR_17 == ((void*)0))
   return (VAR_0);
 }


 if (VAR_17 != ((void*)0)) {
  FUNC_1(VAR_17);
  if (!(VAR_17->feederflags & (1 << VAR_1))) {
   FUNC_2(VAR_17);
   return (-1);
  }
  if (VAR_17->direction == VAR_2)
   VAR_22 = VAR_17;
  else
   VAR_21 = VAR_17;
 }

 VAR_25 = VAR_0;

 if (VAR_17 != ((void*)0) &&
     ((VAR_23 == VAR_14 && VAR_17->direction == VAR_2) ||
     (VAR_23 == VAR_15 && VAR_17->direction == VAR_3))) {
  if ((VAR_18 & ~0xff) == FUNC_4(0)) {
   int VAR_26, VAR_27, VAR_28;

   VAR_26 = *(int *)VAR_19 & 0x7f;
   VAR_27 = ((*(int *)VAR_19) >> 8) & 0x7f;
   VAR_28 = (VAR_26 + VAR_27) >> 1;
   FUNC_11(VAR_17, VAR_11, VAR_26, VAR_27,
       VAR_28);
  } else if ((VAR_18 & ~0xff) == FUNC_3(0)) {
   *(int *)VAR_19 = FUNC_0(VAR_17,
    VAR_11, VAR_5);
   *(int *)VAR_19 |= FUNC_0(VAR_17,
    VAR_11, VAR_6) << 8;
  }
  VAR_25 = 0;
 } else if (VAR_21 != ((void*)0) || VAR_22 != ((void*)0)) {
  switch (VAR_23) {
  case 131:
  case 132:
  case 128:
   if ((VAR_18 & ~0xff) == FUNC_3(0)) {
    *(int *)VAR_19 = 0;
    if (VAR_21 != ((void*)0))
     *(int *)VAR_19 |= VAR_13;
    if (VAR_22 != ((void*)0))
     *(int *)VAR_19 |= VAR_12;
   }
   VAR_25 = 0;
   break;
  case 130:
  case 129:
   if ((VAR_18 & ~0xff) == FUNC_3(0))
    *(int *)VAR_19 = 0;
   VAR_25 = 0;
   break;
  default:
   break;
  }
 }

 if (VAR_17 != ((void*)0))
  FUNC_2(VAR_17);

 return (VAR_25);
}
