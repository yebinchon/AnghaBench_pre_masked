
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nfs_common_args {int flags; } ;
struct TYPE_7__ {int flags; scalar_t__ symttl; } ;
typedef TYPE_1__ nfs_args_t ;
struct TYPE_8__ {int mnt_dir; } ;
typedef TYPE_2__ mntent_t ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nfs_common_args*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,struct nfs_common_args) ;
 int FUNC_2 (struct nfs_common_args*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;

void
FUNC_4(nfs_args_t *VAR_7, mntent_t *VAR_8)
{
  struct nfs_common_args VAR_9;
  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.flags = VAR_7->flags;
  FUNC_0(&VAR_9, VAR_8);
  FUNC_1(VAR_7, VAR_9);
}
