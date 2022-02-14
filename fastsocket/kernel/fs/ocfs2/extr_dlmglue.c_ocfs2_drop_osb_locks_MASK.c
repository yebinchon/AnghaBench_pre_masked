
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_lockres; } ;
struct ocfs2_super {TYPE_1__ osb_orphan_scan; int osb_nfs_sync_lockres; int osb_rename_lockres; int osb_super_lockres; } ;


 int FUNC_0 (struct ocfs2_super*,int *) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_super *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->osb_super_lockres);
 FUNC_0(VAR_0, &VAR_0->osb_rename_lockres);
 FUNC_0(VAR_0, &VAR_0->osb_nfs_sync_lockres);
 FUNC_0(VAR_0, &VAR_0->osb_orphan_scan.os_lockres);
}
