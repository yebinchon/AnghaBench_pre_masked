
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int dsl_pool_t ;
struct TYPE_6__ {int ds_prev; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_7__ {int * ddsa_props; int ddsa_snaps; } ;
typedef TYPE_2__ dsl_dataset_snapshot_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int * FUNC_6 (int ,int *) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char*,int) ;

void
FUNC_10(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_dataset_snapshot_arg_t *VAR_5 = VAR_3;
 dsl_pool_t *VAR_6 = FUNC_1(VAR_4);
 nvpair_t *VAR_7;

 for (VAR_7 = FUNC_6(VAR_5->ddsa_snaps, ((void*)0));
     VAR_7 != ((void*)0); VAR_7 = FUNC_6(VAR_5->ddsa_snaps, VAR_7)) {
  dsl_dataset_t *VAR_8;
  char *VAR_9, *VAR_10;
  char VAR_11[VAR_1];

  VAR_9 = FUNC_7(VAR_7);
  VAR_10 = FUNC_8(VAR_9, '@');
  (void) FUNC_9(VAR_11, VAR_9, VAR_10 - VAR_9 + 1);
  FUNC_0(FUNC_2(VAR_6, VAR_11, VAR_0, &VAR_8));

  FUNC_4(VAR_8, VAR_10 + 1, VAR_4);
  if (VAR_5->ddsa_props != ((void*)0)) {
   FUNC_5(VAR_8->ds_prev,
       VAR_2, VAR_5->ddsa_props, VAR_4);
  }
  FUNC_3(VAR_8, VAR_0);
 }
}
