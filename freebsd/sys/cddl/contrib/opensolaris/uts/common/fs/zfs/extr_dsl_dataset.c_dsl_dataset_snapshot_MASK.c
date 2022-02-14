
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_3__ {int ddsa_cr; int * ddsa_errors; int * ddsa_props; int * ddsa_snaps; } ;
typedef TYPE_1__ dsl_dataset_snapshot_arg_t ;
typedef int boolean_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_3 (int *,char*,uintptr_t) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char*,int **,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (char*,void**) ;
 int FUNC_17 (char*) ;

int
FUNC_18(nvlist_t *VAR_7, nvlist_t *VAR_8, nvlist_t *VAR_9)
{
 dsl_dataset_snapshot_arg_t VAR_10;
 nvpair_t *VAR_11;
 boolean_t VAR_12;
 int VAR_13;
 spa_t *VAR_14;
 char *VAR_15;
 nvlist_t *VAR_16 = ((void*)0);

 VAR_11 = FUNC_8(VAR_7, ((void*)0));
 if (VAR_11 == ((void*)0))
  return (0);
 VAR_15 = FUNC_9(VAR_11);

 VAR_13 = FUNC_11(VAR_15, &VAR_14, VAR_1);
 if (VAR_13 != 0)
  return (VAR_13);
 VAR_12 = (FUNC_12(VAR_14) < VAR_2);
 FUNC_10(VAR_14, VAR_1);

 if (VAR_12) {
  VAR_16 = FUNC_4();
  for (VAR_11 = FUNC_8(VAR_7, ((void*)0)); VAR_11 != ((void*)0);
      VAR_11 = FUNC_8(VAR_7, VAR_11)) {
   char VAR_17[VAR_3];
   char *VAR_18 = FUNC_9(VAR_11);
   char *VAR_19;
   void *VAR_20;

   VAR_19 = FUNC_13(VAR_18, '@');
   if (VAR_19 == ((void*)0)) {
    VAR_13 = FUNC_1(VAR_0);
    break;
   }
   (void) FUNC_14(VAR_17, VAR_18, VAR_19 - VAR_18 + 1);

   VAR_13 = FUNC_16(VAR_17, &VAR_20);
   if (VAR_13 != 0)
    break;
   FUNC_3(VAR_16, VAR_17,
       (uintptr_t)VAR_20);
  }
 }

 VAR_10.ddsa_snaps = VAR_7;
 VAR_10.ddsa_props = VAR_8;
 VAR_10.ddsa_errors = VAR_9;
 VAR_10.ddsa_cr = FUNC_0();

 if (VAR_13 == 0) {
  VAR_13 = FUNC_2(VAR_15, VAR_5,
      VAR_6, &VAR_10,
      FUNC_6(VAR_7) * 3, VAR_4);
 }

 if (VAR_16 != ((void*)0)) {
  for (VAR_11 = FUNC_8(VAR_16, ((void*)0)); VAR_11 != ((void*)0);
      VAR_11 = FUNC_8(VAR_16, VAR_11)) {
   FUNC_15((void *)(uintptr_t)
       FUNC_7(VAR_11));
  }
  FUNC_5(VAR_16);
 }
 return (VAR_13);
}
