
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
typedef TYPE_1__ bhnd_nvram_prop ;
struct TYPE_8__ {int prop; } ;
typedef TYPE_2__ bhnd_nvram_plist_entry ;
typedef int bhnd_nvram_plist ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(bhnd_nvram_plist *VAR_0, bhnd_nvram_prop *VAR_1)
{
 bhnd_nvram_plist_entry *VAR_2;


 VAR_2 = FUNC_1(VAR_0, VAR_1->name);
 if (VAR_2 == ((void*)0)) {

  return (FUNC_0(VAR_0, VAR_1));
 }


 FUNC_2(VAR_2->prop);
 VAR_2->prop = FUNC_3(VAR_1);

 return (0);
}
