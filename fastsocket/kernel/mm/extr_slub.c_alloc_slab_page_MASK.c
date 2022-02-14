
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache_order_objects {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,int) ;
 struct page* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct kmem_cache_order_objects) ;

__attribute__((used)) static inline struct page *FUNC_3(gfp_t VAR_1, int VAR_2,
     struct kmem_cache_order_objects VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3);

 VAR_1 |= VAR_0;

 if (VAR_2 == -1)
  return FUNC_0(VAR_1, VAR_4);
 else
  return FUNC_1(VAR_2, VAR_1, VAR_4);
}
