
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tn_dirhead; } ;
struct tmpfs_node {TYPE_2__ tn_dir; } ;
struct TYPE_7__ {int td_duphead; } ;
struct tmpfs_dirent {TYPE_3__ ud; } ;
struct tmpfs_dir_cursor {struct tmpfs_dirent* tdc_current; struct tmpfs_dirent* tdc_tree; } ;
struct TYPE_5__ {int entries; } ;
struct TYPE_8__ {TYPE_1__ td_dup; } ;


 struct tmpfs_dirent* FUNC_0 (int *) ;
 struct tmpfs_dirent* FUNC_1 (struct tmpfs_dirent*,int ) ;
 int FUNC_2 (int ) ;
 struct tmpfs_dirent* FUNC_3 (int ,int *,struct tmpfs_dirent*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct tmpfs_dirent*) ;
 scalar_t__ FUNC_5 (struct tmpfs_dirent*) ;
 TYPE_4__ VAR_1 ;

struct tmpfs_dirent *
FUNC_6(struct tmpfs_node *VAR_2, struct tmpfs_dir_cursor *VAR_3)
{
 struct tmpfs_dirent *VAR_4;

 FUNC_2(VAR_3->tdc_tree != ((void*)0));
 if (FUNC_4(VAR_3->tdc_current)) {
  VAR_3->tdc_current = FUNC_1(VAR_3->tdc_current, VAR_1.td_dup.entries);
  if (VAR_3->tdc_current != ((void*)0))
   return (VAR_3->tdc_current);
 }
 VAR_3->tdc_tree = VAR_3->tdc_current = FUNC_3(VAR_0,
     &VAR_2->tn_dir.tn_dirhead, VAR_3->tdc_tree);
 if ((VAR_4 = VAR_3->tdc_current) != ((void*)0) && FUNC_5(VAR_4)) {
  VAR_3->tdc_current = FUNC_0(&VAR_4->ud.td_duphead);
  FUNC_2(VAR_3->tdc_current != ((void*)0));
 }

 return (VAR_3->tdc_current);
}
