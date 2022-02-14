
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCHIQ_STATE_T ;
struct TYPE_3__ {scalar_t__ vc_suspend_state; scalar_t__ vc_resume_state; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int
FUNC_2(VCHIQ_STATE_T *VAR_2)
{
 VCHIQ_ARM_STATE_T *VAR_3 = FUNC_0(VAR_2);
 return (VAR_3->vc_suspend_state > VAR_1) &&
   (VAR_3->vc_resume_state < VAR_0) &&
   FUNC_1(VAR_2);
}
