
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct pagevec {int cold; int nr; struct page** pages; } ;
struct page {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct zone*,struct page*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 struct zone* FUNC_10 (struct page*) ;
 int FUNC_11 (struct pagevec*) ;
 int FUNC_12 (struct pagevec*) ;
 int FUNC_13 (struct page**,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct zone*,struct page*,int,int) ;

void FUNC_17(struct pagevec *VAR_0, enum lru_list VAR_1)
{
 int VAR_2;
 struct zone *VAR_3 = ((void*)0);

 FUNC_5(FUNC_9(VAR_1));

 for (VAR_2 = 0; VAR_2 < FUNC_11(VAR_0); VAR_2++) {
  struct page *VAR_4 = VAR_0->pages[VAR_2];
  struct zone *VAR_5 = FUNC_10(VAR_4);
  int VAR_6;
  int VAR_7;

  if (VAR_5 != VAR_3) {
   if (VAR_3)
    FUNC_15(&VAR_3->lru_lock);
   VAR_3 = VAR_5;
   FUNC_14(&VAR_3->lru_lock);
  }
  FUNC_5(FUNC_0(VAR_4));
  FUNC_5(FUNC_2(VAR_4));
  FUNC_5(FUNC_1(VAR_4));
  FUNC_4(VAR_4);
  VAR_7 = FUNC_7(VAR_1);
  VAR_6 = FUNC_8(VAR_1);
  if (VAR_7)
   FUNC_3(VAR_4);
  FUNC_16(VAR_3, VAR_4, VAR_6, VAR_7);
  FUNC_6(VAR_3, VAR_4, VAR_1);
 }
 if (VAR_3)
  FUNC_15(&VAR_3->lru_lock);
 FUNC_13(VAR_0->pages, VAR_0->nr, VAR_0->cold);
 FUNC_12(VAR_0);
}
