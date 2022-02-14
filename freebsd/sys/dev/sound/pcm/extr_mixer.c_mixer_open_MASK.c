
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snddev_info {int dummy; } ;
struct snd_mixer {int busy; int lock; int dev; } ;
struct cdev {struct snd_mixer* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 struct snddev_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct snddev_info *VAR_5;
 struct snd_mixer *VAR_6;


 if (VAR_1 == ((void*)0) || VAR_1->si_drv1 == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_1->si_drv1;
 VAR_5 = FUNC_1(VAR_6->dev);
 if (!FUNC_0(VAR_5))
  return (VAR_0);



 FUNC_2(VAR_6->lock);
 VAR_6->busy = 1;
 FUNC_3(VAR_6->lock);

 return (0);
}
