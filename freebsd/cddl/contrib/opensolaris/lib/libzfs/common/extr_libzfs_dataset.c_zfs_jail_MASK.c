
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zfs_type; int zfs_name; TYPE_3__* zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_10__ {int zc_jailid; int zc_objset_type; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_11__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,unsigned long,TYPE_2__*) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,int ,char*) ;

int
FUNC_8(zfs_handle_t *VAR_7, int VAR_8, int VAR_9)
{
 libzfs_handle_t *VAR_10 = VAR_7->zfs_hdl;
 zfs_cmd_t VAR_11 = { 0 };
 char VAR_12[1024];
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_9) {
  (void) FUNC_3(VAR_12, sizeof (VAR_12),
      FUNC_1(VAR_2, "cannot jail '%s'"), VAR_7->zfs_name);
 } else {
  (void) FUNC_3(VAR_12, sizeof (VAR_12),
      FUNC_1(VAR_2, "cannot unjail '%s'"), VAR_7->zfs_name);
 }

 switch (VAR_7->zfs_type) {
 case 128:
  FUNC_6(VAR_10, FUNC_1(VAR_2,
      "volumes can not be jailed"));
  return (FUNC_5(VAR_10, VAR_1, VAR_12));
 case 129:
  FUNC_6(VAR_10, FUNC_1(VAR_2,
      "snapshots can not be jailed"));
  return (FUNC_5(VAR_10, VAR_1, VAR_12));
 }
 FUNC_0(VAR_7->zfs_type == VAR_5);

 (void) FUNC_4(VAR_11.zc_name, VAR_7->zfs_name, sizeof (VAR_11.zc_name));
 VAR_11.zc_objset_type = VAR_0;
 VAR_11.zc_jailid = VAR_8;

 VAR_13 = VAR_9 ? VAR_3 : VAR_4;
 if ((VAR_14 = FUNC_2(VAR_10->libzfs_fd, VAR_13, &VAR_11)) != 0)
  FUNC_7(VAR_10, VAR_6, VAR_12);

 return (VAR_14);
}
