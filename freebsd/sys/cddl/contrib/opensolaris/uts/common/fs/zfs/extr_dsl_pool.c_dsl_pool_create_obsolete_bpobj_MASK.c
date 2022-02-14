
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int dp_spa; int dp_meta_objset; int dp_obsolete_bpobj; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int,int,int *,int *) ;

void
FUNC_7(dsl_pool_t *VAR_5, dmu_tx_t *VAR_6)
{
 uint64_t VAR_7;




 FUNC_0(FUNC_5(VAR_5->dp_spa, VAR_2));

 VAR_7 = FUNC_2(VAR_5->dp_meta_objset, VAR_4, VAR_6);
 FUNC_1(FUNC_3(&VAR_5->dp_obsolete_bpobj, VAR_5->dp_meta_objset, VAR_7));
 FUNC_1(FUNC_6(VAR_5->dp_meta_objset, VAR_0,
     VAR_1, sizeof (uint64_t), 1, &VAR_7, VAR_6));
 FUNC_4(VAR_5->dp_spa, VAR_3, VAR_6);
}
