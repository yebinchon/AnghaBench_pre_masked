
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct pagevec {int cold; int nr; struct page** pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*,struct zone*) ;
 struct zone* FUNC_1 (struct page*) ;
 int FUNC_2 (struct pagevec*) ;
 int FUNC_3 (struct pagevec*) ;
 int FUNC_4 (struct page**,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pagevec *VAR_0)
{
 int VAR_1;
 struct zone *VAR_2 = ((void*)0);

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0); VAR_1++) {
  struct page *VAR_3 = VAR_0->pages[VAR_1];
  struct zone *VAR_4 = FUNC_1(VAR_3);

  if (VAR_4 != VAR_2) {
   if (VAR_2)
    FUNC_6(&VAR_2->lru_lock);
   VAR_2 = VAR_4;
   FUNC_5(&VAR_2->lru_lock);
  }
  FUNC_0(VAR_3, VAR_2);
 }
 if (VAR_2)
  FUNC_6(&VAR_2->lru_lock);

 FUNC_4(VAR_0->pages, VAR_0->nr, VAR_0->cold);
 FUNC_3(VAR_0);
}
