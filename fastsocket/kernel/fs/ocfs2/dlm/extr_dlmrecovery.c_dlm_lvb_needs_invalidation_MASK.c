
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct dlm_lock {TYPE_1__ ml; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct dlm_lock *VAR_2, int VAR_3)
{
 if (VAR_3) {
  if (VAR_2->ml.type != VAR_0 &&
      VAR_2->ml.type != VAR_1)
   return 1;
 } else if (VAR_2->ml.type == VAR_0)
  return 1;
 return 0;
}
