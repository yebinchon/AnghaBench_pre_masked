
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int lock; } ;
struct cdev {struct snd_mixer* si_drv1; } ;
typedef int device_t ;


 struct cdev* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(device_t VAR_0)
{
 struct snd_mixer *VAR_1;
 struct cdev *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = VAR_2->si_drv1;
 FUNC_2(VAR_1->lock);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->lock);
}
