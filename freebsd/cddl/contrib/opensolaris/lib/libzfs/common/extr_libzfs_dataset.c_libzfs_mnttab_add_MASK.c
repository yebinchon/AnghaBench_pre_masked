
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* mnt_mntopts; void* mnt_fstype; void* mnt_mountp; void* mnt_special; } ;
struct TYPE_10__ {TYPE_1__ mtn_mt; } ;
typedef TYPE_2__ mnttab_node_t ;
struct TYPE_11__ {int libzfs_mnttab_cache_lock; int libzfs_mnttab_cache; } ;
typedef TYPE_3__ libzfs_handle_t ;


 char const* VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int) ;
 void* FUNC_5 (TYPE_3__*,char const*) ;

void
FUNC_6(libzfs_handle_t *VAR_1, const char *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 mnttab_node_t *VAR_5;

 FUNC_2(&VAR_1->libzfs_mnttab_cache_lock);
 if (FUNC_1(&VAR_1->libzfs_mnttab_cache) == 0) {
  VAR_5 = FUNC_4(VAR_1, sizeof (mnttab_node_t));
  VAR_5->mtn_mt.mnt_special = FUNC_5(VAR_1, VAR_2);
  VAR_5->mtn_mt.mnt_mountp = FUNC_5(VAR_1, VAR_3);
  VAR_5->mtn_mt.mnt_fstype = FUNC_5(VAR_1, VAR_0);
  VAR_5->mtn_mt.mnt_mntopts = FUNC_5(VAR_1, VAR_4);
  FUNC_0(&VAR_1->libzfs_mnttab_cache, VAR_5);
 }
 FUNC_3(&VAR_1->libzfs_mnttab_cache_lock);
}
