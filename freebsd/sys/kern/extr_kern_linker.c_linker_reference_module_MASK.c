
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mod_depend {int dummy; } ;
typedef TYPE_1__* modlist_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_7__ {int refs; } ;
struct TYPE_6__ {TYPE_2__* container; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int *,struct mod_depend*,TYPE_2__**) ;
 TYPE_1__* FUNC_1 (char const*,struct mod_depend*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(const char *VAR_1, struct mod_depend *VAR_2,
    linker_file_t *VAR_3)
{
 modlist_t VAR_4;
 int VAR_5;

 FUNC_2(&VAR_0);
 if ((VAR_4 = FUNC_1(VAR_1, VAR_2)) != ((void*)0)) {
  *VAR_3 = VAR_4->container;
  (*VAR_3)->refs++;
  FUNC_3(&VAR_0);
  return (0);
 }

 VAR_5 = FUNC_0(((void*)0), VAR_1, ((void*)0), VAR_2, VAR_3);
 FUNC_3(&VAR_0);
 return (VAR_5);
}
