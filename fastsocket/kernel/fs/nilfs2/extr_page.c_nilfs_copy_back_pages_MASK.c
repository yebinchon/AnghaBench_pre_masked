
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {struct address_space* mapping; scalar_t__ index; } ;
struct address_space {int tree_lock; int page_tree; int nrpages; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct page* FUNC_3 (struct address_space*,scalar_t__) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,struct page*,int ) ;
 int FUNC_6 (struct page*) ;
 unsigned int FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*,int ) ;
 unsigned int FUNC_9 (struct pagevec*,struct address_space*,scalar_t__,int ) ;
 int FUNC_10 (struct pagevec*) ;
 struct page* FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,scalar_t__,struct page*) ;
 int FUNC_13 (int *,scalar_t__,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct page*) ;

void FUNC_18(struct address_space *VAR_3,
      struct address_space *VAR_4)
{
 struct pagevec VAR_5;
 unsigned int VAR_6, VAR_7;
 pgoff_t VAR_8 = 0;
 int VAR_9;

 FUNC_8(&VAR_5, 0);
repeat:
 VAR_7 = FUNC_9(&VAR_5, VAR_4, VAR_8, VAR_2);
 if (!VAR_7)
  return;
 VAR_8 = VAR_5.pages[VAR_7 - 1]->index + 1;

 for (VAR_6 = 0; VAR_6 < FUNC_7(&VAR_5); VAR_6++) {
  struct page *VAR_10 = VAR_5.pages[VAR_6], *VAR_11;
  pgoff_t VAR_12 = VAR_10->index;

  FUNC_4(VAR_10);
  VAR_11 = FUNC_3(VAR_3, VAR_12);
  if (VAR_11) {

   FUNC_1(FUNC_0(VAR_11));
   FUNC_5(VAR_11, VAR_10, 0);
   FUNC_17(VAR_11);
   FUNC_6(VAR_11);
  } else {
   struct page *VAR_13;


   FUNC_14(&VAR_4->tree_lock);
   VAR_13 = FUNC_11(&VAR_4->page_tree, VAR_12);
   FUNC_1(VAR_13 != VAR_10);

   VAR_4->nrpages--;
   FUNC_15(&VAR_4->tree_lock);

   FUNC_14(&VAR_3->tree_lock);
   VAR_9 = FUNC_12(&VAR_3->page_tree, VAR_12, VAR_10);
   if (FUNC_16(VAR_9 < 0)) {
    FUNC_1(VAR_9 == -VAR_0);
    VAR_10->mapping = ((void*)0);
    FUNC_6(VAR_10);
   } else {
    VAR_10->mapping = VAR_3;
    VAR_3->nrpages++;
    if (FUNC_0(VAR_10))
     FUNC_13(&VAR_3->page_tree,
          VAR_12,
          VAR_1);
   }
   FUNC_15(&VAR_3->tree_lock);
  }
  FUNC_17(VAR_10);
 }
 FUNC_10(&VAR_5);
 FUNC_2();

 goto repeat;
}
