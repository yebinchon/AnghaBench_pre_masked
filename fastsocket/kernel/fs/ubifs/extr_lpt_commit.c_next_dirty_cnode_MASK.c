
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct ubifs_cnode {int iip; scalar_t__ level; int flags; struct ubifs_nnode* parent; } ;
struct TYPE_2__ {struct ubifs_cnode* cnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_cnode* FUNC_0 (struct ubifs_nnode*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ubifs_cnode*) ;

__attribute__((used)) static struct ubifs_cnode *FUNC_3(struct ubifs_cnode *VAR_2)
{
 struct ubifs_nnode *VAR_3;
 int VAR_4;

 FUNC_2(VAR_2);
 VAR_3 = VAR_2->parent;
 if (!VAR_3)
  return ((void*)0);
 for (VAR_4 = VAR_2->iip + 1; VAR_4 < VAR_1; VAR_4++) {
  VAR_2 = VAR_3->nbranch[VAR_4].cnode;
  if (VAR_2 && FUNC_1(VAR_0, &VAR_2->flags)) {
   if (VAR_2->level == 0)
    return VAR_2;

   return FUNC_0((struct ubifs_nnode *)VAR_2);
  }
 }
 return (struct ubifs_cnode *)VAR_3;
}
