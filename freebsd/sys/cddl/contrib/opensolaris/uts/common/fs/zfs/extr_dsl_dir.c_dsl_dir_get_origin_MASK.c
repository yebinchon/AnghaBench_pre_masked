
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int dsl_dataset_t ;
struct TYPE_6__ {int dd_origin_obj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;

void
FUNC_5(dsl_dir_t *VAR_1, char *VAR_2)
{
 dsl_dataset_t *VAR_3;
 FUNC_0(FUNC_1(VAR_1->dd_pool,
     FUNC_4(VAR_1)->dd_origin_obj, VAR_0, &VAR_3));

 FUNC_2(VAR_3, VAR_2);

 FUNC_3(VAR_3, VAR_0);
}
