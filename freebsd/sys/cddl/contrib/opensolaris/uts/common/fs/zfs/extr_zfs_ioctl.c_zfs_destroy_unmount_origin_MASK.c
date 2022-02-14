
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_3__ {int ds_prev; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7(const char *VAR_2)
{
 int VAR_3;
 objset_t *VAR_4;
 dsl_dataset_t *VAR_5;

 VAR_3 = FUNC_2(VAR_2, VAR_0, &VAR_4);
 if (VAR_3 != 0)
  return;
 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_5(VAR_5->ds_dir) && FUNC_0(VAR_5->ds_prev)) {
  char VAR_6[VAR_1];
  FUNC_4(VAR_5->ds_prev, VAR_6);
  FUNC_3(VAR_4, VAR_0);
  FUNC_6(VAR_6);
 } else {
  FUNC_3(VAR_4, VAR_0);
 }
}
