
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_9__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {int (* ddura_holdfunc ) (TYPE_1__*,char*,int ,int **) ;void* ddura_chkholds; void* ddura_todelete; int * ddura_errlist; int * ddura_holds; } ;
typedef TYPE_2__ dsl_dataset_user_release_arg_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int **) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,int ,int ,TYPE_2__*,int ,int ) ;
 void* FUNC_7 () ;
 int FUNC_8 (void*) ;
 int * FUNC_9 (int *,int *) ;
 char* FUNC_10 (int *) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(nvlist_t *VAR_5, nvlist_t *VAR_6,
    dsl_pool_t *VAR_7)
{
 dsl_dataset_user_release_arg_t VAR_8;
 nvpair_t *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(VAR_5, ((void*)0));
 if (VAR_9 == ((void*)0))
  return (0);





 if (VAR_7 != ((void*)0)) {

  VAR_8.ddura_holdfunc = FUNC_1;
  VAR_10 = FUNC_11(VAR_7->dp_spa);
 } else {

  VAR_8.ddura_holdfunc = FUNC_0;
  VAR_10 = FUNC_10(VAR_9);






 }

 VAR_8.ddura_holds = VAR_5;
 VAR_8.ddura_errlist = VAR_6;
 VAR_8.ddura_todelete = FUNC_7();
 VAR_8.ddura_chkholds = FUNC_7();

 VAR_11 = FUNC_6(VAR_10, VAR_3,
     VAR_4, &VAR_8, 0,
     VAR_2);
 FUNC_8(VAR_8.ddura_todelete);
 FUNC_8(VAR_8.ddura_chkholds);

 return (VAR_11);
}
