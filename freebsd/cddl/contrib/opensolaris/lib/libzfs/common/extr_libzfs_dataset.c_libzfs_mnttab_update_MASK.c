
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mnttab {int mnt_mntopts; int mnt_fstype; int mnt_mountp; int mnt_special; } ;
struct TYPE_9__ {void* mnt_mntopts; void* mnt_fstype; void* mnt_mountp; void* mnt_special; } ;
struct TYPE_10__ {TYPE_1__ mtn_mt; } ;
typedef TYPE_2__ mnttab_node_t ;
struct TYPE_11__ {int libzfs_mnttab_cache; int libzfs_mnttab; } ;
typedef TYPE_3__ libzfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,struct mnttab*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int) ;
 void* FUNC_5 (TYPE_3__*,int ) ;

void
FUNC_6(libzfs_handle_t *VAR_1)
{
 struct mnttab VAR_2;

 FUNC_2(VAR_1->libzfs_mnttab);
 while (FUNC_1(VAR_1->libzfs_mnttab, &VAR_2) == 0) {
  mnttab_node_t *VAR_3;

  if (FUNC_3(VAR_2.mnt_fstype, VAR_0) != 0)
   continue;
  VAR_3 = FUNC_4(VAR_1, sizeof (mnttab_node_t));
  VAR_3->mtn_mt.mnt_special = FUNC_5(VAR_1, VAR_2.mnt_special);
  VAR_3->mtn_mt.mnt_mountp = FUNC_5(VAR_1, VAR_2.mnt_mountp);
  VAR_3->mtn_mt.mnt_fstype = FUNC_5(VAR_1, VAR_2.mnt_fstype);
  VAR_3->mtn_mt.mnt_mntopts = FUNC_5(VAR_1, VAR_2.mnt_mntopts);
  FUNC_0(&VAR_1->libzfs_mnttab_cache, VAR_3);
 }
}
