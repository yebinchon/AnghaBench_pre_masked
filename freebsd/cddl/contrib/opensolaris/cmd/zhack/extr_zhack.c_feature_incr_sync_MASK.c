
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fi_guid; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {int * dp_spa; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (int *,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_4 (int *,char*,int *,char*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, dmu_tx_t *VAR_1)
{
 spa_t *VAR_2 = FUNC_1(VAR_1)->dp_spa;
 zfeature_info_t *VAR_3 = VAR_0;
 uint64_t VAR_4;

 FUNC_0(FUNC_2(VAR_2, VAR_3, &VAR_4));
 FUNC_3(VAR_2, VAR_3, VAR_4 + 1, VAR_1);
 FUNC_4(VAR_2, "zhack feature incr", VAR_1,
     "name=%s", VAR_3->fi_guid);
}
