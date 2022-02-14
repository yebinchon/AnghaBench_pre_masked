
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 struct page* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct page *
FUNC_3(unsigned long VAR_0, unsigned long VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (FUNC_1(VAR_0 + VAR_2))
   break;
 if (FUNC_2(VAR_2 == VAR_1))
  return ((void*)0);
 return FUNC_0(VAR_0 + VAR_2);
}
