
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int zpool_boot_label_t ;
typedef size_t uint_t ;
struct TYPE_4__ {int dryrun; } ;
typedef TYPE_1__ splitflags_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,char**) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,int*,int*) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_7 (int *,int ,char**) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char*,int **,int *,TYPE_1__) ;

nvlist_t *
FUNC_11(zpool_handle_t *VAR_5, char *VAR_6, nvlist_t *VAR_7,
    splitflags_t VAR_8, int VAR_9, char **VAR_10)
{
 nvlist_t *VAR_11 = ((void*)0), **VAR_12;
 uint_t VAR_13, VAR_14;




 if (VAR_9 > 0) {
  if ((VAR_11 = FUNC_0(VAR_9, VAR_10)) == ((void*)0)) {
   (void) FUNC_1(VAR_4, "%s", FUNC_2("Unable to build a "
       "pool from the specified devices\n"));
   return (((void*)0));
  }
  FUNC_8(FUNC_6(VAR_11,
      VAR_0, &VAR_12, &VAR_14) == 0);
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   char *VAR_15;
   const char *VAR_16;
   int VAR_17, VAR_18;

   FUNC_8(FUNC_7(VAR_12[VAR_13],
       VAR_1, &VAR_15) == 0);
   if ((VAR_16 = FUNC_3(VAR_15, &VAR_17, &VAR_18)) != ((void*)0)) {
    (void) FUNC_1(VAR_4, FUNC_2("Cannot use "
        "'%s' as a device for splitting\n"), VAR_16);
    FUNC_5(VAR_11);
    return (((void*)0));
   }
  }
 }

 if (FUNC_10(VAR_5, VAR_6, &VAR_11, VAR_7, VAR_8) != 0) {
  FUNC_5(VAR_11);
  return (((void*)0));
 }

 return (VAR_11);
}
