
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree {int goner; int list; int same_root; int * root; int rules; } ;
struct audit_krule {struct audit_tree* tree; int rlist; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct audit_krule *VAR_2)
{
 struct audit_tree *VAR_3;
 VAR_3 = VAR_2->tree;
 if (VAR_3) {
  FUNC_4(&VAR_0);
  FUNC_1(&VAR_2->rlist);
  if (FUNC_2(&VAR_3->rules) && !VAR_3->goner) {
   VAR_3->root = ((void*)0);
   FUNC_1(&VAR_3->same_root);
   VAR_3->goner = 1;
   FUNC_3(&VAR_3->list, &VAR_1);
   VAR_2->tree = ((void*)0);
   FUNC_5(&VAR_0);
   FUNC_0();
   return 1;
  }
  VAR_2->tree = ((void*)0);
  FUNC_5(&VAR_0);
  return 1;
 }
 return 0;
}
