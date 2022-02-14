
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spa_feat_enabled_txg_obj; int spa_feat_desc_obj; int spa_feat_for_write_obj; int spa_feat_for_read_obj; int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int ,TYPE_1__**) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, char **VAR_5)
{
 spa_t *VAR_6;
 objset_t *VAR_7;
 char *VAR_8;

 VAR_4--;
 VAR_5++;

 if (VAR_4 < 1) {
  (void) FUNC_2(VAR_3, "error: missing pool name\n");
  FUNC_5();
 }
 VAR_8 = VAR_5[0];

 FUNC_6(VAR_8, VAR_0, VAR_1, &VAR_6);
 VAR_7 = VAR_6->spa_meta_objset;

 FUNC_1(VAR_7, VAR_6->spa_feat_for_read_obj, "for_read");
 FUNC_1(VAR_7, VAR_6->spa_feat_for_write_obj, "for_write");
 FUNC_1(VAR_7, VAR_6->spa_feat_desc_obj, "descriptions");
 if (FUNC_4(VAR_6, VAR_2)) {
  FUNC_1(VAR_7, VAR_6->spa_feat_enabled_txg_obj, "enabled_txg");
 }
 FUNC_0(VAR_6);

 FUNC_3(VAR_6, VAR_1);
}
