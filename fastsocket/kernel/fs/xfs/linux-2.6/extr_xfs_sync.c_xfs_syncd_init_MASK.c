
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * w_completion; struct xfs_mount* w_mount; int w_syncer; } ;
struct xfs_mount {int m_sync_task; int m_fsname; TYPE_1__ m_sync_work; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct xfs_mount*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(
 struct xfs_mount *VAR_2)
{
 VAR_2->m_sync_work.w_syncer = VAR_0;
 VAR_2->m_sync_work.w_mount = VAR_2;
 VAR_2->m_sync_work.w_completion = ((void*)0);
 VAR_2->m_sync_task = FUNC_2(VAR_1, VAR_2, "xfssyncd/%s", VAR_2->m_fsname);
 if (FUNC_0(VAR_2->m_sync_task))
  return -FUNC_1(VAR_2->m_sync_task);
 return 0;
}
