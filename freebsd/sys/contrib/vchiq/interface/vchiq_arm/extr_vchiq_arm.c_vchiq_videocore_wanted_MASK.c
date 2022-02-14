
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCHIQ_STATE_T ;
struct TYPE_3__ {scalar_t__ resume_blocked; int videocore_use_count; scalar_t__ blocked_count; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(VCHIQ_STATE_T *VAR_0)
{
 VCHIQ_ARM_STATE_T *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)

  return 1;
 else if (VAR_1->blocked_count)
  return 1;
 else if (!VAR_1->videocore_use_count)

  if (VAR_1->resume_blocked)
   return 0;
  else
   return FUNC_1(VAR_0);
 else

  return 1;
}
