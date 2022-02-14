
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ikev2_integ_alg {int id; } ;


 size_t VAR_0 ;
 struct ikev2_integ_alg const* VAR_1 ;

const struct ikev2_integ_alg * FUNC_0(int VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].id == VAR_2)
   return &VAR_1[VAR_3];
 }

 return ((void*)0);
}
