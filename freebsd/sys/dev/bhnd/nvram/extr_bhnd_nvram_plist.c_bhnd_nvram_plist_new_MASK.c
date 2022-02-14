
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; int * names; int entries; scalar_t__ num_entries; } ;
typedef TYPE_1__ bhnd_nvram_plist ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int) ;
 size_t FUNC_3 (int *) ;

bhnd_nvram_plist *
FUNC_4(void)
{
 bhnd_nvram_plist *VAR_0;

 VAR_0 = FUNC_2(1, sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  return ((void*)0);


 VAR_0->refs = 1;


 VAR_0->num_entries = 0;
 FUNC_1(&VAR_0->entries);


 for (size_t VAR_1 = 0; VAR_1 < FUNC_3(VAR_0->names); VAR_1++)
  FUNC_0(&VAR_0->names[VAR_1]);

 return (VAR_0);
}
