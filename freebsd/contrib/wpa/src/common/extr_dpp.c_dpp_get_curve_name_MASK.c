
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_curve_params {scalar_t__ jwk_crv; scalar_t__ name; } ;


 struct dpp_curve_params const* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;

__attribute__((used)) static const struct dpp_curve_params *
FUNC_1(const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_0[VAR_2].name) == 0 ||
      (VAR_0[VAR_2].jwk_crv &&
       FUNC_0(VAR_1, VAR_0[VAR_2].jwk_crv) == 0))
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
