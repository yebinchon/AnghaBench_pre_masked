
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfs_prop_t ;
struct TYPE_11__ {void* dds_inconsistent; void* dds_num_clones; } ;
struct TYPE_12__ {char* zfs_name; char* zfs_mntopts; int * zfs_hdl; TYPE_1__ zfs_dmustats; int zfs_head_type; void* zfs_mntcheck; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_13__ {int zc_name; int member_0; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef void* uint64_t ;
struct mnttab {char* mnt_mntopts; } ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;



 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (TYPE_2__*,int,char**) ;
 int FUNC_2 (struct mnttab*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,struct mnttab*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,void**) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*,int **) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int ) ;
 char* FUNC_19 (int *,char*) ;

__attribute__((used)) static int
FUNC_20(zfs_handle_t *VAR_20, zfs_prop_t VAR_21, zprop_source_t *VAR_22,
    char **VAR_23, uint64_t *VAR_24)
{
 zfs_cmd_t VAR_25 = { 0 };
 nvlist_t *VAR_26 = ((void*)0);
 struct mnttab VAR_27;
 char *VAR_28 = ((void*)0);
 char *VAR_29 = ((void*)0);
 boolean_t VAR_30 = FUNC_13(VAR_20);

 *VAR_23 = ((void*)0);

 switch (VAR_21) {
 case 151:
  VAR_28 = VAR_3;
  VAR_29 = VAR_7;
  break;

 case 148:
  VAR_28 = VAR_4;
  VAR_29 = VAR_8;
  break;

 case 147:
  VAR_28 = VAR_5;
  VAR_29 = VAR_9;
  break;

 case 138:
  VAR_28 = VAR_13;
  VAR_29 = VAR_14;
  break;

 case 134:
  VAR_28 = VAR_15;
  VAR_29 = VAR_11;
  break;

 case 128:
  VAR_28 = VAR_16;
  VAR_29 = VAR_12;
  break;

 case 142:
  VAR_28 = VAR_6;
  VAR_29 = VAR_10;
  break;

 default:
  break;
 }






 if (!VAR_20->zfs_mntcheck &&
     (VAR_28 != ((void*)0) || VAR_21 == 143)) {
  libzfs_handle_t *VAR_31 = VAR_20->zfs_hdl;
  struct mnttab VAR_32;

  if (FUNC_3(VAR_31, VAR_20->zfs_name, &VAR_32) == 0) {
   VAR_20->zfs_mntopts = FUNC_19(VAR_31,
       VAR_32.mnt_mntopts);
   if (VAR_20->zfs_mntopts == ((void*)0))
    return (-1);
  }

  VAR_20->zfs_mntcheck = VAR_1;
 }

 if (VAR_20->zfs_mntopts == ((void*)0))
  VAR_27.mnt_mntopts = "";
 else
  VAR_27.mnt_mntopts = VAR_20->zfs_mntopts;

 switch (VAR_21) {
 case 151:
 case 148:
 case 147:
 case 138:
 case 134:
 case 128:
 case 142:
  *VAR_24 = FUNC_1(VAR_20, VAR_21, VAR_23);

  if (VAR_30)
   break;

  if (FUNC_2(&VAR_27, VAR_28) && !*VAR_24) {
   *VAR_24 = VAR_1;
   if (VAR_22)
    *VAR_22 = VAR_19;
  } else if (FUNC_2(&VAR_27, VAR_29) && *VAR_24) {
   *VAR_24 = VAR_0;
   if (VAR_22)
    *VAR_22 = VAR_19;
  }
  break;

 case 150:
 case 129:
 case 139:
 case 137:
 case 135:
 case 136:
 case 145:
 case 132:
 case 146:
 case 133:
  *VAR_24 = FUNC_1(VAR_20, VAR_21, VAR_23);

  if (*VAR_23 == ((void*)0)) {

   *VAR_23 = VAR_20->zfs_name;
  }
  break;

 case 143:
  *VAR_24 = (VAR_20->zfs_mntopts != ((void*)0));
  break;

 case 140:
  *VAR_24 = VAR_20->zfs_dmustats.dds_num_clones;
  break;

 case 130:
 case 141:
 case 131:
 case 149:
  if (!FUNC_18(VAR_21, VAR_20->zfs_head_type) ||
      FUNC_7(VAR_20->zfs_hdl, &VAR_25, 0) != 0)
   return (-1);
  (void) FUNC_6(VAR_25.zc_name, VAR_20->zfs_name, sizeof (VAR_25.zc_name));
  if (FUNC_12(VAR_20->zfs_hdl, VAR_18, &VAR_25)) {
   FUNC_8(&VAR_25);
   return (-1);
  }
  if (FUNC_9(VAR_20->zfs_hdl, &VAR_25, &VAR_26) != 0 ||
      FUNC_5(VAR_26, FUNC_17(VAR_21),
      VAR_24) != 0) {
   FUNC_8(&VAR_25);
   return (-1);
  }
  FUNC_4(VAR_26);
  FUNC_8(&VAR_25);
  break;

 case 144:
  *VAR_24 = VAR_20->zfs_dmustats.dds_inconsistent;
  break;

 default:
  switch (FUNC_14(VAR_21)) {
  case 153:
  case 154:
   *VAR_24 = FUNC_1(VAR_20, VAR_21, VAR_23);







   if (FUNC_15(VAR_21) &&
       !FUNC_16(VAR_21) &&
       *VAR_23 != ((void*)0) && (*VAR_23)[0] == '\0') {
    *VAR_23 = ((void*)0);
    return (-1);
   }
   break;

  case 152:
  default:
   FUNC_11(VAR_20->zfs_hdl, FUNC_0(VAR_17,
       "cannot get non-numeric property"));
   return (FUNC_10(VAR_20->zfs_hdl, VAR_2,
       FUNC_0(VAR_17, "internal error")));
  }
 }

 return (0);
}
