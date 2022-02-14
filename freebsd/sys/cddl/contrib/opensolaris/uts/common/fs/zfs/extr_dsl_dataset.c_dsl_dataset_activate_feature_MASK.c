
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zero ;
typedef int uint64_t ;
typedef int spa_t ;
typedef size_t spa_feature_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {int * dp_meta_objset; int * dp_spa; } ;
struct TYPE_3__ {int fi_flags; int fi_guid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int *,int ,int ,int,int,int *,int *) ;

__attribute__((used)) static void
FUNC_6(uint64_t VAR_3, spa_feature_t VAR_4, dmu_tx_t *VAR_5)
{
 spa_t *VAR_6 = FUNC_3(VAR_5)->dp_spa;
 objset_t *VAR_7 = FUNC_3(VAR_5)->dp_meta_objset;
 uint64_t VAR_8 = 0;

 FUNC_0(VAR_2[VAR_4].fi_flags & VAR_1);

 FUNC_4(VAR_6, VAR_4, VAR_5);
 FUNC_2(VAR_7, VAR_3, VAR_0, VAR_5);

 FUNC_1(FUNC_5(VAR_7, VAR_3, VAR_2[VAR_4].fi_guid,
     sizeof (VAR_8), 1, &VAR_8, VAR_5));
}
