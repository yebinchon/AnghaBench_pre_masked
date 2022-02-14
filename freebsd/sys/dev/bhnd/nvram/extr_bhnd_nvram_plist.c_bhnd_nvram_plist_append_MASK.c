
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_11__ {int name; } ;
typedef TYPE_1__ bhnd_nvram_prop ;
typedef int bhnd_nvram_plist_entry_list ;
struct TYPE_12__ {int prop; } ;
typedef TYPE_2__ bhnd_nvram_plist_entry ;
struct TYPE_13__ {scalar_t__ num_entries; int * names; int entries; } ;
typedef TYPE_3__ bhnd_nvram_plist ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t FUNC_5 (int ,int ) ;
 size_t FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_7(bhnd_nvram_plist *VAR_6, bhnd_nvram_prop *VAR_7)
{
 bhnd_nvram_plist_entry_list *VAR_8;
 bhnd_nvram_plist_entry *VAR_9;
 uint32_t VAR_10;

 if (FUNC_3(VAR_6, VAR_7->name))
  return (VAR_0);


 if (VAR_6->num_entries == VAR_3)
  return (VAR_1);


 VAR_9 = FUNC_2(sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_9->prop = FUNC_4(VAR_7);


 FUNC_1(&VAR_6->entries, VAR_9, VAR_5);


 VAR_10 = FUNC_5(VAR_7->name, VAR_2);
 VAR_8 = &VAR_6->names[VAR_10 % FUNC_6(VAR_6->names)];
 FUNC_0(VAR_8, VAR_9, VAR_4);


 VAR_6->num_entries++;

 return (0);
}
