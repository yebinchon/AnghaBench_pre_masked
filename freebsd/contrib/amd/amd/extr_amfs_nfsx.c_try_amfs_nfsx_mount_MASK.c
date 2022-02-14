
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amfs_nfsx {int * nx_mp; } ;
typedef scalar_t__ opaque_t ;
struct TYPE_5__ {TYPE_1__* mf_ops; scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
typedef int am_node ;
struct TYPE_4__ {int (* mount_fs ) (int *,TYPE_2__*) ;} ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(opaque_t VAR_0)
{
  mntfs *VAR_1 = (mntfs *) VAR_0;
  struct amfs_nfsx *VAR_2 = (struct amfs_nfsx *) VAR_1->mf_private;
  am_node *VAR_3 = VAR_2->nx_mp;
  int VAR_4;

  VAR_4 = VAR_1->mf_ops->mount_fs(VAR_3, VAR_1);

  return VAR_4;
}
