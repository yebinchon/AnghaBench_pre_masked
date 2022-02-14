
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int name; } ;
typedef TYPE_1__ bhnd_nvram_prop ;
struct TYPE_13__ {TYPE_1__* prop; } ;
typedef TYPE_2__ bhnd_nvram_plist_entry ;
struct TYPE_14__ {int entries; } ;
typedef TYPE_3__ bhnd_nvram_plist ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_0 ;

bhnd_nvram_prop *
FUNC_3(bhnd_nvram_plist *VAR_1, bhnd_nvram_prop *VAR_2)
{
 bhnd_nvram_plist_entry *VAR_3;

 if (VAR_2 == ((void*)0)) {
  if ((VAR_3 = FUNC_0(&VAR_1->entries)) == ((void*)0))
   return (((void*)0));

  return (VAR_3->prop);
 }


 if ((VAR_3 = FUNC_2(VAR_1, VAR_2->name)) == ((void*)0))
  return (((void*)0));


 if (VAR_3->prop != VAR_2)
  return (((void*)0));


 if ((VAR_3 = FUNC_1(VAR_3, VAR_0)) == ((void*)0))
  return (((void*)0));

 return (VAR_3->prop);
}
