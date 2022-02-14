
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_8__ {int dn_struct_rwlock; int dn_objset; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {int * drica_tx; int drica_blk_birth; int drica_os; } ;
typedef TYPE_2__ dbuf_remap_impl_callback_arg_t ;
struct TYPE_10__ {int blk_birth; } ;
typedef TYPE_3__ blkptr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(dnode_t *VAR_2, blkptr_t *VAR_3, dmu_tx_t *VAR_4)
{
 blkptr_t VAR_5 = *VAR_3;
 spa_t *VAR_6 = FUNC_1(VAR_2->dn_objset);
 dbuf_remap_impl_callback_arg_t VAR_7;

 FUNC_0(FUNC_2(FUNC_5(VAR_6)));

 VAR_7.drica_os = VAR_2->dn_objset;
 VAR_7.drica_blk_birth = VAR_3->blk_birth;
 VAR_7.drica_tx = VAR_4;
 if (FUNC_6(VAR_6, &VAR_5, VAR_1,
     &VAR_7)) {






  FUNC_3(&VAR_2->dn_struct_rwlock, VAR_0);
  *VAR_3 = VAR_5;
  FUNC_4(&VAR_2->dn_struct_rwlock);
 }
}
