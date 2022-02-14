
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {scalar_t__ dirty; int ui_mutex; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int fast; int dirtied_ino; int new_page; int dirtied_page; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_0, struct page *VAR_1,
      struct ubifs_inode *VAR_2, int VAR_3)
{
 struct ubifs_budget_req VAR_4 = { .fast = 1 };

 if (FUNC_1(VAR_1)) {
  if (!VAR_3)




   return 0;

  FUNC_2(&VAR_2->ui_mutex);
  if (VAR_2->dirty)
   return 0;





  VAR_4.dirtied_ino = 1;
 } else {
  if (FUNC_0(VAR_1))







   VAR_4.new_page = 1;
  else





   VAR_4.dirtied_page = 1;

  if (VAR_3) {
   FUNC_2(&VAR_2->ui_mutex);
   if (!VAR_2->dirty)





    VAR_4.dirtied_ino = 1;
  }
 }

 return FUNC_3(VAR_0, &VAR_4);
}
