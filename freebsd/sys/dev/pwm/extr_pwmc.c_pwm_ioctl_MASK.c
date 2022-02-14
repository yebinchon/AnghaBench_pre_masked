
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct pwmc_softc {int chan; int dev; } ;
struct pwm_state {int enable; int duty; int period; } ;
struct cdev {struct pwmc_softc* si_drv1; } ;
typedef int state ;
typedef int device_t ;
typedef struct pwm_state* caddr_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;


 int FUNC_4 (struct pwm_state*,struct pwm_state*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2,
    int VAR_3, struct thread *VAR_4)
{
 struct pwmc_softc *VAR_5;
 struct pwm_state VAR_6;
 device_t VAR_7;
 int VAR_8 = 0;

 VAR_5 = VAR_0->si_drv1;
 VAR_7 = FUNC_5(VAR_5->dev);

 switch (VAR_1) {
 case 128:
  FUNC_4(VAR_2, &VAR_6, sizeof(VAR_6));
  VAR_8 = FUNC_0(VAR_7, VAR_5->chan,
      VAR_6.period, VAR_6.duty);
  if (VAR_8 == 0)
   VAR_8 = FUNC_1(VAR_7, VAR_5->chan,
       VAR_6.enable);
  break;
 case 129:
  FUNC_4(VAR_2, &VAR_6, sizeof(VAR_6));
  VAR_8 = FUNC_2(VAR_7, VAR_5->chan,
      &VAR_6.period, &VAR_6.duty);
  if (VAR_8 != 0)
   return (VAR_8);
  VAR_8 = FUNC_3(VAR_7, VAR_5->chan,
      &VAR_6.enable);
  if (VAR_8 != 0)
   return (VAR_8);
  FUNC_4(&VAR_6, VAR_2, sizeof(VAR_6));
  break;
 }

 return (VAR_8);
}
