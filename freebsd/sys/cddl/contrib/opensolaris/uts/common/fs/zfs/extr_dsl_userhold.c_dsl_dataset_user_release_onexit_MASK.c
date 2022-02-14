
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zhca_spa_load_guid; int zhca_holds; int zhca_spaname; } ;
typedef TYPE_1__ zfs_hold_cleanup_arg_t ;
typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int **,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1)
{
 zfs_hold_cleanup_arg_t *VAR_2 = VAR_1;
 spa_t *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2->zhca_spaname, &VAR_3, VAR_0);
 if (VAR_4 != 0) {
  FUNC_7("couldn't release holds on pool=%s "
      "because pool is no longer loaded",
      VAR_2->zhca_spaname);
  return;
 }
 if (FUNC_5(VAR_3) != VAR_2->zhca_spa_load_guid) {
  FUNC_7("couldn't release holds on pool=%s "
      "because pool is no longer loaded (guid doesn't match)",
      VAR_2->zhca_spaname);
  FUNC_3(VAR_3, VAR_0);
  return;
 }

 (void) FUNC_0(FUNC_4(VAR_3), VAR_2->zhca_holds);
 FUNC_1(VAR_2->zhca_holds);
 FUNC_2(VAR_2, sizeof (zfs_hold_cleanup_arg_t));
 FUNC_3(VAR_3, VAR_0);
}
