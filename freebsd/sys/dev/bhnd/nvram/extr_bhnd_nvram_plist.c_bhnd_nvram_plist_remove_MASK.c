
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int prop; } ;
typedef TYPE_1__ bhnd_nvram_plist_entry ;
struct TYPE_10__ {scalar_t__ num_entries; int entries; } ;
typedef TYPE_2__ bhnd_nvram_plist ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_6(bhnd_nvram_plist *VAR_2, const char *VAR_3)
{
 bhnd_nvram_plist_entry *VAR_4;


 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return;


 FUNC_2(&VAR_2->entries, VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_0);


 FUNC_5(VAR_4->prop);
 FUNC_3(VAR_4);


 FUNC_0(VAR_2->num_entries > 0, ("entry count over-release"));
 VAR_2->num_entries--;
}
