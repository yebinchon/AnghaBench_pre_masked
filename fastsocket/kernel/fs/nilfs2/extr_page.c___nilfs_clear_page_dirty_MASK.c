
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; struct address_space* mapping; } ;
struct address_space {int tree_lock; int page_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct page *VAR_2)
{
 struct address_space *VAR_3 = VAR_2->mapping;

 if (VAR_3) {
  FUNC_4(&VAR_3->tree_lock);
  if (FUNC_6(VAR_1, &VAR_2->flags)) {
   FUNC_3(&VAR_3->page_tree,
          FUNC_2(VAR_2),
          VAR_0);
   FUNC_5(&VAR_3->tree_lock);
   return FUNC_1(VAR_2);
  }
  FUNC_5(&VAR_3->tree_lock);
  return 0;
 }
 return FUNC_0(VAR_2);
}
