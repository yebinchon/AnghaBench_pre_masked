
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
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct backing_dev_info*) ;
 int FUNC_2 (struct backing_dev_info*,int ) ;
 scalar_t__ FUNC_3 (struct backing_dev_info*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 struct address_space* FUNC_6 (struct page*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct page *VAR_3)
{
 struct address_space *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 if (VAR_4) {
  struct backing_dev_info *VAR_6 = VAR_4->backing_dev_info;
  unsigned long VAR_7;

  FUNC_8(&VAR_4->tree_lock, VAR_7);
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5) {
   FUNC_7(&VAR_4->page_tree,
      FUNC_5(VAR_3),
      VAR_2);
   if (FUNC_3(VAR_6)) {
    FUNC_2(VAR_6, VAR_0);
    FUNC_1(VAR_6);
   }
  }
  FUNC_9(&VAR_4->tree_lock, VAR_7);
 } else {
  VAR_5 = FUNC_0(VAR_3);
 }
 if (VAR_5)
  FUNC_4(VAR_3, VAR_1);
 return VAR_5;
}
