
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {int mode; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int mode; } ;
struct TYPE_2__ {struct ctl_table* sysctl_entry; } ;


 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*,struct kstat*) ;
 struct ctl_table_header* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ctl_table_header*) ;

__attribute__((used)) static int FUNC_6(struct vfsmount *VAR_1, struct dentry *VAR_2, struct kstat *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct ctl_table_header *VAR_5 = FUNC_4(VAR_4);
 struct ctl_table *VAR_6 = FUNC_1(VAR_4)->sysctl_entry;

 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_5);

 FUNC_3(VAR_4, VAR_3);
 if (VAR_6)
  VAR_3->mode = (VAR_3->mode & VAR_0) | VAR_6->mode;

 FUNC_5(VAR_5);
 return 0;
}
