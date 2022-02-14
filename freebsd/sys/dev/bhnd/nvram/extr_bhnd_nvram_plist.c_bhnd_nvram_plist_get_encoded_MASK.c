
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_type ;
typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,void*,size_t*,int ) ;

int
FUNC_2(bhnd_nvram_plist *VAR_1, const char *VAR_2,
    void *VAR_3, size_t VAR_4, bhnd_nvram_type VAR_5)
{
 bhnd_nvram_prop *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 return (FUNC_1(VAR_6, VAR_3, &VAR_4, VAR_5));
}
