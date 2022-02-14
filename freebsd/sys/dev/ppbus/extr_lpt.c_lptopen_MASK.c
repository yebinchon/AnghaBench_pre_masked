
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct lpt_data {int sc_state; uintptr_t sc_flags; int sc_irq; scalar_t__ sc_primed; int sc_control; int sc_backoff; int sc_timer; scalar_t__ sc_xfercnt; int sc_dev; } ;
struct cdev {scalar_t__ si_drv2; struct lpt_data* si_drv1; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int *,int,int ,struct lpt_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_26 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_27 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_28, int VAR_29, int VAR_30, struct thread *VAR_31)
{
 int VAR_32, VAR_33;
 struct lpt_data *VAR_34 = VAR_28->si_drv1;
 device_t VAR_35;
 device_t VAR_36;

 if (!VAR_34)
  return (VAR_1);

 VAR_35 = VAR_34->sc_dev;
 VAR_36 = FUNC_3(VAR_35);

 FUNC_7(VAR_36);
 if (VAR_34->sc_state) {
  FUNC_4(("%s: still open %x\n", FUNC_2(VAR_35),
      VAR_34->sc_state));
  FUNC_10(VAR_36);
  return(VAR_0);
 } else
  VAR_34->sc_state |= VAR_13;

 VAR_34->sc_flags = (uintptr_t)VAR_28->si_drv2;


 if (VAR_34->sc_flags & VAR_16) {
  VAR_34->sc_state = VAR_21;
  FUNC_10(VAR_36);
  return(0);
 }


 if ((VAR_33 = FUNC_6(VAR_35, VAR_24|VAR_23)) != 0) {

  VAR_34->sc_state = 0;
  FUNC_10(VAR_36);
  return (VAR_33);
 }

 FUNC_4(("%s flags 0x%x\n", FUNC_2(VAR_35),
     VAR_34->sc_flags));



 if (VAR_34->sc_irq & VAR_17)
  VAR_34->sc_irq |= VAR_20;
 else
  VAR_34->sc_irq &= ~VAR_20;


 if ((VAR_34->sc_flags & VAR_18) == 0) {
  if ((VAR_34->sc_flags & VAR_19) || VAR_34->sc_primed == 0) {
   FUNC_11(VAR_36, 0);
   VAR_34->sc_primed++;
   FUNC_0(500);
  }
 }

 FUNC_11(VAR_36, VAR_6|VAR_5);


 VAR_32 = 0;
 do {

  if (VAR_32++ >= VAR_7*4) {
   FUNC_4(("status %x\n", FUNC_8(VAR_36)));

   FUNC_5(VAR_35);
   VAR_34->sc_state = 0;
   FUNC_10(VAR_36);
   return (VAR_0);
  }


  if (FUNC_9(VAR_36, VAR_35, VAR_8 | VAR_22, "lptinit",
      VAR_26 / 4) != VAR_2) {
   FUNC_5(VAR_35);
   VAR_34->sc_state = 0;
   FUNC_10(VAR_36);
   return (VAR_0);
  }


 } while ((FUNC_8(VAR_36) &
   (VAR_12|VAR_11|VAR_9|VAR_10)) !=
     (VAR_12|VAR_9|VAR_10));

 VAR_34->sc_control = VAR_6|VAR_5;
 if (VAR_34->sc_flags & VAR_15)
  VAR_34->sc_control |= VAR_3;


 if (VAR_34->sc_irq & VAR_20)
  VAR_34->sc_control |= VAR_4;

 FUNC_11(VAR_36, VAR_34->sc_control);

 VAR_34->sc_state &= ~VAR_13;
 VAR_34->sc_state |= VAR_21;
 VAR_34->sc_xfercnt = 0;


 FUNC_4(("irq %x\n", VAR_34->sc_irq));
 if (VAR_34->sc_irq & VAR_20) {
  VAR_34->sc_state |= VAR_25;
  VAR_34->sc_backoff = VAR_26 / VAR_14;
  FUNC_1(&VAR_34->sc_timer, VAR_34->sc_backoff, VAR_27, VAR_34);
 }


 FUNC_5(VAR_35);
 FUNC_10(VAR_36);

 FUNC_4(("opened.\n"));
 return(0);
}
