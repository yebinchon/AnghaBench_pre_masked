
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int obj ;
struct TYPE_6__ {int dp_root_dir; int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dir_t ;
struct TYPE_7__ {int dd_child_dir_zapobj; } ;


 int FUNC_0 (TYPE_1__*,int ,char const*,TYPE_1__*,int **) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char const*,int,int,int *) ;

int
FUNC_3(dsl_pool_t *VAR_0, const char *VAR_1, dsl_dir_t **VAR_2)
{
 uint64_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0->dp_meta_objset,
     FUNC_1(VAR_0->dp_root_dir)->dd_child_dir_zapobj,
     VAR_1, sizeof (VAR_3), 1, &VAR_3);
 if (VAR_4)
  return (VAR_4);

 return (FUNC_0(VAR_0, VAR_3, VAR_1, VAR_0, VAR_2));
}
