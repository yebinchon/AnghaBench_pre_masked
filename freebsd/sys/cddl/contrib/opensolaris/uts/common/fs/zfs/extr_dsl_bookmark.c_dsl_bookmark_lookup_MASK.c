
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zbm_creation_txg; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int **,int ,char**) ;
 int FUNC_2 (int *,char*,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(dsl_pool_t *VAR_2, const char *VAR_3,
    dsl_dataset_t *VAR_4, zfs_bookmark_phys_t *VAR_5)
{
 char *VAR_6;
 dsl_dataset_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_7, VAR_1, &VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_5);
 if (VAR_8 == 0 && VAR_4 != ((void*)0)) {
  if (!FUNC_3(VAR_4, VAR_7, VAR_5->zbm_creation_txg))
   VAR_8 = FUNC_0(VAR_0);
 }
 FUNC_4(VAR_7, VAR_1);
 return (VAR_8);
}
