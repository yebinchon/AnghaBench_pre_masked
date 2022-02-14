
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zfs_type; int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_6__ {size_t zc_nvlist_src_size; uintptr_t zc_nvlist_src; int zc_name; int zc_perm_action; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int *,char**,size_t*,int ,int ) ;
 int FUNC_5 (int *,size_t*,int ) ;
 int FUNC_6 (char*,int,char*,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,int ,TYPE_2__*) ;
 int FUNC_11 (int *,int,char*) ;

int
FUNC_12(zfs_handle_t *VAR_9, boolean_t VAR_10, nvlist_t *VAR_11)
{
 zfs_cmd_t VAR_12 = { 0 };
 libzfs_handle_t *VAR_13 = VAR_9->zfs_hdl;
 char *VAR_14;
 char VAR_15[1024];
 size_t VAR_16;
 int VAR_17;

 FUNC_0(VAR_9->zfs_type == VAR_7 ||
     VAR_9->zfs_type == VAR_6);

 VAR_17 = FUNC_5(VAR_11, &VAR_16, VAR_3);
 FUNC_0(VAR_17 == 0);

 VAR_14 = FUNC_3(VAR_16);

 VAR_17 = FUNC_4(VAR_11, &VAR_14, &VAR_16, VAR_3, 0);
 FUNC_0(VAR_17 == 0);

 VAR_12.zc_nvlist_src_size = VAR_16;
 VAR_12.zc_nvlist_src = (uintptr_t)VAR_14;
 VAR_12.zc_perm_action = VAR_10;

 (void) FUNC_7(VAR_12.zc_name, VAR_9->zfs_name, sizeof (VAR_12.zc_name));

 if (FUNC_10(VAR_13, VAR_5, &VAR_12) != 0) {
  (void) FUNC_6(VAR_15, sizeof (VAR_15),
      FUNC_1(VAR_4, "cannot set permissions on '%s'"),
      VAR_12.zc_name);
  switch (VAR_8) {
  case 128:
   FUNC_9(VAR_13, FUNC_1(VAR_4,
       "pool must be upgraded"));
   VAR_17 = FUNC_8(VAR_13, VAR_1, VAR_15);
   break;
  case 130:
   VAR_17 = FUNC_8(VAR_13, VAR_0, VAR_15);
   break;
  case 129:
   VAR_17 = FUNC_8(VAR_13, VAR_2, VAR_15);
   break;
  default:
   VAR_17 = FUNC_11(VAR_13, VAR_8, VAR_15);
   break;
  }
 }

 FUNC_2(VAR_14);

 return (VAR_17);
}
