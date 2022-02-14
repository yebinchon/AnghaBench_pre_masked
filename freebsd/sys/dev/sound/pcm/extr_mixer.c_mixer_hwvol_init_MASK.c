
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int hwvol_step; int hwvol_mixer; } ;
struct cdev {struct snd_mixer* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int,int*,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int,struct snd_mixer*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct cdev* FUNC_5 (int ) ;
 int VAR_4 ;

int
FUNC_6(device_t VAR_5)
{
 struct snd_mixer *VAR_6;
 struct cdev *VAR_7;

 VAR_7 = FUNC_5(VAR_5);
 VAR_6 = VAR_7->si_drv1;

 VAR_6->hwvol_mixer = VAR_3;
 VAR_6->hwvol_step = 5;
 FUNC_0(FUNC_3(VAR_5),
     FUNC_2(FUNC_4(VAR_5)),
            VAR_2, "hwvol_step", VAR_0, &VAR_6->hwvol_step, 0, "");
 FUNC_1(FUNC_3(VAR_5),
     FUNC_2(FUNC_4(VAR_5)),
            VAR_2, "hwvol_mixer", VAR_1 | VAR_0, VAR_6, 0,
     VAR_4, "A", "");
 return 0;
}
