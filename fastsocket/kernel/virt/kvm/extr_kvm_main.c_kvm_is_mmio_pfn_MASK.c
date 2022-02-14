
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pfn_t ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

inline int FUNC_6(pfn_t VAR_0)
{
 if (FUNC_4(VAR_0)) {
  int VAR_1;
  struct page *VAR_2 = FUNC_3(VAR_0);
  struct page *VAR_3 = FUNC_2(VAR_2);
  VAR_1 = FUNC_0(VAR_3);
  if (VAR_3 != VAR_2) {
   FUNC_5();
   if (FUNC_1(VAR_2))
    return VAR_1;
  }
  return FUNC_0(VAR_2);
 }

 return 1;
}
