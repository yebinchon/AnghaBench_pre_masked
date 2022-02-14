
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_credit_pool_obj {int base_pool_offset; int pool_sz; int pool_mirror; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(
 struct ecore_credit_pool_obj *VAR_2,
 int VAR_3)
{
 if (VAR_3 < VAR_2->base_pool_offset)
  return VAR_0;

 VAR_3 -= VAR_2->base_pool_offset;

 if (VAR_3 >= VAR_2->pool_sz)
  return VAR_0;


 FUNC_0(VAR_2->pool_mirror, VAR_3);

 return VAR_1;
}
