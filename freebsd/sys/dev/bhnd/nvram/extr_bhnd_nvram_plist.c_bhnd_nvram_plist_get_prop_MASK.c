
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bhnd_nvram_prop ;
struct TYPE_3__ {int * prop; } ;
typedef TYPE_1__ bhnd_nvram_plist_entry ;
typedef int bhnd_nvram_plist ;


 TYPE_1__* FUNC_0 (int *,char const*) ;

bhnd_nvram_prop *
FUNC_1(bhnd_nvram_plist *VAR_0, const char *VAR_1)
{
 bhnd_nvram_plist_entry *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));

 return (VAR_2->prop);
}
