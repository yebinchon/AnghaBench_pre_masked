
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* zfs_userspace_cb_t ) (void*,int ,int ,int ) ;
typedef int zfs_userquota_prop_t ;
struct TYPE_6__ {int zu_space; int zu_rid; int zu_domain; } ;
typedef TYPE_1__ zfs_useracct_t ;
struct TYPE_7__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_8__ {uintptr_t zc_nvlist_dst; int zc_nvlist_dst_size; int zc_name; int zc_objset_type; int member_0; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_3__*) ;
 int FUNC_4 (int *,int ,char*) ;

int
FUNC_5(zfs_handle_t *VAR_3, zfs_userquota_prop_t VAR_4,
    zfs_userspace_cb_t VAR_5, void *VAR_6)
{
 zfs_cmd_t VAR_7 = { 0 };
 zfs_useracct_t VAR_8[100];
 libzfs_handle_t *VAR_9 = VAR_3->zfs_hdl;
 int VAR_10;

 (void) FUNC_2(VAR_7.zc_name, VAR_3->zfs_name, sizeof (VAR_7.zc_name));

 VAR_7.zc_objset_type = VAR_4;
 VAR_7.zc_nvlist_dst = (uintptr_t)VAR_8;

 for (;;) {
  zfs_useracct_t *VAR_11 = VAR_8;

  VAR_7.zc_nvlist_dst_size = sizeof (VAR_8);
  if (FUNC_3(VAR_9, VAR_1, &VAR_7) != 0) {
   char VAR_12[1024];

   (void) FUNC_1(VAR_12, sizeof (VAR_12),
       FUNC_0(VAR_0,
       "cannot get used/quota for %s"), VAR_7.zc_name);
   return (FUNC_4(VAR_9, VAR_2, VAR_12));
  }
  if (VAR_7.zc_nvlist_dst_size == 0)
   break;

  while (VAR_7.zc_nvlist_dst_size > 0) {
   if ((VAR_10 = VAR_5(VAR_6, VAR_11->zu_domain, VAR_11->zu_rid,
       VAR_11->zu_space)) != 0)
    return (VAR_10);
   VAR_11++;
   VAR_7.zc_nvlist_dst_size -= sizeof (zfs_useracct_t);
  }
 }

 return (0);
}
