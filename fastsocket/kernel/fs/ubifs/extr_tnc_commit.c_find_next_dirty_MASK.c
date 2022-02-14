
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int iip; int child_cnt; struct ubifs_zbranch* zbranch; struct ubifs_znode* parent; } ;
struct ubifs_zbranch {scalar_t__ znode; } ;


 struct ubifs_znode* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct ubifs_znode *FUNC_2(struct ubifs_znode *VAR_0)
{
 int VAR_1 = VAR_0->iip + 1;

 VAR_0 = VAR_0->parent;
 if (!VAR_0)
  return ((void*)0);
 for (; VAR_1 < VAR_0->child_cnt; VAR_1++) {
  struct ubifs_zbranch *VAR_2 = &VAR_0->zbranch[VAR_1];

  if (VAR_2->znode && FUNC_1(VAR_2->znode))
   return FUNC_0(VAR_2->znode);
 }
 return VAR_0;
}
