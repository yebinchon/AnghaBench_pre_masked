
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_migratable_lockres {int num_locks; int lvb; struct dlm_migratable_lock* ml; } ;
struct dlm_migratable_lock {scalar_t__ type; int list; int node; int flags; int highest_blocked; int convert_type; int cookie; } ;
struct TYPE_4__ {scalar_t__ type; int node; int highest_blocked; int convert_type; int cookie; } ;
struct dlm_lock {TYPE_2__ ml; TYPE_1__* lksb; int lockres; } ;
struct TYPE_3__ {int lvb; int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct dlm_lock *VAR_5,
     struct dlm_migratable_lockres *VAR_6, int VAR_7)
{
 struct dlm_migratable_lock *VAR_8;
 int VAR_9 = VAR_6->num_locks;

 VAR_8 = &(VAR_6->ml[VAR_9]);
 VAR_8->cookie = VAR_5->ml.cookie;
 VAR_8->type = VAR_5->ml.type;
 VAR_8->convert_type = VAR_5->ml.convert_type;
 VAR_8->highest_blocked = VAR_5->ml.highest_blocked;
 VAR_8->list = VAR_7;
 if (VAR_5->lksb) {
  VAR_8->flags = VAR_5->lksb->flags;

  if (VAR_8->type == VAR_2 ||
      VAR_8->type == VAR_3) {


   if (!FUNC_1(VAR_6->lvb) &&
       (VAR_8->type == VAR_2 ||
        FUNC_3(VAR_6->lvb, VAR_5->lksb->lvb, VAR_0))) {
    FUNC_5(VAR_4, "mismatched lvbs!\n");
    FUNC_2(VAR_5->lockres);
    FUNC_0();
   }
   FUNC_4(VAR_6->lvb, VAR_5->lksb->lvb, VAR_0);
  }
 }
 VAR_8->node = VAR_5->ml.node;
 VAR_6->num_locks++;

 if (VAR_6->num_locks == VAR_1)
  return 1;
 return 0;
}
