
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {scalar_t__ progress; int progressastitle; int parsable; scalar_t__ dryrun; scalar_t__ verbose; scalar_t__ compress; scalar_t__ embed_data; scalar_t__ largeblock; } ;
typedef TYPE_2__ sendflags_t ;
typedef int pthread_t ;
struct TYPE_10__ {int pa_fd; int pa_astitle; scalar_t__ pa_size; int pa_parsable; TYPE_1__* pa_zhp; int member_0; } ;
typedef TYPE_3__ progress_arg_t ;
typedef int nvlist_t ;
typedef int longlong_t ;
typedef int libzfs_handle_t ;
typedef int int64_t ;
typedef int errbuf ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_1 (int ,char*) ;
 int VAR_11 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*,scalar_t__,int ,char*) ;
 int FUNC_4 (int ,char*,int,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,int,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*,char**) ;
 scalar_t__ FUNC_8 (int *,char*,scalar_t__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,int ,TYPE_3__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int ,char*,scalar_t__,int ) ;
 int VAR_12 ;
 int FUNC_14 (char*,int,char*,...) ;
 int * VAR_13 ;
 int * VAR_14 ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (int *,char*,int ) ;
 int FUNC_18 (int *,int ,char*) ;
 int FUNC_19 (int *,char*,...) ;
 TYPE_1__* FUNC_20 (int *,char*,int ) ;
 int * FUNC_21 (int *,char const*) ;
 int FUNC_22 (int *,int ,char*) ;

int
FUNC_23(libzfs_handle_t *VAR_15, sendflags_t *VAR_16, int VAR_17,
    const char *VAR_18)
{
 char VAR_19[1024];
 char *VAR_20;
 char *VAR_21 = ((void*)0);
 uint64_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 zfs_handle_t *VAR_27;
 int VAR_28 = 0;
 char VAR_29[VAR_9];
 enum lzc_send_flags VAR_30 = 0;
 uint64_t VAR_31 = 0;
 FILE *VAR_32 = (VAR_16->verbose && VAR_16->dryrun) ? VAR_14 : VAR_13;

 (void) FUNC_14(VAR_19, sizeof (VAR_19), FUNC_1(VAR_8,
     "cannot resume send"));

 nvlist_t *VAR_33 =
     FUNC_21(VAR_15, VAR_18);
 if (VAR_33 == ((void*)0)) {




  return (FUNC_18(VAR_15, VAR_4, VAR_19));
 }
 if (VAR_16->verbose) {
  (void) FUNC_2(VAR_32, FUNC_1(VAR_8,
      "resume token contents:\n"));
  FUNC_9(VAR_32, VAR_33);
 }

 if (FUNC_7(VAR_33, "toname", &VAR_20) != 0 ||
     FUNC_8(VAR_33, "object", &VAR_22) != 0 ||
     FUNC_8(VAR_33, "offset", &VAR_23) != 0 ||
     FUNC_8(VAR_33, "bytes", &VAR_26) != 0 ||
     FUNC_8(VAR_33, "toguid", &VAR_24) != 0) {
  FUNC_19(VAR_15, FUNC_1(VAR_8,
      "resume token is corrupt"));
  return (FUNC_18(VAR_15, VAR_4, VAR_19));
 }
 VAR_25 = 0;
 (void) FUNC_8(VAR_33, "fromguid", &VAR_25);

 if (VAR_16->largeblock || FUNC_6(VAR_33, "largeblockok"))
  VAR_30 |= VAR_7;
 if (VAR_16->embed_data || FUNC_6(VAR_33, "embedok"))
  VAR_30 |= VAR_6;
 if (VAR_16->compress || FUNC_6(VAR_33, "compressok"))
  VAR_30 |= VAR_5;

 if (FUNC_3(VAR_15, VAR_20, VAR_24, VAR_0, VAR_29) != 0) {
  if (FUNC_17(VAR_15, VAR_20, VAR_10)) {
   FUNC_19(VAR_15, FUNC_1(VAR_8,
       "'%s' is no longer the same snapshot used in "
       "the initial send"), VAR_20);
  } else {
   FUNC_19(VAR_15, FUNC_1(VAR_8,
       "'%s' used in the initial send no longer exists"),
       VAR_20);
  }
  return (FUNC_18(VAR_15, VAR_3, VAR_19));
 }
 VAR_27 = FUNC_20(VAR_15, VAR_29, VAR_10);
 if (VAR_27 == ((void*)0)) {
  FUNC_19(VAR_15, FUNC_1(VAR_8,
      "unable to access '%s'"), VAR_29);
  return (FUNC_18(VAR_15, VAR_3, VAR_19));
 }

 if (VAR_25 != 0) {
  if (FUNC_3(VAR_15, VAR_20, VAR_25, VAR_1, VAR_29) != 0) {
   FUNC_19(VAR_15, FUNC_1(VAR_8,
       "incremental source %#llx no longer exists"),
       (longlong_t)VAR_25);
   return (FUNC_18(VAR_15, VAR_3, VAR_19));
  }
  VAR_21 = VAR_29;
 }

 if (VAR_16->progress || VAR_16->verbose) {
  VAR_28 = FUNC_5(VAR_27->zfs_name, VAR_21,
      VAR_30, &VAR_31);
  if (VAR_28 == 0)
   VAR_31 = FUNC_0(0, (int64_t)(VAR_31 - VAR_26));
 }
 if (VAR_16->verbose) {
  FUNC_13(VAR_32, VAR_27->zfs_name, VAR_21,
      VAR_31, VAR_16->parsable);
 }

 if (!VAR_16->dryrun) {
  progress_arg_t VAR_34 = { 0 };
  pthread_t VAR_35;




  if (VAR_16->progress) {
   VAR_34.pa_zhp = VAR_27;
   VAR_34.pa_fd = VAR_17;
   VAR_34.pa_parsable = VAR_16->parsable;
   VAR_34.pa_size = VAR_31;
   VAR_34.pa_astitle = VAR_16->progressastitle;

   VAR_28 = FUNC_11(&VAR_35, ((void*)0),
       VAR_12, &VAR_34);
   if (VAR_28 != 0) {
    FUNC_16(VAR_27);
    return (VAR_28);
   }
  }

  VAR_28 = FUNC_4(VAR_27->zfs_name, VAR_21, VAR_17,
      VAR_30, VAR_22, VAR_23);

  if (VAR_16->progress) {
   (void) FUNC_10(VAR_35);
   (void) FUNC_12(VAR_35, ((void*)0));
  }

  char VAR_36[1024];
  (void) FUNC_14(VAR_36, sizeof (VAR_36), FUNC_1(VAR_8,
      "warning: cannot send '%s'"), VAR_27->zfs_name);

  FUNC_16(VAR_27);

  switch (VAR_28) {
  case 0:
   return (0);
  case 128:
  case 136:
  case 140:
  case 138:
  case 137:
  case 135:
  case 134:



  case 132:
  case 131:
  case 130:
  case 139:
  case 129:
   FUNC_19(VAR_15, FUNC_15(VAR_11));
   return (FUNC_18(VAR_15, VAR_2, VAR_36));

  default:
   return (FUNC_22(VAR_15, VAR_11, VAR_36));
  }
 }


 FUNC_16(VAR_27);

 return (VAR_28);
}
