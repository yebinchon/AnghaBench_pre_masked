
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; scalar_t__ level; TYPE_1__* zbranch; } ;
struct TYPE_2__ {struct ubifs_znode* znode; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_3 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_4 (struct ubifs_znode*) ;
 int FUNC_5 (struct ubifs_znode*) ;

long FUNC_6(struct ubifs_znode *VAR_0)
{
 struct ubifs_znode *VAR_1 = FUNC_3(VAR_0);
 long VAR_2 = 0;
 int VAR_3;

 FUNC_2(VAR_1);
 while (1) {
  for (VAR_3 = 0; VAR_3 < VAR_1->child_cnt; VAR_3++) {
   if (!VAR_1->zbranch[VAR_3].znode)
    continue;

   if (VAR_1->level > 0 &&
       !FUNC_5(VAR_1->zbranch[VAR_3].znode))
    VAR_2 += 1;

   FUNC_0();
   FUNC_1(VAR_1->zbranch[VAR_3].znode);
  }

  if (VAR_1 == VAR_0) {
   if (!FUNC_5(VAR_1))
    VAR_2 += 1;
   FUNC_1(VAR_1);
   return VAR_2;
  }

  VAR_1 = FUNC_4(VAR_1);
 }
}
