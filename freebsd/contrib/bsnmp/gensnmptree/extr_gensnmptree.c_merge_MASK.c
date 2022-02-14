
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subs; } ;
struct TYPE_4__ {TYPE_1__ tree; } ;
struct node {scalar_t__ type; scalar_t__ id; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct node **VAR_1, struct node *VAR_2)
{

 if (*VAR_1 == ((void*)0)) {
  *VAR_1 = VAR_2;
  return;
 }
 if (VAR_2 == ((void*)0))
  return;


 if ((*VAR_1)->type != VAR_0)
  FUNC_0(1, "root is not a tree");
 if (VAR_2->type != VAR_0)
  FUNC_0(1, "can merge only with tree");
 if ((*VAR_1)->id != VAR_2->id)
  FUNC_0(1, "trees to merge must have same id");

 FUNC_1(&(*VAR_1)->u.tree.subs, &VAR_2->u.tree.subs);
}
