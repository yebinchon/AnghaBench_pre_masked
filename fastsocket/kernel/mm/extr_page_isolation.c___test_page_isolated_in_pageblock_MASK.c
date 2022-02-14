
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int
FUNC_6(unsigned long VAR_1, unsigned long VAR_2)
{
 struct page *VAR_3;

 while (VAR_1 < VAR_2) {
  if (!FUNC_5(VAR_1)) {
   VAR_1++;
   continue;
  }
  VAR_3 = FUNC_4(VAR_1);
  if (FUNC_0(VAR_3))
   VAR_1 += 1 << FUNC_2(VAR_3);
  else if (FUNC_1(VAR_3) == 0 &&
    FUNC_3(VAR_3) == VAR_0)
   VAR_1 += 1;
  else
   break;
 }
 if (VAR_1 < VAR_2)
  return 0;
 return 1;
}
