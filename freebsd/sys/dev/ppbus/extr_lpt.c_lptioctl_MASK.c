
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
struct thread {int dummy; } ;
struct lpt_data {int sc_irq; int sc_dev; } ;
struct cdev {struct lpt_data* si_drv1; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_6, u_long VAR_7, caddr_t VAR_8, int VAR_9, struct thread *VAR_10)
{
 int VAR_11 = 0;
 struct lpt_data *VAR_12 = VAR_6->si_drv1;
 device_t VAR_13;
 u_char VAR_14;

 switch (VAR_7) {
 case 128 :
  VAR_13 = FUNC_1(VAR_12->sc_dev);
  FUNC_3(VAR_13);
  if (VAR_12->sc_irq & VAR_5) {
   VAR_14 = VAR_12->sc_irq;
   switch (*(int*)VAR_8) {
   case 0:
    VAR_12->sc_irq &= (~VAR_4);
    break;
   case 1:
    VAR_12->sc_irq &= (~VAR_3);
    VAR_12->sc_irq |= VAR_4;
    break;
   case 2:



    VAR_12->sc_irq &= (~VAR_4);
    VAR_12->sc_irq |= VAR_3;
    break;
   case 3:
    VAR_12->sc_irq &= (~VAR_3);
    break;
   default:
    break;
   }

   if (VAR_14 != VAR_12->sc_irq )
    FUNC_2(VAR_2, "%s: switched to %s %s mode\n",
     FUNC_0(VAR_12->sc_dev),
     (VAR_12->sc_irq & VAR_4)?
     "interrupt-driven":"polled",
     (VAR_12->sc_irq & VAR_3)?
     "extended":"standard");
  } else
   VAR_11 = VAR_1;
  FUNC_4(VAR_13);
  break;
 default:
  VAR_11 = VAR_0;
 }

 return(VAR_11);
}
