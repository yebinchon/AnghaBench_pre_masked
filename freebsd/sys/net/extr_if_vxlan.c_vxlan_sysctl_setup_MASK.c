
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_statistics {int ftable_lock_upgrade_failed; int ftable_nospace; } ;
struct sysctl_ctx_list {int dummy; } ;
struct vxlan_softc {int vxl_unit; struct sysctl_oid* vxl_sysctl_node; int vxl_ftable_timeout; int vxl_ftable_max; int vxl_ftable_cnt; struct vxlan_statistics vxl_stats; struct sysctl_ctx_list vxl_sysctl_ctx; } ;
struct sysctl_oid {int dummy; } ;
typedef int namebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct vxlan_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (struct sysctl_ctx_list*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(struct vxlan_softc *VAR_7)
{
 struct sysctl_ctx_list *VAR_8;
 struct sysctl_oid *VAR_9;
 struct vxlan_statistics *VAR_10;
 char VAR_11[8];

 VAR_8 = &VAR_7->vxl_sysctl_ctx;
 VAR_10 = &VAR_7->vxl_stats;
 FUNC_5(VAR_11, sizeof(VAR_11), "%d", VAR_7->vxl_unit);

 FUNC_6(VAR_8);
 VAR_7->vxl_sysctl_node = FUNC_0(VAR_8,
     FUNC_4(VAR_5), VAR_4, VAR_11,
     VAR_1, ((void*)0), "");

 VAR_9 = FUNC_0(VAR_8, FUNC_3(VAR_7->vxl_sysctl_node),
     VAR_4, "ftable", VAR_1, ((void*)0), "");
 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_4, "count",
     VAR_1, &VAR_7->vxl_ftable_cnt, 0,
     "Number of entries in fowarding table");
 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_4, "max",
      VAR_1, &VAR_7->vxl_ftable_max, 0,
     "Maximum number of entries allowed in fowarding table");
 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_4, "timeout",
     VAR_1, &VAR_7->vxl_ftable_timeout, 0,
     "Number of seconds between prunes of the forwarding table");
 FUNC_1(VAR_8, FUNC_3(VAR_9), VAR_4, "dump",
     VAR_3 | VAR_1 | VAR_0 | VAR_2,
     VAR_7, 0, VAR_6, "A",
     "Dump the forwarding table entries");

 VAR_9 = FUNC_0(VAR_8, FUNC_3(VAR_7->vxl_sysctl_node),
     VAR_4, "stats", VAR_1, ((void*)0), "");
 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_4,
     "ftable_nospace", VAR_1, &VAR_10->ftable_nospace, 0,
     "Fowarding table reached maximum entries");
 FUNC_2(VAR_8, FUNC_3(VAR_9), VAR_4,
     "ftable_lock_upgrade_failed", VAR_1,
     &VAR_10->ftable_lock_upgrade_failed, 0,
     "Forwarding table update required lock upgrade");
}
