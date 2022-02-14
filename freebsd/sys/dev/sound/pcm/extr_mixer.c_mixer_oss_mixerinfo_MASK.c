
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snddev_info {struct cdev* mixer_dev; } ;
struct snd_mixer {int lock; int dev; int modify_counter; int name; } ;
struct cdev {struct snd_mixer* si_drv1; int * si_devsw; } ;
struct TYPE_3__ {int dev; int card_number; int enabled; scalar_t__ port_number; int modify_counter; int name; int id; } ;
typedef TYPE_1__ oss_mixerinfo ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (struct snddev_info*) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (int *) ;
 struct snddev_info* FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int * VAR_2 ;
 int FUNC_10 (int ,int,char*,int) ;
 int FUNC_11 (int ,int ,int) ;

int
FUNC_12(struct cdev *VAR_3, oss_mixerinfo *VAR_4)
{
 struct snddev_info *VAR_5;
 struct snd_mixer *VAR_6;
 int VAR_7, VAR_8;





 if (VAR_4->dev == -1 && VAR_3->si_devsw != &VAR_1)
  return (VAR_0);

 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_7 = 0;





 for (VAR_8 = 0; VAR_2 != ((void*)0) &&
     VAR_8 < FUNC_5(VAR_2); VAR_8++) {
  VAR_5 = FUNC_6(VAR_2, VAR_8);
  if (!FUNC_1(VAR_5))
   continue;




  FUNC_3(VAR_5);
  FUNC_0(VAR_5);

  if (VAR_5->mixer_dev != ((void*)0) && VAR_5->mixer_dev->si_drv1 != ((void*)0) &&
      ((VAR_4->dev == -1 && VAR_5->mixer_dev == VAR_3) ||
      VAR_4->dev == VAR_7)) {
   VAR_6 = VAR_5->mixer_dev->si_drv1;
   FUNC_8(VAR_6->lock);
   FUNC_4((void *)VAR_4, sizeof(*VAR_4));
   VAR_4->dev = VAR_7;
   FUNC_10(VAR_4->id, sizeof(VAR_4->id), "mixer%d", VAR_8);
   FUNC_11(VAR_4->name, VAR_6->name, sizeof(VAR_4->name));
   VAR_4->modify_counter = VAR_6->modify_counter;
   VAR_4->card_number = VAR_8;




   VAR_4->port_number = 0;
   VAR_4->enabled = FUNC_7(VAR_6->dev) ? 1 : 0;
   FUNC_9(VAR_6->lock);
  } else
   ++VAR_7;

  FUNC_2(VAR_5);

  if (VAR_6 != ((void*)0))
   return (0);
 }

 return (VAR_0);
}
