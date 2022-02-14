
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int nm ;
typedef int dsl_pool_t ;
struct TYPE_6__ {int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_7__ {int * ddsa_errors; int * ddsa_snaps; int ddsa_cr; } ;
typedef TYPE_2__ dsl_dataset_snapshot_arg_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int *,int ,int ,int *) ;
 int FUNC_7 (int ,scalar_t__,int ,int *,int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,int) ;
 int * FUNC_10 () ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,char*,scalar_t__*) ;
 int * FUNC_14 (int *,int *) ;
 char* FUNC_15 (int *) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (char*,char) ;

int
FUNC_20(void *VAR_7, dmu_tx_t *VAR_8)
{
 dsl_dataset_snapshot_arg_t *VAR_9 = VAR_7;
 dsl_pool_t *VAR_10 = FUNC_3(VAR_8);
 nvpair_t *VAR_11;
 int VAR_12 = 0;
 if (FUNC_2(VAR_8)) {
  nvlist_t *VAR_13 = ((void*)0);
  VAR_13 = FUNC_10();


  for (VAR_11 = FUNC_14(VAR_9->ddsa_snaps, ((void*)0));
      VAR_11 != ((void*)0);
      VAR_11 = FUNC_14(VAR_9->ddsa_snaps, VAR_11)) {
   char *VAR_14;
   uint64_t VAR_15;
   char VAR_16[VAR_4];

   (void) FUNC_17(VAR_16, FUNC_15(VAR_11), sizeof (VAR_16));
   VAR_14 = FUNC_16(VAR_16, '@');
   if (VAR_14 == ((void*)0))
    continue;
   *VAR_14 = '\0';

   do {
    if (FUNC_13(VAR_13, VAR_16,
        &VAR_15) == 0) {

     FUNC_9(VAR_13, VAR_16,
         VAR_15 + 1);
    } else {

     FUNC_9(VAR_13, VAR_16, 1);
    }

    VAR_14 = FUNC_19(VAR_16, '/');
    if (VAR_14 != ((void*)0))
     *VAR_14 = '\0';
   } while (VAR_14 != ((void*)0));
  }


  for (VAR_11 = FUNC_14(VAR_13, ((void*)0));
      VAR_11 != ((void*)0); VAR_11 = FUNC_14(VAR_13, VAR_11)) {
   int VAR_17 = 0;
   char *VAR_18;
   uint64_t VAR_19 = 0;
   dsl_dataset_t *VAR_20;

   VAR_18 = FUNC_15(VAR_11);
   VAR_19 = FUNC_11(VAR_11);
   FUNC_0(VAR_19 > 0);

   VAR_17 = FUNC_4(VAR_10, VAR_18, VAR_3, &VAR_20);
   if (VAR_17 == 0) {
    VAR_17 = FUNC_7(VAR_20->ds_dir, VAR_19,
        VAR_6, ((void*)0),
        VAR_9->ddsa_cr);
    FUNC_5(VAR_20, VAR_3);
   }

   if (VAR_17 != 0) {
    if (VAR_9->ddsa_errors != ((void*)0))
     FUNC_8(VAR_9->ddsa_errors,
         VAR_18, VAR_17);
    VAR_12 = VAR_17;

    break;
   }
  }
  FUNC_12(VAR_13);
 }

 for (VAR_11 = FUNC_14(VAR_9->ddsa_snaps, ((void*)0));
     VAR_11 != ((void*)0); VAR_11 = FUNC_14(VAR_9->ddsa_snaps, VAR_11)) {
  int VAR_21 = 0;
  dsl_dataset_t *VAR_22;
  char *VAR_23, *VAR_24;
  char VAR_25[VAR_5];

  VAR_23 = FUNC_15(VAR_11);
  if (FUNC_18(VAR_23) >= VAR_5)
   VAR_21 = FUNC_1(VAR_2);
  if (VAR_21 == 0) {
   VAR_24 = FUNC_16(VAR_23, '@');
   if (VAR_24 == ((void*)0))
    VAR_21 = FUNC_1(VAR_1);
   if (VAR_21 == 0)
    (void) FUNC_17(VAR_25, VAR_23, VAR_24 - VAR_23 + 1);
  }
  if (VAR_21 == 0)
   VAR_21 = FUNC_4(VAR_10, VAR_25, VAR_3, &VAR_22);
  if (VAR_21 == 0) {

   VAR_21 = FUNC_6(VAR_22,
       VAR_24 + 1, VAR_8, VAR_0, 0, ((void*)0));
   FUNC_5(VAR_22, VAR_3);
  }

  if (VAR_21 != 0) {
   if (VAR_9->ddsa_errors != ((void*)0)) {
    FUNC_8(VAR_9->ddsa_errors,
        VAR_23, VAR_21);
   }
   VAR_12 = VAR_21;
  }
 }

 return (VAR_12);
}
