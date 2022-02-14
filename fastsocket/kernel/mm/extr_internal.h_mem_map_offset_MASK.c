
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 struct page* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct page *FUNC_3(struct page *VAR_1, int VAR_2)
{
 if (FUNC_2(VAR_2 >= VAR_0))
  return FUNC_1(FUNC_0(VAR_1) + VAR_2);
 return VAR_1 + VAR_2;
}
