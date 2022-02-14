
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zn_zap; int zn_hash; } ;
typedef TYPE_1__ zap_name_t ;
typedef int zap_leaf_t ;
typedef int zap_entry_handle_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(zap_name_t *VAR_1, dmu_tx_t *VAR_2)
{
 zap_leaf_t *VAR_3;
 int VAR_4;
 zap_entry_handle_t VAR_5;

 VAR_4 = FUNC_0(VAR_1->zn_zap, VAR_1->zn_hash, VAR_2, VAR_0, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_3(VAR_3, VAR_1, &VAR_5);
 if (VAR_4 == 0) {
  FUNC_1(&VAR_5);
  FUNC_2(VAR_1->zn_zap, -1, VAR_2);
 }
 FUNC_4(VAR_3);
 return (VAR_4);
}
