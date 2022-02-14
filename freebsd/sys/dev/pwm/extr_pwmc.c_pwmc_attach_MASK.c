
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwmc_softc {int chan; int cdev; int dev; } ;
struct make_dev_args {int mda_flags; int mda_mode; struct pwmc_softc* mda_si_drv1; int mda_gid; int mda_uid; int * mda_devsw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct pwmc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct make_dev_args*) ;
 int FUNC_5 (struct make_dev_args*,int *,char*,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct pwmc_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 struct pwmc_softc *VAR_6;
 struct make_dev_args VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_5);
 VAR_6->dev = VAR_5;

 if ((VAR_8 = FUNC_6(VAR_5, &VAR_6->chan)) != 0)
  return (VAR_8);

 FUNC_4(&VAR_7);
 VAR_7.mda_flags = VAR_1 | VAR_2;
 VAR_7.mda_devsw = &VAR_4;
 VAR_7.mda_uid = VAR_3;
 VAR_7.mda_gid = VAR_0;
 VAR_7.mda_mode = 0660;
 VAR_7.mda_si_drv1 = VAR_6;
 VAR_8 = FUNC_5(&VAR_7, &VAR_6->cdev, "pwm/pwmc%d.%d",
     FUNC_2(FUNC_0(VAR_5)), VAR_6->chan);
 if (VAR_8 != 0) {
  FUNC_3(VAR_5, "Failed to make PWM device\n");
  return (VAR_8);
 }

 FUNC_7(VAR_6);

 return (0);
}
