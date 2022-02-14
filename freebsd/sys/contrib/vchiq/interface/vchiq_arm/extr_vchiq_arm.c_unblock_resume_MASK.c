
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ resume_blocked; int resume_blocker; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(VCHIQ_ARM_STATE_T *VAR_0)
{
 FUNC_0(&VAR_0->resume_blocker);
 VAR_0->resume_blocked = 0;
}
