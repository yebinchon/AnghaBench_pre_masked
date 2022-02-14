
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(bhnd_nvram_plist *VAR_1, const char *VAR_2,
    bhnd_nvram_val *VAR_3)
{
 bhnd_nvram_prop *VAR_4;
 int VAR_5;


 if ((VAR_4 = FUNC_1(VAR_2, VAR_3)) == ((void*)0))
  return (VAR_0);


 VAR_5 = FUNC_0(VAR_1, VAR_4);
 FUNC_2(VAR_4);

 return (VAR_5);
}
