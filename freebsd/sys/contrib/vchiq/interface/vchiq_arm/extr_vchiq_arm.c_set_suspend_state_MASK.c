
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum vc_suspend_status { ____Placeholder_vc_suspend_status } vc_suspend_status ;
struct TYPE_4__ {int vc_suspend_state; int vc_suspend_complete; int vc_resume_complete; int vc_resume_state; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(VCHIQ_ARM_STATE_T *VAR_2,
 enum vc_suspend_status VAR_3)
{

 VAR_2->vc_suspend_state = VAR_3;


 switch (VAR_3) {
 case 133:
  FUNC_2(&VAR_2->vc_suspend_complete);
  break;
 case 130:
  FUNC_2(&VAR_2->vc_suspend_complete);
  break;
 case 134:
  FUNC_2(&VAR_2->vc_suspend_complete);
  VAR_2->vc_resume_state = VAR_1;
  FUNC_2(&VAR_2->vc_resume_complete);
  break;
 case 132:

  FUNC_1(VAR_2->vc_suspend_complete);
  break;
 case 129:
  break;
 case 131:
  FUNC_3(VAR_2, VAR_0);
  break;
 case 128:
  FUNC_2(&VAR_2->vc_suspend_complete);
  break;
 default:
  FUNC_0();
  break;
 }
}
