
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int recvname ;
struct TYPE_9__ {TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_8__ {int dd_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int ,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 char* FUNC_3 (TYPE_2__*) ;
 char* VAR_2 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

char *
FUNC_6(dsl_dataset_t *VAR_3)
{
 char VAR_4[VAR_1 + 6];
 dsl_dataset_t *VAR_5;
 FUNC_1(VAR_3, VAR_4);
 if (FUNC_5(VAR_4, "/", sizeof (VAR_4)) <
     sizeof (VAR_4) &&
     FUNC_5(VAR_4, VAR_2, sizeof (VAR_4)) <
     sizeof (VAR_4) &&
     FUNC_0(VAR_3->ds_dir->dd_pool, VAR_4, VAR_0,
     &VAR_5) == 0) {
  char *VAR_6 = FUNC_3(VAR_5);
  FUNC_2(VAR_5, VAR_0);
  return (VAR_6);
 }
 return (FUNC_4(""));
}
