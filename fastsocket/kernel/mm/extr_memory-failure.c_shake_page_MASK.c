
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int,int ,int) ;

void FUNC_7(struct page *VAR_1, int VAR_2)
{
 if (!FUNC_1(VAR_1)) {
  FUNC_4();
  if (FUNC_0(VAR_1))
   return;
  FUNC_2();
  if (FUNC_0(VAR_1) || FUNC_3(VAR_1))
   return;
 }





 if (VAR_2) {
  int VAR_3;
  do {
   VAR_3 = FUNC_6(1000, VAR_0, 1000);
   if (FUNC_5(VAR_1) == 1)
    break;
  } while (VAR_3 > 10);
 }
}
