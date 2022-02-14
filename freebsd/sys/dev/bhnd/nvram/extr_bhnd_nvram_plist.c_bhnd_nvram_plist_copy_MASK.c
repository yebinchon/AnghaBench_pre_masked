
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

bhnd_nvram_plist *
FUNC_5(bhnd_nvram_plist *VAR_1)
{
 bhnd_nvram_plist *VAR_2;
 bhnd_nvram_prop *VAR_3;
 int VAR_4;


 if ((VAR_2 = FUNC_2()) == ((void*)0))
  return (((void*)0));


 VAR_3 = ((void*)0);
 while ((VAR_3 = FUNC_3(VAR_1, VAR_3)) != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4) {
   if (VAR_4 != VAR_0) {
    FUNC_0("error copying property: %d\n",
        VAR_4);
   }

   FUNC_4(VAR_2);
   return (((void*)0));
  }
 }


 return (VAR_2);
}
