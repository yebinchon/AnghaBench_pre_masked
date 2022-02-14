
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int VAR_1 ;
 struct page* FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (char*,unsigned long) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

int FUNC_14(unsigned long VAR_2)
{
 struct page *VAR_3;
 struct page *VAR_4;
 int VAR_5 = 0;
 unsigned int VAR_6;

 if (!FUNC_10(VAR_2))
  return -VAR_0;

 VAR_4 = FUNC_9(VAR_2);
 VAR_3 = FUNC_5(VAR_4);

 if (!FUNC_0(VAR_4)) {
  FUNC_11("MCE: Page was already unpoisoned %#lx\n", VAR_2);
  return 0;
 }

 VAR_6 = 1 << FUNC_6(VAR_3);

 if (!FUNC_7(VAR_3)) {






  if (FUNC_1(VAR_3)) {
   FUNC_11("MCE: Memory failure is now running on free hugepage %#lx\n", VAR_2);
   return 0;
  }
  if (FUNC_2(VAR_4))
   FUNC_3(VAR_6, &VAR_1);
  FUNC_11("MCE: Software-unpoisoned free page %#lx\n", VAR_2);
  return 0;
 }

 FUNC_8(VAR_3);






 if (FUNC_2(VAR_3)) {
  FUNC_11("MCE: Software-unpoisoned page %#lx\n", VAR_2);
  FUNC_3(VAR_6, &VAR_1);
  VAR_5 = 1;
  if (FUNC_1(VAR_3))
   FUNC_4(VAR_3);
 }
 FUNC_13(VAR_3);

 FUNC_12(VAR_3);
 if (VAR_5)
  FUNC_12(VAR_3);

 return 0;
}
