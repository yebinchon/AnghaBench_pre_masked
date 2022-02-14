
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_curve_params {scalar_t__ name; } ;
typedef int ASN1_OBJECT ;


 scalar_t__ FUNC_0 (int const*,int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 struct dpp_curve_params const* VAR_0 ;

__attribute__((used)) static const struct dpp_curve_params *
FUNC_2(const ASN1_OBJECT *VAR_1)
{
 ASN1_OBJECT *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].name; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0[VAR_3].name, 0);
  if (VAR_2 && FUNC_0(VAR_1, VAR_2) == 0)
   return &VAR_0[VAR_3];
 }
 return ((void*)0);
}
