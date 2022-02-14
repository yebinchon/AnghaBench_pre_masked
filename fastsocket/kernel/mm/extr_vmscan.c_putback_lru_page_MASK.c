
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int) ;
 scalar_t__ FUNC_9 (struct page*,int *) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;

void FUNC_13(struct page *VAR_3)
{
 int VAR_4;
 int VAR_5 = !!FUNC_3(VAR_3);
 int VAR_6 = FUNC_2(VAR_3);

 FUNC_4(FUNC_1(VAR_3));

redo:
 FUNC_0(VAR_3);

 if (FUNC_9(VAR_3, ((void*)0))) {






  VAR_4 = VAR_5 + FUNC_10(VAR_3);
  FUNC_8(VAR_3, VAR_4);
 } else {




  VAR_4 = VAR_0;
  FUNC_5(VAR_3);
  FUNC_12();
 }






 if (VAR_4 == VAR_0 && FUNC_9(VAR_3, ((void*)0))) {
  if (!FUNC_7(VAR_3)) {
   FUNC_11(VAR_3);
   goto redo;
  }




 }

 if (VAR_6 && VAR_4 != VAR_0)
  FUNC_6(VAR_2);
 else if (!VAR_6 && VAR_4 == VAR_0)
  FUNC_6(VAR_1);

 FUNC_11(VAR_3);
}
