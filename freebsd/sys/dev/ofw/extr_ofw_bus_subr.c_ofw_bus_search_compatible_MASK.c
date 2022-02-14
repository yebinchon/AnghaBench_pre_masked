
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {int * ocd_str; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int *) ;

const struct ofw_compat_data *
FUNC_1(device_t VAR_0, const struct ofw_compat_data *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 for (; VAR_1->ocd_str != ((void*)0); ++VAR_1) {
  if (FUNC_0(VAR_0, VAR_1->ocd_str))
   break;
 }

 return (VAR_1);
}
