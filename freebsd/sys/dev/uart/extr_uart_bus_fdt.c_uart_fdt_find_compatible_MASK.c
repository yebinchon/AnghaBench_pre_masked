
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {int * ocd_str; } ;
typedef int phandle_t ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static const struct ofw_compat_data *
FUNC_1(phandle_t VAR_0, const struct ofw_compat_data *VAR_1)
{
 const struct ofw_compat_data *VAR_2;

 for (VAR_2 = VAR_1; VAR_2->ocd_str != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0, VAR_2->ocd_str))
   return (VAR_2);
 }
 return (((void*)0));
}
