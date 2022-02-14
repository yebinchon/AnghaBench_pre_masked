
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int ,int ,char*,size_t) ;

__attribute__((used)) static void
FUNC_10(zpool_handle_t *VAR_3)
{
 nvlist_t *VAR_4 = ((void*)0);
 nvpair_t *VAR_5;
 char *VAR_6;
 size_t VAR_7 = VAR_0 * 2;

 if (FUNC_8(VAR_3, &VAR_4) != 0) {
  (void) FUNC_5("errors: List of errors unavailable "
      "(insufficient privileges)\n");
  return;
 }

 (void) FUNC_5("errors: Permanent errors have been "
     "detected in the following files:\n\n");

 VAR_6 = FUNC_6(VAR_7);
 VAR_5 = ((void*)0);
 while ((VAR_5 = FUNC_3(VAR_4, VAR_5)) != ((void*)0)) {
  nvlist_t *VAR_8;
  uint64_t VAR_9, VAR_10;

  FUNC_7(FUNC_4(VAR_5, &VAR_8) == 0);
  FUNC_7(FUNC_2(VAR_8, VAR_1,
      &VAR_9) == 0);
  FUNC_7(FUNC_2(VAR_8, VAR_2,
      &VAR_10) == 0);
  FUNC_9(VAR_3, VAR_9, VAR_10, VAR_6, VAR_7);
  (void) FUNC_5("%7s %s\n", "", VAR_6);
 }
 FUNC_0(VAR_6);
 FUNC_1(VAR_4);
}
