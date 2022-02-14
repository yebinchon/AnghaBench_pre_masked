
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct page *VAR_0)
{
 int VAR_1;

 FUNC_5(!FUNC_1(VAR_0));
 if (FUNC_9(FUNC_0(VAR_0)))
  return 0;
 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1 <= 1 && FUNC_2(VAR_0)) {
  VAR_1 += FUNC_8(VAR_0);
  if (VAR_1 == 1 && !FUNC_3(VAR_0)) {
   FUNC_6(VAR_0);
   FUNC_4(VAR_0);
  }
 }
 return VAR_1 <= 1;
}
