
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {scalar_t__ host; int tree_lock; int page_tree; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct page*,struct address_space*) ;
 int FUNC_7 (struct page*) ;
 struct address_space* FUNC_8 (struct page*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct page *VAR_2)
{
 if (!FUNC_3(VAR_2)) {
  struct address_space *VAR_3 = FUNC_8(VAR_2);
  struct address_space *VAR_4;

  if (!VAR_3)
   return 1;

  FUNC_10(&VAR_3->tree_lock);
  VAR_4 = FUNC_8(VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_4 != VAR_3);
   FUNC_4(!FUNC_1(VAR_2) && !FUNC_2(VAR_2));
   FUNC_6(VAR_2, VAR_3);
   FUNC_9(&VAR_3->page_tree,
    FUNC_7(VAR_2), VAR_1);
  }
  FUNC_11(&VAR_3->tree_lock);
  if (VAR_3->host) {

   FUNC_5(VAR_3->host, VAR_0);
  }
  return 1;
 }
 return 0;
}
