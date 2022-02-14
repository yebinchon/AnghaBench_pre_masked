
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {int tree_lock; int page_tree; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,int) ;
 scalar_t__ FUNC_14 (void**) ;
 void** FUNC_15 (int *,int ) ;
 int FUNC_16 (void**,struct page*) ;
 int FUNC_17 (struct page*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct address_space *VAR_4,
  struct page *VAR_5, struct page *VAR_6,
  struct buffer_head *VAR_7, enum migrate_mode VAR_8)
{
 int VAR_9;
 void **VAR_10;

 if (!VAR_4) {

  if (FUNC_8(VAR_6) != 1)
   return -VAR_0;
  return 0;
 }

 FUNC_18(&VAR_4->tree_lock);

 VAR_10 = FUNC_15(&VAR_4->page_tree,
      FUNC_11(VAR_6));

 VAR_9 = 2 + FUNC_10(VAR_6);
 if (FUNC_8(VAR_6) != VAR_9 ||
   (struct page *)FUNC_14(VAR_10) != VAR_6) {
  FUNC_19(&VAR_4->tree_lock);
  return -VAR_0;
 }

 if (!FUNC_9(VAR_6, VAR_9)) {
  FUNC_19(&VAR_4->tree_lock);
  return -VAR_0;
 }
 if (VAR_8 == VAR_1 && VAR_7 &&
   !FUNC_6(VAR_7, VAR_8)) {
  FUNC_13(VAR_6, VAR_9);
  FUNC_19(&VAR_4->tree_lock);
  return -VAR_0;
 }




 FUNC_7(VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_2(VAR_5);
  FUNC_17(VAR_5, FUNC_12(VAR_6));
 }

 FUNC_16(VAR_10, VAR_5);

 FUNC_13(VAR_6, VAR_9);




 FUNC_5(VAR_6);
 FUNC_3(VAR_6, VAR_2);
 FUNC_4(VAR_5, VAR_2);
 if (!FUNC_1(VAR_6) && FUNC_0(VAR_6)) {
  FUNC_3(VAR_6, VAR_3);
  FUNC_4(VAR_5, VAR_3);
 }
 FUNC_19(&VAR_4->tree_lock);

 return 0;
}
