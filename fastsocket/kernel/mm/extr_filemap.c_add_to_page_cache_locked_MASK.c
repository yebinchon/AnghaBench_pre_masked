
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; int index; } ;
struct address_space {int tree_lock; int nrpages; int page_tree; } ;
typedef int pgoff_t ;
typedef int gfp_t ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct page*,int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct page*,int ,int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *,int ,struct page*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct page *VAR_4, struct address_space *VAR_5,
  pgoff_t VAR_6, gfp_t VAR_7)
{
 int VAR_8;

 FUNC_2(!FUNC_0(VAR_4));
 FUNC_2(FUNC_1(VAR_4));

 VAR_8 = FUNC_5(VAR_4, VAR_3->mm,
     VAR_7 & VAR_0);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_10(VAR_7 & ~VAR_2);
 if (VAR_8 == 0) {
  FUNC_7(VAR_4);
  VAR_4->mapping = VAR_5;
  VAR_4->index = VAR_6;

  FUNC_12(&VAR_5->tree_lock);
  VAR_8 = FUNC_9(&VAR_5->page_tree, VAR_6, VAR_4);
  if (FUNC_4(!VAR_8)) {
   VAR_5->nrpages++;
   FUNC_3(VAR_4, VAR_1);
   FUNC_13(&VAR_5->tree_lock);
  } else {
   VAR_4->mapping = ((void*)0);

   FUNC_13(&VAR_5->tree_lock);
   FUNC_6(VAR_4);
   FUNC_8(VAR_4);
  }
  FUNC_11();
 } else
  FUNC_6(VAR_4);
out:
 return VAR_8;
}
