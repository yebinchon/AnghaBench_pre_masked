
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ highest_blocked; scalar_t__ type; } ;
struct dlm_lock {TYPE_1__ ml; int bast_list; scalar_t__ bast_pending; int spinlock; } ;
struct dlm_ctxt {int ast_lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_ctxt *VAR_3, struct dlm_lock *VAR_4)
{
 FUNC_1(&VAR_3->ast_lock);
 FUNC_1(&VAR_4->spinlock);

 if (VAR_4->ml.highest_blocked == VAR_1)
  return 0;
 FUNC_0(VAR_4->ml.highest_blocked == VAR_2);

 if (VAR_4->bast_pending &&
     FUNC_2(&VAR_4->bast_list))

  return 0;

 if (VAR_4->ml.type == VAR_0)

  return 0;
 else if (VAR_4->ml.type == VAR_2)

  return 1;
 else if (VAR_4->ml.highest_blocked != VAR_0)

  return 1;

 return 0;
}
