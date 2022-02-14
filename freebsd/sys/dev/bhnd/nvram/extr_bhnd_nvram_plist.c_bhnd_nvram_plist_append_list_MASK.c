
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;

int
FUNC_2(bhnd_nvram_plist *VAR_0, bhnd_nvram_plist *VAR_1)
{
 bhnd_nvram_prop *VAR_2;
 int VAR_3;

 VAR_2 = ((void*)0);
 while ((VAR_2 = FUNC_1(VAR_1, VAR_2)) != ((void*)0)) {
  if ((VAR_3 = FUNC_0(VAR_0, VAR_2)))
   return (VAR_3);
 }

 return (0);
}
