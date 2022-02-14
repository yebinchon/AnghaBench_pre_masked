
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum vc_resume_status { ____Placeholder_vc_resume_status } vc_resume_status ;
struct TYPE_4__ {int vc_resume_state; int vc_resume_complete; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;





 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(VCHIQ_ARM_STATE_T *VAR_1,
 enum vc_resume_status VAR_2)
{

 VAR_1->vc_resume_state = VAR_2;


 switch (VAR_2) {
 case 132:
  break;
 case 131:

  FUNC_1(VAR_1->vc_resume_complete);
  break;
 case 129:
  break;
 case 130:
  break;
 case 128:
  FUNC_2(&VAR_1->vc_resume_complete);
  FUNC_3(VAR_1, VAR_0);
  break;
 default:
  FUNC_0();
  break;
 }
}
