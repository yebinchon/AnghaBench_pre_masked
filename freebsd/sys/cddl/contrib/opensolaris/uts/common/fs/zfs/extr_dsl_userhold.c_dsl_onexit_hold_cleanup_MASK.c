
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * zhca_holds; int zhca_spa_load_guid; int zhca_spaname; } ;
typedef TYPE_1__ zfs_hold_cleanup_arg_t ;
typedef int spa_t ;
typedef int nvlist_t ;
typedef scalar_t__ minor_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (scalar_t__,int ,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_9(spa_t *VAR_2, nvlist_t *VAR_3, minor_t VAR_4)
{
 zfs_hold_cleanup_arg_t *VAR_5;

 if (VAR_4 == 0 || FUNC_4(VAR_3)) {
  FUNC_2(VAR_3);
  return;
 }

 FUNC_0(VAR_2 != ((void*)0));
 VAR_5 = FUNC_3(sizeof (*VAR_5), VAR_0);

 (void) FUNC_7(VAR_5->zhca_spaname, FUNC_6(VAR_2),
     sizeof (VAR_5->zhca_spaname));
 VAR_5->zhca_spa_load_guid = FUNC_5(VAR_2);
 VAR_5->zhca_holds = VAR_3;
 FUNC_1(FUNC_8(VAR_4,
     VAR_1, VAR_5, ((void*)0)));
}
