
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_11__ {int mf_flags; int mf_refc; int mf_mount; TYPE_1__* mf_ops; int mf_info; } ;
typedef TYPE_3__ mntfs ;
struct TYPE_12__ {int am_flags; TYPE_2__* am_al; int am_path; } ;
typedef TYPE_4__ am_node ;
struct TYPE_10__ {TYPE_3__* al_mnt; } ;
struct TYPE_9__ {int (* umount_fs ) (TYPE_4__*,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(opaque_t VAR_3)
{
  am_node *VAR_4 = (am_node *) VAR_3;
  mntfs *VAR_5 = VAR_4->am_al->al_mnt;
  int VAR_6 = 0;

  if (VAR_5->mf_flags & VAR_1) {



    FUNC_1("No-op unmount of error node %s", VAR_5->mf_info);
  } else {
    FUNC_1("Unmounting <%s> <%s> (%s) flags %x",
  VAR_4->am_path, VAR_5->mf_mount, VAR_5->mf_info, VAR_5->mf_flags);





      if (VAR_5->mf_refc == 1)
 VAR_6 = VAR_5->mf_ops->umount_fs(VAR_4, VAR_5);
  }


  VAR_5 = VAR_4->am_al->al_mnt;
  if (VAR_6) {
    VAR_2 = VAR_6;
    FUNC_1("%s: unmount: %m", VAR_5->mf_mount);
  }

  return VAR_6;
}
