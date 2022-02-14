
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;


 int * FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *) ;

bhnd_nvram_val *
FUNC_2(bhnd_nvram_plist *VAR_0, const char *VAR_1)
{
 bhnd_nvram_prop *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));

 return (FUNC_1(VAR_2));
}
