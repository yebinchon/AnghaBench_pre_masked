
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {int * ocd_str; } ;
typedef int phandle_t ;


 int FUNC_0 (char*) ;
 struct ofw_compat_data* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static const struct ofw_compat_data *
FUNC_2(void)
{
 const struct ofw_compat_data *VAR_1;
 phandle_t VAR_2;

 VAR_2 = FUNC_0("/");
 for (VAR_1 = VAR_0; VAR_1->ocd_str != ((void*)0); VAR_1++)
  if (FUNC_1(VAR_2, VAR_1->ocd_str))
   break;

 return (VAR_1);
}
