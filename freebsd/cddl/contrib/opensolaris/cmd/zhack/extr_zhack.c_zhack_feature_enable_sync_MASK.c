
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fi_flags; int fi_guid; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef int spa_t ;
typedef int dmu_tx_t ;
struct TYPE_5__ {int * dp_spa; } ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,char*,int *,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, dmu_tx_t *VAR_1)
{
 spa_t *VAR_2 = FUNC_0(VAR_1)->dp_spa;
 zfeature_info_t *VAR_3 = VAR_0;

 FUNC_1(VAR_2, VAR_3, VAR_1);

 FUNC_2(VAR_2, "zhack enable feature", VAR_1,
     "guid=%s flags=%x",
     VAR_3->fi_guid, VAR_3->fi_flags);
}
