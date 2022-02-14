
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct snd_mixer {int lock; int enuminfo; int busy; } ;
struct cdev {struct snd_mixer* si_drv1; } ;
typedef int oss_sysinfo ;
typedef int oss_mixerinfo ;
typedef int oss_mixer_enuminfo ;
typedef int oss_card_info ;
typedef int oss_audioinfo ;
typedef int mixer_info ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (void*,scalar_t__,int) ;
 int FUNC_4 (struct cdev*,int *) ;
 int FUNC_5 (struct snd_mixer*) ;
 int FUNC_6 (struct snd_mixer*) ;
 int FUNC_7 (struct snd_mixer*,int) ;
 int FUNC_8 (struct snd_mixer*,int*) ;
 int FUNC_9 (struct snd_mixer*) ;
 int FUNC_10 (struct snd_mixer*,int *) ;
 int FUNC_11 (struct cdev*,int *) ;
 int FUNC_12 (struct snd_mixer*,int,int) ;
 int FUNC_13 (struct snd_mixer*,int) ;
 int FUNC_14 (struct snd_mixer*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

int
FUNC_19(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8,
    struct thread *VAR_9, int VAR_10)
{
 struct snd_mixer *VAR_11;
 int VAR_12 = VAR_1, *VAR_13 = (int *)VAR_7;
 int VAR_14 = -1, VAR_15 = VAR_6 & 0xff;





 if (FUNC_0(VAR_6) == 'X') {
  switch (VAR_6) {
  case 134:
   FUNC_18((oss_sysinfo *)VAR_7);
   return (0);
  case 140:
   return (FUNC_17((oss_card_info *)VAR_7));
      case 142:
      case 141:
      case 136:
   return (FUNC_4(VAR_5, (oss_audioinfo *)VAR_7));
  case 135:
   return (FUNC_11(VAR_5, (oss_mixerinfo *)VAR_7));
  }
  return (VAR_1);
 }

 VAR_11 = VAR_5->si_drv1;

 if (VAR_11 == ((void*)0))
  return (VAR_0);

 FUNC_15(VAR_11->lock);
 if (VAR_10 == VAR_3 && !VAR_11->busy) {
  FUNC_16(VAR_11->lock);
  return (VAR_0);
 }
 switch (VAR_6) {
 case 138:
  FUNC_3((void *)&VAR_11->enuminfo, VAR_7, sizeof(oss_mixer_enuminfo));
  VAR_12 = 0;
  goto done;
 case 139:
  VAR_12 = FUNC_8(VAR_11, VAR_13);
  goto done;
 case 137:
  VAR_12 = FUNC_13(VAR_11, *VAR_13);
  goto done;
 case 143:
  *VAR_13 = VAR_4;
  VAR_12 = 0;
  goto done;
 case 131:
  FUNC_10(VAR_11, (mixer_info *)VAR_7);
  VAR_12 = 0;
  goto done;
 }
 if ((VAR_6 & ~0xff) == FUNC_2(0)) {
  if (VAR_15 == 129)
   VAR_12 = FUNC_14(VAR_11, *VAR_13);
  else
   VAR_12 = FUNC_12(VAR_11, VAR_15, *VAR_13);
  FUNC_16(VAR_11->lock);
  return ((VAR_12 == 0) ? 0 : VAR_2);
 }
 if ((VAR_6 & ~0xff) == FUNC_1(0)) {
  switch (VAR_15) {
  case 132:
  case 133:
  case 128:
   VAR_14 = FUNC_5(VAR_11);
   break;
  case 130:
   VAR_14 = FUNC_6(VAR_11);
   break;
  case 129:
   VAR_14 = FUNC_9(VAR_11);
   break;
  default:
   VAR_14 = FUNC_7(VAR_11, VAR_15);
  }
  *VAR_13 = VAR_14;
  FUNC_16(VAR_11->lock);
  return ((VAR_14 != -1) ? 0 : VAR_2);
 }
done:
 FUNC_16(VAR_11->lock);
 return (VAR_12);
}
