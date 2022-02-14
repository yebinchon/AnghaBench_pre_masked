
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct page*) ;
 struct buffer_head* FUNC_10 (struct page*) ;
 unsigned int FUNC_11 (struct pagevec*) ;
 int FUNC_12 (struct pagevec*,int ) ;
 scalar_t__ FUNC_13 (struct pagevec*,struct address_space*,int *,int ,int ) ;
 int FUNC_14 (struct pagevec*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct page*) ;

void FUNC_17(struct address_space *VAR_2)
{
 struct pagevec VAR_3;
 unsigned int VAR_4;
 pgoff_t VAR_5 = 0;

 FUNC_12(&VAR_3, 0);

 while (FUNC_13(&VAR_3, VAR_2, &VAR_5, VAR_0,
      VAR_1)) {
  for (VAR_4 = 0; VAR_4 < FUNC_11(&VAR_3); VAR_4++) {
   struct page *VAR_6 = VAR_3.pages[VAR_4];
   struct buffer_head *VAR_7, *VAR_8;

   FUNC_9(VAR_6);
   FUNC_1(VAR_6);
   FUNC_0(VAR_6);
   VAR_7 = VAR_8 = FUNC_10(VAR_6);
   do {
    FUNC_8(VAR_7);
    FUNC_3(VAR_7);
    FUNC_5(VAR_7);
    FUNC_6(VAR_7);
    FUNC_4(VAR_7);
    FUNC_15(VAR_7);
    VAR_7 = VAR_7->b_this_page;
   } while (VAR_7 != VAR_8);

   FUNC_2(VAR_6);
   FUNC_16(VAR_6);
  }
  FUNC_14(&VAR_3);
  FUNC_7();
 }
}
