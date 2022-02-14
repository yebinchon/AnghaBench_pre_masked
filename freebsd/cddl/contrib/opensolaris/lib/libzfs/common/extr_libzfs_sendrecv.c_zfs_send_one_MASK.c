
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ dryrun; int parsable; scalar_t__ verbose; scalar_t__ compress; scalar_t__ embed_data; scalar_t__ largeblock; } ;
typedef TYPE_2__ sendflags_t ;
typedef char* longlong_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;
typedef int buf ;
typedef int FILE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int,int) ;
 int FUNC_4 (int ,char const*,int,scalar_t__*) ;
 int FUNC_5 (int *,int ,char const*,scalar_t__,int ) ;
 int FUNC_6 (char*,int,char*,int ) ;
 int * VAR_9 ;
 int * VAR_10 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (scalar_t__,char*,int) ;
 int FUNC_11 (int *,int,char*) ;

int
FUNC_12(zfs_handle_t *VAR_11, const char *VAR_12, int VAR_13, sendflags_t VAR_14)
{
 int VAR_15 = 0;
 libzfs_handle_t *VAR_16 = VAR_11->zfs_hdl;
 enum lzc_send_flags VAR_17 = 0;
 FILE *VAR_18 = (VAR_14.verbose && VAR_14.dryrun) ? VAR_10 : VAR_9;
 char VAR_19[1024];

 if (VAR_14.largeblock)
  VAR_17 |= VAR_6;
 if (VAR_14.embed_data)
  VAR_17 |= VAR_5;
 if (VAR_14.compress)
  VAR_17 |= VAR_4;

 if (VAR_14.verbose) {
  uint64_t VAR_20 = 0;
  VAR_15 = FUNC_4(VAR_11->zfs_name, VAR_12, VAR_17, &VAR_20);
  if (VAR_15 == 0) {
   FUNC_5(VAR_18, VAR_11->zfs_name, VAR_12, VAR_20,
       VAR_14.parsable);
   if (VAR_14.parsable) {
    (void) FUNC_1(VAR_18, "size\t%llu\n",
        (longlong_t)VAR_20);
   } else {
    char VAR_21[16];
    FUNC_10(VAR_20, VAR_21, sizeof (VAR_21));
    (void) FUNC_1(VAR_18, FUNC_0(VAR_7,
        "total estimated size is %s\n"), VAR_21);
   }
  } else {
   (void) FUNC_1(VAR_9, "Cannot estimate send size: "
       "%s\n", FUNC_7(VAR_8));
  }
 }

 if (VAR_14.dryrun)
  return (VAR_15);

 (void) FUNC_6(VAR_19, sizeof (VAR_19), FUNC_0(VAR_7,
     "warning: cannot send '%s'"), VAR_11->zfs_name);

 VAR_15 = FUNC_3(VAR_11->zfs_name, VAR_12, VAR_13, VAR_17);
 if (VAR_15 != 0) {
  switch (VAR_8) {
  case 128:
   FUNC_9(VAR_16, FUNC_0(VAR_7,
       "not an earlier snapshot from the same fs"));
   return (FUNC_8(VAR_16, VAR_2, VAR_19));

  case 137:
  case 129:
   if (FUNC_2(VAR_11->zfs_name)) {
    FUNC_9(VAR_16, FUNC_0(VAR_7,
        "incremental source (%s) does not exist"),
        VAR_12);
   }
   return (FUNC_8(VAR_16, VAR_3, VAR_19));

  case 142:
   FUNC_9(VAR_16, FUNC_0(VAR_7,
       "target is busy; if a filesystem, "
       "it must not be mounted"));
   return (FUNC_8(VAR_16, VAR_1, VAR_19));

  case 141:
  case 139:
  case 138:
  case 136:
  case 135:



  case 133:
  case 132:
  case 131:
  case 140:
  case 130:
   FUNC_9(VAR_16, FUNC_7(VAR_8));
   return (FUNC_8(VAR_16, VAR_0, VAR_19));

  default:
   return (FUNC_11(VAR_16, VAR_8, VAR_19));
  }
 }
 return (VAR_15 != 0);
}
