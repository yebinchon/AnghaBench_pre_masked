
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* zfs_name; int zpool_hdl; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int u_longlong_t ;
struct stat {int dummy; } ;
typedef int mountpoint ;
typedef int mntopts ;
typedef int libzfs_handle_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int,char*,int ,int) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char const*,int) ;
 int * FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int ,char*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,char*,int,int *) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_16 (int ,char*,int,int ,int *,int ,char*,int) ;
 scalar_t__ FUNC_17 (int ,int ,int *) ;

int
FUNC_18(zfs_handle_t *VAR_14, const char *VAR_15, int VAR_16)
{
 struct stat VAR_17;
 char VAR_18[VAR_10];
 char VAR_19[VAR_6];
 libzfs_handle_t *VAR_20 = VAR_14->zfs_hdl;

 if (VAR_15 == ((void*)0))
  VAR_19[0] = '\0';
 else
  (void) FUNC_8(VAR_19, VAR_15, sizeof (VAR_19));




 if (FUNC_17(VAR_14->zpool_hdl, VAR_12, ((void*)0)))
  VAR_16 |= VAR_8;

 if (!FUNC_13(VAR_14, VAR_18, sizeof (VAR_18), ((void*)0)))
  return (0);


 if (FUNC_4(VAR_18, &VAR_17) != 0) {
  if (FUNC_5(VAR_18, 0755) != 0) {
   FUNC_10(VAR_20, FUNC_1(VAR_9,
       "failed to create mountpoint"));
   return (FUNC_11(VAR_20, VAR_3,
       FUNC_1(VAR_9, "cannot mount '%s'"),
       VAR_18));
  }
 }
 if (FUNC_16(FUNC_12(VAR_14), VAR_18, VAR_16,
     VAR_5, ((void*)0), 0, VAR_19, sizeof (VAR_19)) != 0) {





  if (VAR_13 == VAR_0) {
   FUNC_10(VAR_20, FUNC_1(VAR_9,
       "mountpoint or dataset is busy"));
  } else if (VAR_13 == VAR_2) {
   FUNC_10(VAR_20, FUNC_1(VAR_9,
       "Insufficient privileges"));
  } else if (VAR_13 == VAR_1) {
   char VAR_21[256];
   int VAR_22;

   FUNC_0(FUNC_15(VAR_14, &VAR_22) == 0);
   (void) FUNC_6(VAR_21, sizeof (VAR_21),
       FUNC_1(VAR_9, "Can't mount a version %lld "
       "file system on a version %d pool. Pool must be"
       " upgraded to mount this file system."),
       (u_longlong_t)FUNC_14(VAR_14,
       VAR_11), VAR_22);
   FUNC_10(VAR_20, FUNC_1(VAR_9, VAR_21));
  } else {
   FUNC_10(VAR_20, FUNC_7(VAR_13));
  }
  return (FUNC_11(VAR_20, VAR_3,
      FUNC_1(VAR_9, "cannot mount '%s'"),
      VAR_14->zfs_name));
 }


 FUNC_3(VAR_20, FUNC_12(VAR_14), VAR_18,
     VAR_19);
 return (0);
}
