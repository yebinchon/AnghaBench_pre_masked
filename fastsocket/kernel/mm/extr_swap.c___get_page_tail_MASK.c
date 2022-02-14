
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int) ;
 unsigned long FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,unsigned long) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct page *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2 = 0;
 struct page *VAR_3 = FUNC_4(VAR_0);

 if (FUNC_7(VAR_0 != VAR_3 && FUNC_6(VAR_3))) {


  if (FUNC_0(VAR_3)) {
   if (FUNC_7(FUNC_1(VAR_0))) {
    FUNC_2(VAR_0, 0);
    return 1;
   } else {
    FUNC_8(VAR_3);
    return 0;
   }
  }







  VAR_1 = FUNC_3(VAR_3);

  if (FUNC_7(FUNC_1(VAR_0))) {
   FUNC_2(VAR_0, 0);
   VAR_2 = 1;
  }
  FUNC_5(VAR_3, VAR_1);
  if (FUNC_9(!VAR_2))
   FUNC_8(VAR_3);
 }
 return VAR_2;
}
