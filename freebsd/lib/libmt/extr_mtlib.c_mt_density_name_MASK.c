
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct densities {int dens; char const* name; } ;


 struct densities* VAR_0 ;

const char *
FUNC_0(int VAR_1)
{
 struct densities *VAR_2;


 if (VAR_1 == 0)
  return ("default");
 if (VAR_1 == 0x7f)
  return ("same");

 for (VAR_2 = VAR_0; VAR_2->dens != 0; VAR_2++)
  if (VAR_2->dens == VAR_1)
   break;
 if (VAR_2->dens == 0)
  return ("UNKNOWN");
 return (VAR_2->name);
}
