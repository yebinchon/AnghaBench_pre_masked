
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct pagevec*) ;
 int FUNC_2 (struct page*,int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct pagevec *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
  struct page *VAR_2 = VAR_0->pages[VAR_1];

  if (FUNC_0(VAR_2) && FUNC_3(VAR_2)) {
   if (FUNC_0(VAR_2))
    FUNC_2(VAR_2, 0);
   FUNC_4(VAR_2);
  }
 }
}
