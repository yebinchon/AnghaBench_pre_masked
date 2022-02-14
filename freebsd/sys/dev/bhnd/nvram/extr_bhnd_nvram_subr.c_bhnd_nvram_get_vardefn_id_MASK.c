
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_vardefn {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct bhnd_nvram_vardefn const* VAR_1 ;

size_t
FUNC_1(const struct bhnd_nvram_vardefn *VAR_2)
{
 FUNC_0(
     VAR_2 >= VAR_1 &&
     VAR_2 <= &VAR_1[VAR_0-1],
     ("invalid variable definition pointer %p", VAR_2));

 return (VAR_2 - VAR_1);
}
