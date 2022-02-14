
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_3__ {int dp_meta_rootbp; int dp_spa; int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(dsl_pool_t *VAR_1, dmu_tx_t *VAR_2)
{
 zio_t *VAR_3 = FUNC_4(VAR_1->dp_spa, ((void*)0), ((void*)0), VAR_0);
 FUNC_1(VAR_1->dp_meta_objset, VAR_3, VAR_2);
 FUNC_0(FUNC_5(VAR_3));
 FUNC_2(&VAR_1->dp_meta_rootbp, "meta objset rootbp is %s", "");
 FUNC_3(VAR_1->dp_spa, &VAR_1->dp_meta_rootbp);
}
