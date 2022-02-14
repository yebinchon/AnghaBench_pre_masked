
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct audit_watch {int rules; struct audit_parent* parent; } ;
struct audit_parent {int ilist; int wdata; int watches; } ;
struct audit_krule {int rlist; struct audit_watch* watch; } ;


 int FUNC_0 (struct audit_watch*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct audit_krule *VAR_0, struct list_head *VAR_1)
{
 struct audit_watch *VAR_2 = VAR_0->watch;
 struct audit_parent *VAR_3 = VAR_2->parent;

 FUNC_2(&VAR_0->rlist);

 if (FUNC_3(&VAR_2->rules)) {
  FUNC_0(VAR_2);

  if (FUNC_3(&VAR_3->watches)) {







   if (FUNC_4(&VAR_3->wdata))
    FUNC_1(&VAR_3->ilist, VAR_1);
  }
 }
}
