
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct page*) ;
 unsigned long FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*,int ) ;
 scalar_t__ FUNC_9 (struct pagevec*,struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;

unsigned long FUNC_13(struct address_space *VAR_1,
  pgoff_t VAR_2, pgoff_t VAR_3)
{
 struct pagevec VAR_4;
 pgoff_t VAR_5 = VAR_2;
 unsigned long VAR_6;
 unsigned long VAR_7 = 0;
 int VAR_8;
 FUNC_8(&VAR_4, 0);
 while (VAR_5 <= VAR_3 && FUNC_9(&VAR_4, VAR_1, VAR_5,
   FUNC_6(VAR_3 - VAR_5, (pgoff_t)VAR_0 - 1) + 1)) {
  FUNC_5();
  for (VAR_8 = 0; VAR_8 < FUNC_7(&VAR_4); VAR_8++) {
   struct page *VAR_9 = VAR_4.pages[VAR_8];


   VAR_5 = VAR_9->index;
   if (VAR_5 > VAR_3)
    break;

   if (!FUNC_11(VAR_9))
    continue;
   FUNC_0(VAR_9->index != VAR_5);
   VAR_6 = FUNC_3(VAR_9);
   FUNC_12(VAR_9);




   if (!VAR_6)
    FUNC_2(VAR_9);
   VAR_7 += VAR_6;
  }
  FUNC_10(&VAR_4);
  FUNC_4();
  FUNC_1();
  VAR_5++;
 }
 return VAR_7;
}
