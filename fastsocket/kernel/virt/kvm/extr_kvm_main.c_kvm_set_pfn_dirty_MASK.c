
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pfn_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (int ) ;

void FUNC_4(pfn_t VAR_0)
{
 if (!FUNC_2(VAR_0)) {
  struct page *VAR_1 = FUNC_3(VAR_0);
  if (!FUNC_0(VAR_1))
   FUNC_1(VAR_1);
 }
}
