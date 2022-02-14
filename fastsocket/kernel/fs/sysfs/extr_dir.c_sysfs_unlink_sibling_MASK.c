
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_dirent {TYPE_2__* s_parent; int name_node; int inode_node; } ;
struct TYPE_3__ {int name_tree; int inode_tree; int subdirs; } ;
struct TYPE_4__ {TYPE_1__ s_dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct sysfs_dirent*) ;

__attribute__((used)) static void FUNC_2(struct sysfs_dirent *VAR_1)
{
 if (FUNC_1(VAR_1) == VAR_0)
  VAR_1->s_parent->s_dir.subdirs--;

 FUNC_0(&VAR_1->inode_node, &VAR_1->s_parent->s_dir.inode_tree);
 FUNC_0(&VAR_1->name_node, &VAR_1->s_parent->s_dir.name_tree);
}
