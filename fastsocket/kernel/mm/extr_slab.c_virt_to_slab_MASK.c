
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
struct page {int dummy; } ;


 struct slab* FUNC_0 (struct page*) ;
 struct page* FUNC_1 (void const*) ;

__attribute__((used)) static inline struct slab *FUNC_2(const void *VAR_0)
{
 struct page *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1);
}
