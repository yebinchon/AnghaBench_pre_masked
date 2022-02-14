
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

void FUNC_7(struct page *VAR_3)
{
 FUNC_2(!FUNC_0(VAR_3));

 if (!VAR_3->mapping) {
  return;
 }

 FUNC_4(VAR_3, VAR_0);
 FUNC_3(VAR_1);
 if (!FUNC_5(VAR_3)) {
  FUNC_6(VAR_3);
 } else {



  if (FUNC_1(VAR_3))
   FUNC_3(VAR_2);
 }
}
