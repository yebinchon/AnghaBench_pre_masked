
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {int tree_lock; int page_tree; struct backing_dev_info* backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct backing_dev_info*,int ) ;
 scalar_t__ FUNC_3 (struct backing_dev_info*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 struct address_space* FUNC_6 (struct page*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int FUNC_11(struct page *VAR_5)
{
 struct address_space *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 if (VAR_6) {
  struct backing_dev_info *VAR_8 = VAR_6->backing_dev_info;
  unsigned long VAR_9;

  FUNC_9(&VAR_6->tree_lock, VAR_9);
  VAR_7 = FUNC_1(VAR_5);
  if (!VAR_7) {
   FUNC_8(&VAR_6->page_tree,
      FUNC_5(VAR_5),
      VAR_4);
   if (FUNC_3(VAR_8))
    FUNC_2(VAR_8, VAR_0);
  }
  if (!FUNC_0(VAR_5))
   FUNC_7(&VAR_6->page_tree,
      FUNC_5(VAR_5),
      VAR_2);
  FUNC_7(&VAR_6->page_tree,
         FUNC_5(VAR_5),
         VAR_3);
  FUNC_10(&VAR_6->tree_lock, VAR_9);
 } else {
  VAR_7 = FUNC_1(VAR_5);
 }
 if (!VAR_7)
  FUNC_4(VAR_5, VAR_1);
 return VAR_7;

}
