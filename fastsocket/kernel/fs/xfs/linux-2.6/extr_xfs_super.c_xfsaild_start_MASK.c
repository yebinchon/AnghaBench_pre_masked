
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_ail {int xa_task; TYPE_1__* xa_mount; scalar_t__ xa_target; } ;
struct TYPE_2__ {int m_fsname; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct xfs_ail*,char*,int ) ;
 int VAR_0 ;

int
FUNC_3(
 struct xfs_ail *VAR_1)
{
 VAR_1->xa_target = 0;
 VAR_1->xa_task = FUNC_2(VAR_0, VAR_1, "xfsaild/%s",
        VAR_1->xa_mount->m_fsname);
 if (FUNC_0(VAR_1->xa_task))
  return -FUNC_1(VAR_1->xa_task);
 return 0;
}
