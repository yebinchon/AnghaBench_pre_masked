
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int spa_config_list; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_8__ {int * scd_path; } ;
typedef TYPE_2__ spa_config_dirent_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 char* VAR_3 ;
 void* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(spa_t *VAR_4, nvlist_t *VAR_5, boolean_t VAR_6)
{
 char *VAR_7;
 spa_config_dirent_t *VAR_8;

 if (FUNC_2(VAR_5, FUNC_6(VAR_2),
     &VAR_7) != 0)
  return;

 VAR_8 = FUNC_0(sizeof (spa_config_dirent_t),
     VAR_0);

 if (VAR_7[0] == '\0')
  VAR_8->scd_path = FUNC_4(VAR_3);
 else if (FUNC_5(VAR_7, "none") == 0)
  VAR_8->scd_path = ((void*)0);
 else
  VAR_8->scd_path = FUNC_4(VAR_7);

 FUNC_1(&VAR_4->spa_config_list, VAR_8);
 if (VAR_6)
  FUNC_3(VAR_4, VAR_1);
}
