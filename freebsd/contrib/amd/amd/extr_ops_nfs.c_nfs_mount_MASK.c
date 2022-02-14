
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mf_info; int mf_mount; scalar_t__ mf_private; int * mf_mopts; TYPE_1__* mf_server; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_11__ {int * mnt_opts; } ;
typedef TYPE_3__ mntent_t ;
struct TYPE_12__ {int am_flags; } ;
typedef TYPE_4__ am_node ;
typedef int am_nfs_handle_t ;
struct TYPE_9__ {int fs_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(am_node *VAR_4, mntfs *VAR_5)
{
  int VAR_6 = 0;
  mntent_t VAR_7;

  if (!VAR_5->mf_private && VAR_5->mf_server->fs_version != 4) {
    FUNC_3(VAR_2, "Missing filehandle for %s", VAR_5->mf_info);
    return VAR_1;
  }

  if (VAR_5->mf_mopts == ((void*)0)) {
    FUNC_3(VAR_2, "Missing mount options for %s", VAR_5->mf_info);
    return VAR_1;
  }

  VAR_7.mnt_opts = VAR_5->mf_mopts;
  if (FUNC_0(&VAR_7, "softlookup") ||
      (FUNC_0(&VAR_7, "soft") && !FUNC_0(&VAR_7, "nosoftlookup")))
    VAR_4->am_flags |= VAR_0;

  VAR_6 = FUNC_2((am_nfs_handle_t *) VAR_5->mf_private,
         VAR_5->mf_mount,
         VAR_5->mf_info,
         VAR_5);

  if (VAR_6) {
    VAR_3 = VAR_6;
    FUNC_1("mount_nfs: %m");
  }

  return VAR_6;
}
