
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_lockres; } ;
struct ocfs2_super {int * dc_task; struct ocfs2_cluster_connection* cconn; TYPE_1__ osb_orphan_scan; int osb_nfs_sync_lockres; int osb_rename_lockres; int osb_super_lockres; scalar_t__ node_num; int uuid_str; int osb_cluster_stack; } ;
struct ocfs2_cluster_connection {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,struct ocfs2_super*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ,int ,struct ocfs2_super*,struct ocfs2_cluster_connection**) ;
 int FUNC_9 (struct ocfs2_cluster_connection*,int ) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (struct ocfs2_super*) ;
 int FUNC_12 (struct ocfs2_super*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (struct ocfs2_super*) ;
 int FUNC_14 (int *,struct ocfs2_super*) ;
 int FUNC_15 (int *,struct ocfs2_super*) ;
 int FUNC_16 (int *,struct ocfs2_super*) ;
 int FUNC_17 (int *,struct ocfs2_super*) ;
 int FUNC_18 (int ) ;

int FUNC_19(struct ocfs2_super *VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_cluster_connection *VAR_5 = ((void*)0);

 FUNC_5();

 if (FUNC_13(VAR_3)) {
  VAR_3->node_num = 0;
  goto local;
 }

 VAR_4 = FUNC_11(VAR_3);
 if (VAR_4 < 0) {
  FUNC_6(VAR_4);
  goto bail;
 }


 VAR_3->dc_task = FUNC_2(VAR_2, VAR_3, "ocfs2dc");
 if (FUNC_0(VAR_3->dc_task)) {
  VAR_4 = FUNC_1(VAR_3->dc_task);
  VAR_3->dc_task = ((void*)0);
  FUNC_6(VAR_4);
  goto bail;
 }


 VAR_4 = FUNC_8(VAR_3->osb_cluster_stack,
           VAR_3->uuid_str,
           FUNC_18(VAR_3->uuid_str),
           VAR_1, VAR_3,
           &VAR_5);
 if (VAR_4) {
  FUNC_6(VAR_4);
  goto bail;
 }

 VAR_4 = FUNC_10(&VAR_3->node_num);
 if (VAR_4 < 0) {
  FUNC_6(VAR_4);
  FUNC_4(VAR_0,
       "could not find this host's node number\n");
  FUNC_9(VAR_5, 0);
  goto bail;
 }

local:
 FUNC_17(&VAR_3->osb_super_lockres, VAR_3);
 FUNC_16(&VAR_3->osb_rename_lockres, VAR_3);
 FUNC_14(&VAR_3->osb_nfs_sync_lockres, VAR_3);
 FUNC_15(&VAR_3->osb_orphan_scan.os_lockres, VAR_3);

 VAR_3->cconn = VAR_5;

 VAR_4 = 0;
bail:
 if (VAR_4 < 0) {
  FUNC_12(VAR_3);
  if (VAR_3->dc_task)
   FUNC_3(VAR_3->dc_task);
 }

 FUNC_7(VAR_4);
 return VAR_4;
}
