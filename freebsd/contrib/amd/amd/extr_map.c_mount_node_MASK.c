
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_11__ {int mf_flags; TYPE_1__* mf_ops; } ;
typedef TYPE_3__ mntfs ;
struct TYPE_12__ {int am_flags; int am_path; TYPE_2__* am_al; } ;
typedef TYPE_4__ am_node ;
struct TYPE_10__ {TYPE_3__* al_mnt; } ;
struct TYPE_9__ {int (* mount_fs ) (TYPE_4__*,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

int
FUNC_4(opaque_t VAR_2)
{
  am_node *VAR_3 = (am_node *) VAR_2;
  mntfs *VAR_4 = VAR_3->am_al->al_mnt;
  int VAR_5 = 0;






    if (!(VAR_4->mf_flags & VAR_1))
      VAR_5 = VAR_4->mf_ops->mount_fs(VAR_3, VAR_4);

  if (VAR_5 > 0)
    FUNC_1("mount_node: call to mf_ops->mount_fs(%s) failed: %s",
  VAR_3->am_path, FUNC_2(VAR_5));
  return VAR_5;
}
