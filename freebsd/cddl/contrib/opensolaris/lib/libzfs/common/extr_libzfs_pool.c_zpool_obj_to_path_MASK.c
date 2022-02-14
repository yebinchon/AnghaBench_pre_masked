
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zpool_name; TYPE_4__* zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_7__ {char* zc_name; char* zc_value; scalar_t__ zc_obj; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int dsname ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int libzfs_fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char*,char**) ;
 int FUNC_3 (char*,size_t,char*,char*,...) ;
 int FUNC_4 (char*,char*,int) ;

void
FUNC_5(zpool_handle_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    char *VAR_7, size_t VAR_8)
{
 zfs_cmd_t VAR_9 = { 0 };
 boolean_t VAR_10 = VAR_0;
 char *VAR_11 = ((void*)0);
 char VAR_12[VAR_3];

 if (VAR_5 == 0) {

  (void) FUNC_3(VAR_7, VAR_8, "<metadata>:<0x%llx>", VAR_6);
  return;
 }


 (void) FUNC_4(VAR_9.zc_name, VAR_4->zpool_name, sizeof (VAR_9.zc_name));
 VAR_9.zc_obj = VAR_5;
 if (FUNC_1(VAR_4->zpool_hdl->libzfs_fd,
     VAR_1, &VAR_9) != 0) {

  (void) FUNC_3(VAR_7, VAR_8, "<0x%llx>:<0x%llx>",
      VAR_5, VAR_6);
  return;
 }
 (void) FUNC_4(VAR_12, VAR_9.zc_value, sizeof (VAR_12));


 VAR_10 = FUNC_2(VAR_4->zpool_hdl, VAR_12, &VAR_11);


 (void) FUNC_4(VAR_9.zc_name, VAR_12, sizeof (VAR_9.zc_name));
 VAR_9.zc_obj = VAR_6;
 if (FUNC_1(VAR_4->zpool_hdl->libzfs_fd, VAR_2,
     &VAR_9) == 0) {
  if (VAR_10) {
   (void) FUNC_3(VAR_7, VAR_8, "%s%s", VAR_11,
       VAR_9.zc_value);
  } else {
   (void) FUNC_3(VAR_7, VAR_8, "%s:%s",
       VAR_12, VAR_9.zc_value);
  }
 } else {
  (void) FUNC_3(VAR_7, VAR_8, "%s:<0x%llx>", VAR_12, VAR_6);
 }
 FUNC_0(VAR_11);
}
