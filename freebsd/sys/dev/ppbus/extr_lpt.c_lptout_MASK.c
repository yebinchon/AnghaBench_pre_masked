
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpt_data {int sc_state; int sc_backoff; scalar_t__ sc_xfercnt; int sc_timer; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,void (*) (void*),struct lpt_data*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct lpt_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6)
{
 struct lpt_data *VAR_7 = VAR_6;
 device_t VAR_8 = VAR_7->sc_dev;
 device_t VAR_9;

 VAR_9 = FUNC_1(VAR_8);
 FUNC_4(VAR_9);
 FUNC_2(("T %x ", FUNC_5(VAR_9)));
 if (VAR_7->sc_state & VAR_3) {
  VAR_7->sc_backoff++;
  if (VAR_7->sc_backoff > VAR_5/VAR_1)
   VAR_7->sc_backoff = VAR_5/VAR_1;
  FUNC_0(&VAR_7->sc_timer, VAR_7->sc_backoff, FUNC_7, VAR_7);
 } else
  VAR_7->sc_state &= ~VAR_4;

 if (VAR_7->sc_state & VAR_0)
  VAR_7->sc_state &= ~VAR_0;




 if (VAR_7->sc_xfercnt) {
  FUNC_3(VAR_7);
 } else {
  VAR_7->sc_state &= ~VAR_2;
  FUNC_6(VAR_8);
 }
}
