
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_bookmark_phys_t ;
typedef int nvpair_t ;
struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_6__ {int dbda_errors; int dbda_success; int dbda_bmarks; } ;
typedef TYPE_2__ dsl_bookmark_destroy_arg_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int **,int ,char**) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(void *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_bookmark_destroy_arg_t *VAR_6 = VAR_4;
 dsl_pool_t *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = 0;

 FUNC_0(FUNC_8(VAR_6->dbda_success));
 FUNC_0(FUNC_8(VAR_6->dbda_errors));

 if (!FUNC_11(VAR_7->dp_spa, VAR_3))
  return (0);

 for (nvpair_t *VAR_9 = FUNC_9(VAR_6->dbda_bmarks, ((void*)0));
     VAR_9 != ((void*)0); VAR_9 = FUNC_9(VAR_6->dbda_bmarks, VAR_9)) {
  const char *VAR_10 = FUNC_10(VAR_9);
  dsl_dataset_t *VAR_11;
  zfs_bookmark_phys_t VAR_12;
  int VAR_13;
  char *VAR_14;

  VAR_13 = FUNC_3(VAR_7, VAR_10, &VAR_11,
      VAR_2, &VAR_14);
  if (VAR_13 == VAR_0) {

   continue;
  }
  if (VAR_13 == 0) {
   VAR_13 = FUNC_4(VAR_11, VAR_14, &VAR_12);
   FUNC_5(VAR_11, VAR_2);
   if (VAR_13 == VAR_1) {




    continue;
   }
  }
  if (VAR_13 == 0) {
   if (FUNC_1(VAR_5)) {
    FUNC_6(VAR_6->dbda_success,
        VAR_10);
   }
  } else {
   FUNC_7(VAR_6->dbda_errors, VAR_10, VAR_13);
   VAR_8 = VAR_13;
  }
 }
 return (VAR_8);
}
