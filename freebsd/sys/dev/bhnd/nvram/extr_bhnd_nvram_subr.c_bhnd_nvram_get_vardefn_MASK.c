
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_vardefn {int dummy; } ;


 size_t VAR_0 ;
 struct bhnd_nvram_vardefn const* VAR_1 ;

const struct bhnd_nvram_vardefn *
FUNC_0(size_t VAR_2)
{
 if (VAR_2 >= VAR_0)
  return (((void*)0));

 return (&VAR_1[VAR_2]);
}
