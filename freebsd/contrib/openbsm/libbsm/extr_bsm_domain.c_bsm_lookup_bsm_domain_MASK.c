
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct bsm_domain {scalar_t__ bd_bsm_domain; } ;


 struct bsm_domain const* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const struct bsm_domain *
FUNC_0(u_short VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].bd_bsm_domain == VAR_2)
   return (&VAR_0[VAR_3]);
 }
 return (((void*)0));
}
