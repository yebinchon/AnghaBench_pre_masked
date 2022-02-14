
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int index; } ;
struct address_space {scalar_t__ nrpages; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (struct address_space*,int const) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct pagevec*,int ) ;
 scalar_t__ FUNC_12 (struct pagevec*,struct address_space*,int,scalar_t__) ;
 int FUNC_13 (struct pagevec*) ;
 int FUNC_14 (struct address_space*,struct page*) ;
 int FUNC_15 (struct page*,unsigned int const) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;

void FUNC_19(struct address_space *VAR_3,
    loff_t VAR_4, loff_t VAR_5)
{
 const pgoff_t VAR_6 = (VAR_4 + VAR_2-1) >> VAR_1;
 const unsigned VAR_7 = VAR_4 & (VAR_2 - 1);
 struct pagevec VAR_8;
 pgoff_t VAR_9;
 pgoff_t VAR_10;
 int VAR_11;

 if (VAR_3->nrpages == 0)
  return;

 FUNC_0((VAR_5 & (VAR_2 - 1)) != (VAR_2 - 1));
 VAR_10 = (VAR_5 >> VAR_1);

 FUNC_11(&VAR_8, 0);
 VAR_9 = VAR_6;
 while (VAR_9 <= VAR_10 && FUNC_12(&VAR_8, VAR_3, VAR_9,
   FUNC_8(VAR_10 - VAR_9, (pgoff_t)VAR_0 - 1) + 1)) {
  FUNC_7();
  for (VAR_11 = 0; VAR_11 < FUNC_10(&VAR_8); VAR_11++) {
   struct page *VAR_12 = VAR_8.pages[VAR_11];


   VAR_9 = VAR_12->index;
   if (VAR_9 > VAR_10)
    break;

   if (!FUNC_16(VAR_12))
    continue;
   FUNC_2(VAR_12->index != VAR_9);
   if (FUNC_1(VAR_12)) {
    FUNC_17(VAR_12);
    continue;
   }
   FUNC_14(VAR_3, VAR_12);
   FUNC_17(VAR_12);
  }
  FUNC_13(&VAR_8);
  FUNC_6();
  FUNC_3();
  VAR_9++;
 }

 if (VAR_7) {
  struct page *VAR_13 = FUNC_4(VAR_3, VAR_6 - 1);
  if (VAR_13) {
   FUNC_18(VAR_13);
   FUNC_15(VAR_13, VAR_7);
   FUNC_17(VAR_13);
   FUNC_9(VAR_13);
  }
 }

 VAR_9 = VAR_6;
 for ( ; ; ) {
  FUNC_3();
  if (!FUNC_12(&VAR_8, VAR_3, VAR_9,
   FUNC_8(VAR_10 - VAR_9, (pgoff_t)VAR_0 - 1) + 1)) {
   if (VAR_9 == VAR_6)
    break;
   VAR_9 = VAR_6;
   continue;
  }
  if (VAR_9 == VAR_6 && VAR_8.pages[0]->index > VAR_10) {
   FUNC_13(&VAR_8);
   break;
  }
  FUNC_7();
  for (VAR_11 = 0; VAR_11 < FUNC_10(&VAR_8); VAR_11++) {
   struct page *VAR_14 = VAR_8.pages[VAR_11];


   VAR_9 = VAR_14->index;
   if (VAR_9 > VAR_10)
    break;

   FUNC_5(VAR_14);
   FUNC_2(VAR_14->index != VAR_9);
   FUNC_18(VAR_14);
   FUNC_14(VAR_3, VAR_14);
   FUNC_17(VAR_14);
  }
  FUNC_13(&VAR_8);
  FUNC_6();
  VAR_9++;
 }
}
