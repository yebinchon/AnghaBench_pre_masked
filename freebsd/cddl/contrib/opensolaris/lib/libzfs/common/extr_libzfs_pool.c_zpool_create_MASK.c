
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zc_name; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
struct TYPE_9__ {int import; int create; } ;
typedef TYPE_2__ prop_flags_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,char**) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*,int *) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,char*,...) ;
 int FUNC_13 (int *,int ,TYPE_1__*) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int *,int ,int *,int,int *,int *,char*) ;
 int FUNC_17 (int *,int ,char const*) ;
 int FUNC_18 (int *,int,char*) ;
 int * FUNC_19 (int *,char const*,int *,int ,TYPE_2__,char*) ;

int
FUNC_20(libzfs_handle_t *VAR_14, const char *VAR_15, nvlist_t *VAR_16,
    nvlist_t *VAR_17, nvlist_t *VAR_18)
{
 zfs_cmd_t VAR_19 = { 0 };
 nvlist_t *VAR_20 = ((void*)0);
 nvlist_t *VAR_21 = ((void*)0);
 char VAR_22[1024];
 int VAR_23 = -1;

 (void) FUNC_5(VAR_22, sizeof (VAR_22), FUNC_0(VAR_8,
     "cannot create '%s'"), VAR_15);

 if (!FUNC_17(VAR_14, VAR_0, VAR_15))
  return (FUNC_11(VAR_14, VAR_4, VAR_22));

 if (FUNC_9(VAR_14, &VAR_19, VAR_16) != 0)
  return (-1);

 if (VAR_17) {
  prop_flags_t VAR_24 = { .create = VAR_1, .import = VAR_0 };

  if ((VAR_21 = FUNC_19(VAR_14, VAR_15, VAR_17,
      VAR_7, VAR_24, VAR_22)) == ((void*)0)) {
   goto create_failed;
  }
 }

 if (VAR_18) {
  uint64_t VAR_25;
  char *VAR_26;

  VAR_25 = ((FUNC_4(VAR_18,
      FUNC_15(VAR_10), &VAR_26) == 0) &&
      FUNC_6(VAR_26, "on") == 0);

  if ((VAR_20 = FUNC_16(VAR_14, VAR_11,
      VAR_18, VAR_25, ((void*)0), ((void*)0), VAR_22)) == ((void*)0)) {
   goto create_failed;
  }
  if (!VAR_21 &&
      (FUNC_2(&VAR_21, VAR_5, 0) != 0)) {
   goto create_failed;
  }
  if (FUNC_1(VAR_21,
      VAR_12, VAR_20) != 0) {
   goto create_failed;
  }
 }

 if (VAR_21 && FUNC_10(VAR_14, &VAR_19, VAR_21) != 0)
  goto create_failed;

 (void) FUNC_7(VAR_19.zc_name, VAR_15, sizeof (VAR_19.zc_name));

 if ((VAR_23 = FUNC_13(VAR_14, VAR_9, &VAR_19)) != 0) {

  FUNC_8(&VAR_19);
  FUNC_3(VAR_21);
  FUNC_3(VAR_20);

  switch (VAR_13) {
  case 132:






   FUNC_12(VAR_14, FUNC_0(VAR_8,
       "one or more vdevs refer to the same device"));
   return (FUNC_11(VAR_14, VAR_2, VAR_22));

  case 128:
   FUNC_12(VAR_14, FUNC_0(VAR_8,
       "record size invalid"));
   return (FUNC_11(VAR_14, VAR_3, VAR_22));

  case 129:






   {
    char VAR_27[64];

    FUNC_14(VAR_6, VAR_27, sizeof (VAR_27));

    FUNC_12(VAR_14, FUNC_0(VAR_8,
        "one or more devices is less than the "
        "minimum size (%s)"), VAR_27);
   }
   return (FUNC_11(VAR_14, VAR_2, VAR_22));

  case 131:
   FUNC_12(VAR_14, FUNC_0(VAR_8,
       "one or more devices is out of space"));
   return (FUNC_11(VAR_14, VAR_2, VAR_22));

  case 130:
   FUNC_12(VAR_14, FUNC_0(VAR_8,
       "cache device must be a disk or disk slice"));
   return (FUNC_11(VAR_14, VAR_2, VAR_22));

  default:
   return (FUNC_18(VAR_14, VAR_13, VAR_22));
  }
 }

create_failed:
 FUNC_8(&VAR_19);
 FUNC_3(VAR_21);
 FUNC_3(VAR_20);
 return (VAR_23);
}
