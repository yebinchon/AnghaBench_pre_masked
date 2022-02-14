
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct pagevec {int cold; int nr; struct page** pages; } ;
struct page {int lru; } ;
struct lruvec {int * lists; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int *) ;
 struct lruvec* FUNC_5 (struct zone*,struct page*,int,int) ;
 int FUNC_6 (struct page*) ;
 struct zone* FUNC_7 (struct page*) ;
 int FUNC_8 (struct pagevec*) ;
 int FUNC_9 (struct pagevec*) ;
 int FUNC_10 (struct page**,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct pagevec *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 struct zone *VAR_4 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < FUNC_8(VAR_1); VAR_2++) {
  struct page *VAR_5 = VAR_1->pages[VAR_2];
  struct zone *VAR_6 = FUNC_7(VAR_5);

  if (VAR_6 != VAR_4) {
   if (VAR_4)
    FUNC_12(&VAR_4->lru_lock);
   VAR_4 = VAR_6;
   FUNC_11(&VAR_4->lru_lock);
  }
  if (FUNC_1(VAR_5) && !FUNC_0(VAR_5) && !FUNC_2(VAR_5)) {
   enum lru_list VAR_7 = FUNC_6(VAR_5);
   struct lruvec *VAR_8;

   VAR_8 = FUNC_5(FUNC_7(VAR_5),
          VAR_5, VAR_7, VAR_7);
   FUNC_4(&VAR_5->lru, &VAR_8->lists[VAR_7]);
   VAR_3++;
  }
 }
 if (VAR_4)
  FUNC_12(&VAR_4->lru_lock);
 FUNC_3(VAR_0, VAR_3);
 FUNC_10(VAR_1->pages, VAR_1->nr, VAR_1->cold);
 FUNC_9(VAR_1);
}
