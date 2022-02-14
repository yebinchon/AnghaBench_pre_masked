
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mnttab {char* mnt_special; int mnt_fstype; int member_0; } ;
struct TYPE_8__ {struct mnttab mtn_mt; } ;
typedef TYPE_1__ mnttab_node_t ;
struct TYPE_9__ {int libzfs_mnttab_cache_lock; int libzfs_mnttab_cache; int libzfs_mnttab; int libzfs_mnttab_enable; } ;
typedef TYPE_2__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,struct mnttab*,struct mnttab*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

int
FUNC_8(libzfs_handle_t *VAR_2, const char *VAR_3,
    struct mnttab *VAR_4)
{
 mnttab_node_t VAR_5;
 mnttab_node_t *VAR_6;
 int VAR_7 = VAR_0;

 if (!VAR_2->libzfs_mnttab_enable) {
  struct mnttab VAR_8 = { 0 };

  if (FUNC_1(&VAR_2->libzfs_mnttab_cache))
   FUNC_3(VAR_2);
  FUNC_7(VAR_2->libzfs_mnttab);
  VAR_8.mnt_special = (char *)VAR_3;
  VAR_8.mnt_fstype = VAR_1;
  if (FUNC_2(VAR_2->libzfs_mnttab, VAR_4, &VAR_8) == 0)
   return (0);
  else
   return (VAR_0);
 }

 FUNC_5(&VAR_2->libzfs_mnttab_cache_lock);
 if (FUNC_1(&VAR_2->libzfs_mnttab_cache) == 0)
  FUNC_4(VAR_2);

 VAR_5.mtn_mt.mnt_special = (char *)VAR_3;
 VAR_6 = FUNC_0(&VAR_2->libzfs_mnttab_cache, &VAR_5, ((void*)0));
 if (VAR_6) {
  *VAR_4 = VAR_6->mtn_mt;
  VAR_7 = 0;
 }
 FUNC_6(&VAR_2->libzfs_mnttab_cache_lock);
 return (VAR_7);
}
