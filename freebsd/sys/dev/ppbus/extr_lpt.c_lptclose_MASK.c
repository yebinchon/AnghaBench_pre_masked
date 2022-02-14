
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct lpt_data {int sc_flags; int sc_state; int sc_irq; scalar_t__ sc_xfercnt; int sc_timer; int sc_dev; } ;
struct cdev {struct lpt_data* si_drv1; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_15, int VAR_16, int VAR_17, struct thread *VAR_18)
{
 struct lpt_data *VAR_19 = VAR_15->si_drv1;
 device_t VAR_20 = VAR_19->sc_dev;
 device_t VAR_21 = FUNC_1(VAR_20);
 int VAR_22;

 FUNC_5(VAR_21);
 if (VAR_19->sc_flags & VAR_8)
  goto end_close;

 if ((VAR_22 = FUNC_4(VAR_20, VAR_13|VAR_12)) != 0) {
  FUNC_8(VAR_21);
  return (VAR_22);
 }


 if ((!(VAR_19->sc_state & VAR_1)) && (VAR_19->sc_irq & VAR_9))
  while ((FUNC_6(VAR_21) &
   (VAR_7|VAR_6|VAR_4|VAR_5)) !=
   (VAR_7|VAR_4|VAR_5) || VAR_19->sc_xfercnt)

   if (FUNC_7(VAR_21, VAR_20, VAR_3 | VAR_11, "lpclose",
       VAR_14) != VAR_0)
    break;

 VAR_19->sc_state &= ~VAR_10;
 FUNC_0(&VAR_19->sc_timer);
 FUNC_9(VAR_21, VAR_2);




 FUNC_3(VAR_20);

end_close:
 VAR_19->sc_state = 0;
 VAR_19->sc_xfercnt = 0;
 FUNC_8(VAR_21);
 FUNC_2(("closed.\n"));
 return(0);
}
