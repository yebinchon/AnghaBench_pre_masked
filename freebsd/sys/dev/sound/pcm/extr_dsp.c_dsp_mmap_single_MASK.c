
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef uintptr_t vm_ooffset_t ;
struct vm_object {int dummy; } ;
struct snddev_info {int dummy; } ;
struct pcm_channel {int flags; int bufsoft; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snddev_info*,struct cdev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (struct snddev_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_10 ;
 struct snddev_info* FUNC_5 (struct cdev*) ;
 int VAR_11 ;
 int FUNC_6 (struct cdev*,struct pcm_channel**,struct pcm_channel**,int) ;
 int FUNC_7 (struct cdev*,struct pcm_channel*,struct pcm_channel*,int) ;
 scalar_t__ FUNC_8 (int ,uintptr_t) ;
 scalar_t__ FUNC_9 (int ) ;
 struct vm_object* FUNC_10 (int ,struct cdev*,scalar_t__,int,uintptr_t,int ) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_12, vm_ooffset_t *VAR_13,
    vm_size_t VAR_14, struct vm_object **VAR_15, int VAR_16)
{
 struct snddev_info *VAR_17;
 struct pcm_channel *VAR_18, *VAR_19, *VAR_20;
 if ((VAR_16 & VAR_4) && VAR_11 < 1)

  return (VAR_2);






 if ((VAR_16 & (VAR_5 | VAR_6)) == 0)
  return (VAR_2);

 VAR_17 = FUNC_5(VAR_12);
 if (!FUNC_0(VAR_17, VAR_12))
  return (VAR_2);

 FUNC_1(VAR_17);

 FUNC_6(VAR_12, &VAR_19, &VAR_18, VAR_7 | VAR_8);

 VAR_20 = ((VAR_16 & VAR_6) != 0) ? VAR_18 : VAR_19;
 if (VAR_20 == ((void*)0) || (VAR_20->flags & VAR_1) ||
     (*VAR_13 + VAR_14) > FUNC_9(VAR_20->bufsoft) ||
     (VAR_18 != ((void*)0) && (VAR_18->flags & VAR_1)) ||
     (VAR_19 != ((void*)0) && (VAR_19->flags & VAR_1))) {
  FUNC_7(VAR_12, VAR_19, VAR_18, VAR_7 | VAR_8);
  FUNC_2(VAR_17);
  return (VAR_2);
 }

 if (VAR_18 != ((void*)0))
  VAR_18->flags |= VAR_0;
 if (VAR_19 != ((void*)0))
  VAR_19->flags |= VAR_0;

 *VAR_13 = (uintptr_t)FUNC_8(VAR_20->bufsoft, *VAR_13);
 FUNC_7(VAR_12, VAR_19, VAR_18, VAR_7 | VAR_8);
 *VAR_15 = FUNC_10(VAR_3, VAR_12,
     VAR_14, VAR_16, *VAR_13, VAR_10->td_ucred);

 FUNC_3(VAR_17);

 if (*VAR_15 == ((void*)0))
   return (VAR_2);
 return (0);
}
