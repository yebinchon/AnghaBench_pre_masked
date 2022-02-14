
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int spa_claiming; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_11__ {int dp_root_dir_obj; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(spa_t *VAR_5)
{
 dmu_tx_t *VAR_6;
 dsl_pool_t *VAR_7 = FUNC_4(VAR_5);
 VAR_5->spa_claiming = VAR_1;

 VAR_6 = FUNC_2(VAR_7, FUNC_3(VAR_5));
 (void) FUNC_0(VAR_7, VAR_7->dp_root_dir_obj,
     VAR_4, VAR_6, VAR_2);
 FUNC_1(VAR_6);

 VAR_5->spa_claiming = VAR_0;

 FUNC_5(VAR_5, VAR_3);
}
