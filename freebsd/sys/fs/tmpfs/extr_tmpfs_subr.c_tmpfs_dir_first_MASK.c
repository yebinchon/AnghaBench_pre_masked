
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tn_dirhead; } ;
struct tmpfs_node {TYPE_1__ tn_dir; } ;
struct TYPE_4__ {int td_duphead; } ;
struct tmpfs_dirent {TYPE_2__ ud; } ;
struct tmpfs_dir_cursor {struct tmpfs_dirent* tdc_current; struct tmpfs_dirent* tdc_tree; } ;


 struct tmpfs_dirent* FUNC_0 (int *) ;
 struct tmpfs_dirent* FUNC_1 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tmpfs_dirent*) ;

struct tmpfs_dirent *
FUNC_3(struct tmpfs_node *VAR_1, struct tmpfs_dir_cursor *VAR_2)
{
 struct tmpfs_dirent *VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_1->tn_dir.tn_dirhead);
 VAR_2->tdc_tree = VAR_3;
 if (VAR_3 != ((void*)0) && FUNC_2(VAR_3))
  VAR_3 = FUNC_0(&VAR_3->ud.td_duphead);
 VAR_2->tdc_current = VAR_3;

 return (VAR_2->tdc_current);
}
