
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int level; int iip; int child_cnt; struct ubifs_znode* parent; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_1 (struct ubifs_info*,struct ubifs_znode*,int) ;

__attribute__((used)) static struct ubifs_znode *FUNC_2(struct ubifs_info *VAR_0,
           struct ubifs_znode *VAR_1)
{
 int VAR_2 = VAR_1->level;

 while (1) {
  int VAR_3 = VAR_1->iip + 1;


  VAR_1 = VAR_1->parent;
  if (!VAR_1)
   return ((void*)0);
  if (VAR_3 < VAR_1->child_cnt) {

   VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_3);
   if (FUNC_0(VAR_1))
    return VAR_1;
   while (VAR_1->level != VAR_2) {
    VAR_1 = FUNC_1(VAR_0, VAR_1, 0);
    if (FUNC_0(VAR_1))
     return VAR_1;
   }
   break;
  }
 }
 return VAR_1;
}
