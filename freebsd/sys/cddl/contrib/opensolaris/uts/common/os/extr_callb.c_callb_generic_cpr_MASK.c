
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int clock_t ;
struct TYPE_2__ {int cc_events; int cc_lockp; int cc_stop_cv; int cc_callb_cv; } ;
typedef TYPE_1__ callb_cpr_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

boolean_t
FUNC_4(void *VAR_5, int VAR_6)
{
 callb_cpr_t *VAR_7 = (callb_cpr_t *)VAR_5;
 clock_t VAR_8 = 0;

 FUNC_2(VAR_7->cc_lockp);

 switch (VAR_6) {
 case 129:
  VAR_7->cc_events |= VAR_1;
  break;

 case 128:
  VAR_7->cc_events &= ~VAR_1;
  FUNC_1(&VAR_7->cc_stop_cv);
  break;
 }
 FUNC_3(VAR_7->cc_lockp);
 return (VAR_8 != -1);
}
