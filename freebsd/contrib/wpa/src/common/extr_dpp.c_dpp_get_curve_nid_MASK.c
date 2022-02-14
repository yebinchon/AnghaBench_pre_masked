
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_curve_params {scalar_t__ name; } ;


 int FUNC_0 (scalar_t__) ;
 struct dpp_curve_params const* VAR_0 ;

__attribute__((used)) static const struct dpp_curve_params * FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1)
  return ((void*)0);
 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0[VAR_2].name);
  if (VAR_3 == VAR_1)
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
