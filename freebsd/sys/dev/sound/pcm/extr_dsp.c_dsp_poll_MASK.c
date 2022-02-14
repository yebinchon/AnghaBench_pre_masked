
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snddev_info {int dummy; } ;
struct pcm_channel {int flags; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*,struct cdev*) ;
 int VAR_1 ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct pcm_channel*,int,struct thread*) ;
 struct snddev_info* FUNC_4 (struct cdev*) ;
 int FUNC_5 (struct cdev*,struct pcm_channel**,struct pcm_channel**,int) ;
 int FUNC_6 (struct cdev*,struct pcm_channel*,struct pcm_channel*,int) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct snddev_info *VAR_11;
 struct pcm_channel *VAR_12, *VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_4(VAR_8);
 if (!FUNC_0(VAR_11, VAR_8))
  return (VAR_1);

 FUNC_1(VAR_11);

 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_14 = 0;

 FUNC_5(VAR_8, &VAR_13, &VAR_12, VAR_6 | VAR_7);

 if (VAR_12 != ((void*)0) && !(VAR_12->flags & VAR_0)) {
  VAR_15 = (VAR_9 & (VAR_3 | VAR_5));
  if (VAR_15)
   VAR_14 |= FUNC_3(VAR_12, VAR_15, VAR_10);
 }

 if (VAR_13 != ((void*)0) && !(VAR_13->flags & VAR_0)) {
  VAR_15 = (VAR_9 & (VAR_2 | VAR_4));
  if (VAR_15)
   VAR_14 |= FUNC_3(VAR_13, VAR_15, VAR_10);
 }

 FUNC_6(VAR_8, VAR_13, VAR_12, VAR_6 | VAR_7);

 FUNC_2(VAR_11);

 return (VAR_14);
}
