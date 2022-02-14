
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(zfs_cmd_t *VAR_2)
{
 spa_t *VAR_3;
 char *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2)) == ((void*)0))
  return;

 if (FUNC_4(VAR_2->zc_name, &VAR_3, VAR_0) == 0) {
  if (FUNC_5(VAR_3) >= VAR_1)
   (void) FUNC_3(VAR_3, VAR_4);
  FUNC_2(VAR_3, VAR_0);
 }
 FUNC_0(VAR_4);
}
