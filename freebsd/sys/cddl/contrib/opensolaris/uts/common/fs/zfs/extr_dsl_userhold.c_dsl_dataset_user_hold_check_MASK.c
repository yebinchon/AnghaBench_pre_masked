
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_6__ {scalar_t__ dduha_minor; int dduha_errlist; int dduha_chkholds; int dduha_holds; } ;
typedef TYPE_2__ dsl_dataset_user_hold_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,char*) ;
 int * FUNC_8 (int ,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,char**) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (char*,char) ;

__attribute__((used)) static int
FUNC_13(void *VAR_5, dmu_tx_t *VAR_6)
{
 dsl_dataset_user_hold_arg_t *VAR_7 = VAR_5;
 dsl_pool_t *VAR_8 = FUNC_2(VAR_6);

 if (FUNC_11(VAR_8->dp_spa) < VAR_4)
  return (FUNC_0(VAR_2));

 if (!FUNC_1(VAR_6))
  return (0);

 for (nvpair_t *VAR_9 = FUNC_8(VAR_7->dduha_holds, ((void*)0));
     VAR_9 != ((void*)0); VAR_9 = FUNC_8(VAR_7->dduha_holds, VAR_9)) {
  dsl_dataset_t *VAR_10;
  int VAR_11 = 0;
  char *VAR_12, *VAR_13;


  VAR_13 = FUNC_9(VAR_9);
  if (FUNC_12(VAR_13, '@') == ((void*)0))
   VAR_11 = FUNC_0(VAR_0);

  if (VAR_11 == 0)
   VAR_11 = FUNC_10(VAR_9, &VAR_12);

  if (VAR_11 == 0)
   VAR_11 = FUNC_3(VAR_8, VAR_13, VAR_3, &VAR_10);

  if (VAR_11 == 0) {
   VAR_11 = FUNC_5(VAR_10, VAR_12,
       VAR_7->dduha_minor != 0, VAR_6);
   FUNC_4(VAR_10, VAR_3);
  }

  if (VAR_11 == 0) {
   FUNC_7(VAR_7->dduha_chkholds, VAR_13, VAR_12);
  } else {




   FUNC_6(VAR_7->dduha_errlist, VAR_13, VAR_11);
   if (VAR_11 != VAR_1)
    return (VAR_11);
  }
 }

 return (0);
}
