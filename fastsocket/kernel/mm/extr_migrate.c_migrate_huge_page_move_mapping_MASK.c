
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int tree_lock; int page_tree; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int) ;
 scalar_t__ FUNC_7 (void**) ;
 void** FUNC_8 (int *,int ) ;
 int FUNC_9 (void**,struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct address_space *VAR_1,
       struct page *VAR_2, struct page *VAR_3)
{
 int VAR_4;
 void **VAR_5;

 if (!VAR_1) {
  if (FUNC_2(VAR_3) != 1)
   return -VAR_0;
  return 0;
 }

 FUNC_10(&VAR_1->tree_lock);

 VAR_5 = FUNC_8(&VAR_1->page_tree,
     FUNC_5(VAR_3));

 VAR_4 = 2 + FUNC_4(VAR_3);
 if (FUNC_2(VAR_3) != VAR_4 ||
     (struct page *)FUNC_7(VAR_5) != VAR_3) {
  FUNC_11(&VAR_1->tree_lock);
  return -VAR_0;
 }

 if (!FUNC_3(VAR_3, VAR_4)) {
  FUNC_11(&VAR_1->tree_lock);
  return -VAR_0;
 }

 FUNC_1(VAR_2);

 FUNC_9(VAR_5, VAR_2);

 FUNC_6(VAR_3, VAR_4);

 FUNC_0(VAR_3);

 FUNC_11(&VAR_1->tree_lock);
 return 0;
}
