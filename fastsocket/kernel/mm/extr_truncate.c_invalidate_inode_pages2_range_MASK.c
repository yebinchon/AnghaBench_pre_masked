
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct address_space*,struct page*) ;
 int FUNC_4 (struct address_space*,struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct pagevec*,int ) ;
 scalar_t__ FUNC_12 (struct pagevec*,struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct pagevec*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct address_space*,int,int,int ) ;
 int FUNC_16 (struct page*) ;

int FUNC_17(struct address_space *VAR_4,
      pgoff_t VAR_5, pgoff_t VAR_6)
{
 struct pagevec VAR_7;
 pgoff_t VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_11(&VAR_7, 0);
 VAR_8 = VAR_5;
 while (VAR_8 <= VAR_6 && FUNC_12(&VAR_7, VAR_4, VAR_8,
   FUNC_8(VAR_6 - VAR_8, (pgoff_t)VAR_1 - 1) + 1)) {
  FUNC_7();
  for (VAR_9 = 0; VAR_9 < FUNC_10(&VAR_7); VAR_9++) {
   struct page *VAR_13 = VAR_7.pages[VAR_9];


   VAR_8 = VAR_13->index;
   if (VAR_8 > VAR_6)
    break;

   FUNC_5(VAR_13);
   FUNC_1(VAR_13->index != VAR_8);
   if (VAR_13->mapping != VAR_4) {
    FUNC_14(VAR_13);
    continue;
   }
   FUNC_16(VAR_13);
   if (FUNC_9(VAR_13)) {
    if (!VAR_12) {



     FUNC_15(VAR_4,
        (loff_t)VAR_8 << VAR_2,
        (loff_t)(1 + VAR_6 - VAR_8)
        << VAR_2,
         0);
     VAR_12 = 1;
    } else {



     FUNC_15(VAR_4,
        (loff_t)VAR_8 << VAR_2,
        VAR_3, 0);
    }
   }
   FUNC_0(FUNC_9(VAR_13));
   VAR_11 = FUNC_3(VAR_4, VAR_13);
   if (VAR_11 == 0) {
    if (!FUNC_4(VAR_4, VAR_13))
     VAR_11 = -VAR_0;
   }
   if (VAR_11 < 0)
    VAR_10 = VAR_11;
   FUNC_14(VAR_13);
  }
  FUNC_13(&VAR_7);
  FUNC_6();
  FUNC_2();
  VAR_8++;
 }
 return VAR_10;
}
