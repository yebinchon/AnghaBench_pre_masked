
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct au_event_ent {int ae_class; } ;
struct TYPE_3__ {int am_success; int am_failure; } ;
typedef TYPE_1__ au_mask_t ;
typedef int au_event_t ;
typedef int au_class_t ;


 int VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct au_event_ent* FUNC_4 (int ) ;

int
FUNC_5(au_event_t VAR_4, au_mask_t *VAR_5, int VAR_6, int VAR_7)
{
 struct au_event_ent *VAR_8;
 au_class_t VAR_9 = 0;

 if (VAR_5 == ((void*)0))
  return (-1);





 if (VAR_2) {
  VAR_2 = 0;
  if ( -1 == FUNC_1()) {



   return (-1);
  }
 }
 switch (VAR_7) {
 case 129:
  FUNC_0();
  if (FUNC_1() == -1) {



   return (-1);
  }
  VAR_8 = FUNC_4(VAR_4);
  break;
 case 128:
  VAR_8 = FUNC_4(VAR_4);
  break;
 default:
  VAR_8 = ((void*)0);
 }
 if (VAR_8 == ((void*)0)) {



  return (-1);
 }
 if (VAR_6 & VAR_1)
  VAR_9 |= (VAR_5->am_success & VAR_8->ae_class);
 if (VAR_6 & VAR_0)
  VAR_9 |= (VAR_5->am_failure & VAR_8->ae_class);



 if (VAR_9 != 0)
  return (1);
 return (0);
}
