
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fi_guid; int fi_feature; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ spa_feat_enabled_txg_obj; int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int,int,scalar_t__*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_2, zfeature_info_t *VAR_3, uint64_t *VAR_4)
{
 uint64_t VAR_5 = VAR_2->spa_feat_enabled_txg_obj;

 FUNC_0(FUNC_5(VAR_3->fi_feature,
     VAR_1));

 if (!FUNC_3(VAR_2, VAR_3->fi_feature)) {
  return (FUNC_1(VAR_0));
 }

 FUNC_0(VAR_5 != 0);

 FUNC_2(FUNC_4(VAR_2->spa_meta_objset, VAR_2->spa_feat_enabled_txg_obj,
     VAR_3->fi_guid, sizeof (uint64_t), 1, VAR_4));

 return (0);
}
