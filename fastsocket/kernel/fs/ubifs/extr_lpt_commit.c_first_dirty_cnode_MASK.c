
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct ubifs_cnode {scalar_t__ level; int flags; } ;
struct TYPE_2__ {struct ubifs_cnode* cnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ubifs_nnode*) ;

__attribute__((used)) static struct ubifs_cnode *FUNC_2(struct ubifs_nnode *VAR_2)
{
 FUNC_1(VAR_2);
 while (1) {
  int VAR_3, VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   struct ubifs_cnode *VAR_5;

   VAR_5 = VAR_2->nbranch[VAR_3].cnode;
   if (VAR_5 &&
       FUNC_0(VAR_0, &VAR_5->flags)) {
    if (VAR_5->level == 0)
     return VAR_5;
    VAR_2 = (struct ubifs_nnode *)VAR_5;
    VAR_4 = 1;
    break;
   }
  }
  if (!VAR_4)
   return (struct ubifs_cnode *)VAR_2;
 }
}
