
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dsl_pool_t ;
typedef int dsl_dir_t ;
typedef int dmu_tx_t ;
struct TYPE_2__ {int doca_cred; int doca_name; } ;
typedef TYPE_1__ dmu_objset_create_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int **,char const**) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int ,int *,int ) ;
 int * FUNC_6 (int ,char) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_6, dmu_tx_t *VAR_7)
{
 dmu_objset_create_arg_t *VAR_8 = VAR_6;
 dsl_pool_t *VAR_9 = FUNC_2(VAR_7);
 dsl_dir_t *VAR_10;
 const char *VAR_11;
 int VAR_12;

 if (FUNC_6(VAR_8->doca_name, '@') != ((void*)0))
  return (FUNC_0(VAR_1));

 if (FUNC_7(VAR_8->doca_name) >= VAR_4)
  return (FUNC_0(VAR_2));

 if (FUNC_1(VAR_8->doca_name) != 0)
  return (FUNC_0(VAR_2));

 VAR_12 = FUNC_3(VAR_9, VAR_8->doca_name, VAR_3, &VAR_10, &VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_10, VAR_3);
  return (FUNC_0(VAR_0));
 }
 VAR_12 = FUNC_5(VAR_10, 1, VAR_5, ((void*)0),
     VAR_8->doca_cred);
 FUNC_4(VAR_10, VAR_3);

 return (VAR_12);
}
