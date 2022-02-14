
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int zfs_type_t ;
typedef int zfs_handle_t ;
typedef int nvlist_t ;
struct TYPE_8__ {void* cb_defer_destroy; char* cb_snapspec; char* cb_snapused; void* cb_nvl; void* cb_batchedsnaps; scalar_t__ cb_error; void* cb_doclones; void* cb_first; void* cb_recurse; int * cb_target; void* cb_dryrun; void* cb_parsable; void* cb_verbose; void* cb_force; int member_0; } ;
typedef TYPE_1__ destroy_cbdata_t ;
typedef int buf ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int,char**,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (char*,char*) ;
 int VAR_9 ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,void*,void*) ;
 char* FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,void*,int (*) (int *,TYPE_1__*),TYPE_1__*) ;
 int FUNC_23 (char*,char*,int) ;
 int * FUNC_24 (int ,char*,int) ;
 int FUNC_25 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_26(int VAR_10, char **VAR_11)
{
 destroy_cbdata_t VAR_12 = { 0 };
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;
 zfs_handle_t *VAR_16 = ((void*)0);
 char *VAR_17, *VAR_18;
 zfs_type_t VAR_19 = VAR_2;


 while ((VAR_15 = FUNC_8(VAR_10, VAR_11, "vpndfrR")) != -1) {
  switch (VAR_15) {
  case 'v':
   VAR_12.cb_verbose = VAR_1;
   break;
  case 'p':
   VAR_12.cb_verbose = VAR_1;
   VAR_12.cb_parsable = VAR_1;
   break;
  case 'n':
   VAR_12.cb_dryrun = VAR_1;
   break;
  case 'd':
   VAR_12.cb_defer_destroy = VAR_1;
   VAR_19 = VAR_4;
   break;
  case 'f':
   VAR_12.cb_force = VAR_1;
   break;
  case 'r':
   VAR_12.cb_recurse = VAR_1;
   break;
  case 'R':
   VAR_12.cb_recurse = VAR_1;
   VAR_12.cb_doclones = VAR_1;
   break;
  case '?':
  default:
   (void) FUNC_6(VAR_9, FUNC_9("invalid option '%c'\n"),
       VAR_8);
   FUNC_15(VAR_0);
  }
 }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;


 if (VAR_10 == 0) {
  (void) FUNC_6(VAR_9, "%s", FUNC_9("missing dataset argument\n"));
  FUNC_15(VAR_0);
 }
 if (VAR_10 > 1) {
  (void) FUNC_6(VAR_9, "%s", FUNC_9("too many arguments\n"));
  FUNC_15(VAR_0);
 }

 VAR_17 = FUNC_14(VAR_11[0], '@');
 VAR_18 = FUNC_14(VAR_11[0], '#');
 if (VAR_17 != ((void*)0)) {


  VAR_12.cb_nvl = FUNC_4();

  *VAR_17 = '\0';
  VAR_16 = FUNC_24(VAR_6, VAR_11[0],
      VAR_3 | VAR_5);
  if (VAR_16 == ((void*)0))
   return (1);

  VAR_12.cb_snapspec = VAR_17 + 1;
  if (FUNC_7(FUNC_21(VAR_16), &VAR_12) != 0 ||
      VAR_12.cb_error) {
   VAR_13 = 1;
   goto out;
  }

  if (FUNC_11(VAR_12.cb_nvl)) {
   (void) FUNC_6(VAR_9, "%s", FUNC_9("could not find any "
       "snapshots to destroy; check snapshot names.\n"));
   VAR_13 = 1;
   goto out;
  }

  if (VAR_12.cb_verbose) {
   char VAR_20[16];
   FUNC_23(VAR_12.cb_snapused, VAR_20, sizeof (VAR_20));
   if (VAR_12.cb_parsable) {
    (void) FUNC_13("reclaim\t%llu\n",
        VAR_12.cb_snapused);
   } else if (VAR_12.cb_dryrun) {
    (void) FUNC_13(FUNC_9("would reclaim %s\n"),
        VAR_20);
   } else {
    (void) FUNC_13(FUNC_9("will reclaim %s\n"),
        VAR_20);
   }
  }

  if (!VAR_12.cb_dryrun) {
   if (VAR_12.cb_doclones) {
    VAR_12.cb_batchedsnaps = FUNC_4();
    VAR_14 = FUNC_2(&VAR_12);
    if (VAR_14 == 0) {
     VAR_14 = FUNC_18(VAR_6,
         VAR_12.cb_batchedsnaps, VAR_0);
    }
    if (VAR_14 != 0) {
     VAR_13 = 1;
     goto out;
    }
   }
   if (VAR_14 == 0) {
    VAR_14 = FUNC_18(VAR_6, VAR_12.cb_nvl,
        VAR_12.cb_defer_destroy);
   }
  }

  if (VAR_14 != 0)
   VAR_13 = 1;
 } else if (VAR_18 != ((void*)0)) {
  int VAR_21;
  nvlist_t *VAR_22;

  if (VAR_12.cb_dryrun) {
   (void) FUNC_6(VAR_9,
       "dryrun is not supported with bookmark\n");
   return (-1);
  }

  if (VAR_12.cb_defer_destroy) {
   (void) FUNC_6(VAR_9,
       "defer destroy is not supported with bookmark\n");
   return (-1);
  }

  if (VAR_12.cb_recurse) {
   (void) FUNC_6(VAR_9,
       "recursive is not supported with bookmark\n");
   return (-1);
  }

  if (!FUNC_16(VAR_11[0])) {
   (void) FUNC_6(VAR_9, FUNC_9("bookmark '%s' "
       "does not exist.\n"), VAR_11[0]);
   return (1);
  }

  VAR_22 = FUNC_4();
  FUNC_3(VAR_22, VAR_11[0]);

  VAR_21 = FUNC_10(VAR_22, ((void*)0));
  if (VAR_21 != 0) {
   (void) FUNC_25(VAR_6, VAR_21,
       "cannot destroy bookmark");
  }

  FUNC_12(VAR_12.cb_nvl);

  return (VAR_21);
 } else {

  if ((VAR_16 = FUNC_24(VAR_6, VAR_11[0], VAR_19)) == ((void*)0))
   return (1);

  VAR_12.cb_target = VAR_16;




  if (!VAR_12.cb_recurse && FUNC_14(FUNC_19(VAR_16), '/') == ((void*)0) &&
      FUNC_20(VAR_16) == VAR_3) {
   (void) FUNC_6(VAR_9, FUNC_9("cannot destroy '%s': "
       "operation does not apply to pools\n"),
       FUNC_19(VAR_16));
   (void) FUNC_6(VAR_9, FUNC_9("use 'zfs destroy -r "
       "%s' to destroy all datasets in the pool\n"),
       FUNC_19(VAR_16));
   (void) FUNC_6(VAR_9, FUNC_9("use 'zpool destroy %s' "
       "to destroy the pool itself\n"), FUNC_19(VAR_16));
   VAR_13 = 1;
   goto out;
  }




  VAR_12.cb_first = VAR_1;
  if (!VAR_12.cb_doclones &&
      FUNC_22(VAR_16, VAR_1, FUNC_1,
      &VAR_12) != 0) {
   VAR_13 = 1;
   goto out;
  }

  if (VAR_12.cb_error) {
   VAR_13 = 1;
   goto out;
  }

  VAR_12.cb_batchedsnaps = FUNC_4();
  if (FUNC_22(VAR_16, VAR_0, FUNC_0,
      &VAR_12) != 0) {
   VAR_13 = 1;
   goto out;
  }





  VAR_14 = FUNC_0(VAR_16, &VAR_12);
  VAR_16 = ((void*)0);
  if (VAR_14 == 0) {
   VAR_14 = FUNC_18(VAR_6,
       VAR_12.cb_batchedsnaps, VAR_12.cb_defer_destroy);
  }
  if (VAR_14 != 0)
   VAR_13 = 1;
 }

out:
 FUNC_5(VAR_12.cb_batchedsnaps);
 FUNC_5(VAR_12.cb_nvl);
 if (VAR_16 != ((void*)0))
  FUNC_17(VAR_16);
 return (VAR_13);
}
