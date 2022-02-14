
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int lock; int recsrc; int * level; } ;
struct cdev {struct snd_mixer* si_drv1; } ;
typedef int device_t ;


 int FUNC_0 (struct snd_mixer*) ;
 int VAR_0 ;
 struct cdev* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_mixer*,int,int ) ;
 int FUNC_3 (struct snd_mixer*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_1)
{
 struct snd_mixer *VAR_2;
 struct cdev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = VAR_3->si_drv1;
 FUNC_4(VAR_2->lock);

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_2->lock);
  return VAR_4;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(VAR_2, VAR_4, VAR_2->level[VAR_4]);

 FUNC_3(VAR_2, VAR_2->recsrc);
 FUNC_5(VAR_2->lock);

 return 0;
}
