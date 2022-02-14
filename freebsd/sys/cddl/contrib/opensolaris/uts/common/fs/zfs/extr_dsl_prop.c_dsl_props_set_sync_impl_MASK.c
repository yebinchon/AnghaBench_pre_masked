
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_source_t ;
typedef char const uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int intval ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char const*,int ,int,int,char const*,int *) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 char* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;

void
FUNC_10(dsl_dataset_t *VAR_5, zprop_source_t VAR_6,
    nvlist_t *VAR_7, dmu_tx_t *VAR_8)
{
 nvpair_t *VAR_9 = ((void*)0);

 while ((VAR_9 = FUNC_5(VAR_7, VAR_9)) != ((void*)0)) {
  nvpair_t *VAR_10 = VAR_9;
  const char *VAR_11 = FUNC_6(VAR_10);

  if (FUNC_7(VAR_10) == VAR_1) {







   nvlist_t *VAR_12 = FUNC_2(VAR_10);
   VAR_10 = FUNC_1(VAR_12, VAR_4);
  }

  if (FUNC_7(VAR_10) == VAR_2) {
   const char *VAR_13 = FUNC_3(VAR_10);
   FUNC_0(VAR_5, VAR_11,
       VAR_6, 1, FUNC_9(VAR_13) + 1, VAR_13, VAR_8);
  } else if (FUNC_7(VAR_10) == VAR_3) {
   uint64_t VAR_14 = FUNC_4(VAR_10);
   FUNC_0(VAR_5, VAR_11,
       VAR_6, sizeof (VAR_14), 1, &VAR_14, VAR_8);
  } else if (FUNC_7(VAR_10) == VAR_0) {
   FUNC_0(VAR_5, VAR_11,
       VAR_6, 0, 0, ((void*)0), VAR_8);
  } else {
   FUNC_8("invalid nvpair type");
  }
 }
}
