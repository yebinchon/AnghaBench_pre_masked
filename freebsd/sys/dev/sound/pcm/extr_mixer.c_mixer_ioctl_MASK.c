
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct snddev_info {int flags; } ;
struct snd_mixer {int dev; } ;
struct cdev {int * si_drv1; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (struct snddev_info*) ;
 int FUNC_4 (struct snddev_info*) ;
 int VAR_2 ;
 struct snddev_info* FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct cdev*,int ,int ,int,struct thread*,int ) ;
 int FUNC_7 (struct cdev*,int ,int ,int,struct thread*,int ) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_4, u_long VAR_5, caddr_t VAR_6, int VAR_7,
    struct thread *VAR_8)
{
 struct snddev_info *VAR_9;
 int VAR_10;

 if (VAR_4 == ((void*)0) || VAR_4->si_drv1 == ((void*)0))
  return (VAR_0);

 VAR_9 = FUNC_5(((struct snd_mixer *)VAR_4->si_drv1)->dev);
 if (!FUNC_3(VAR_9))
  return (VAR_0);

 FUNC_1(VAR_9);
 FUNC_0(VAR_9);

 VAR_10 = -1;

 if (VAR_3 != 0 && (VAR_9->flags & VAR_2))
  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_1);

 if (VAR_10 == -1)
  VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_1);

 FUNC_4(VAR_9);
 FUNC_2(VAR_9);

 return (VAR_10);
}
