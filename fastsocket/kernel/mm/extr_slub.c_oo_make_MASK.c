
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_order_objects {int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct kmem_cache_order_objects FUNC_0(int VAR_2,
      unsigned long VAR_3)
{
 struct kmem_cache_order_objects VAR_4 = {
  (VAR_2 << VAR_0) + (VAR_1 << VAR_2) / VAR_3
 };

 return VAR_4;
}
