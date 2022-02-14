
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int * d_op; struct qstr d_name; } ;
struct ctl_table_header {struct ctl_table* attached_by; struct ctl_table* attached_to; struct ctl_table* ctl_table; } ;
struct ctl_table {struct ctl_table* child; } ;
struct TYPE_2__ {struct ctl_table* sysctl_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct ctl_table_header*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ctl_table_header*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 struct ctl_table* FUNC_6 (struct ctl_table*,struct qstr*) ;
 struct ctl_table_header* FUNC_7 (struct inode*) ;
 int VAR_2 ;
 struct inode* FUNC_8 (int ,struct ctl_table_header*,struct ctl_table*) ;
 int FUNC_9 (struct ctl_table_header*) ;
 struct ctl_table_header* FUNC_10 (struct ctl_table_header*) ;

__attribute__((used)) static struct dentry *FUNC_11(struct inode *VAR_3, struct dentry *VAR_4,
     struct nameidata *VAR_5)
{
 struct ctl_table_header *VAR_6 = FUNC_7(VAR_3);
 struct ctl_table *VAR_7 = FUNC_3(VAR_3)->sysctl_entry;
 struct ctl_table_header *VAR_8 = ((void*)0);
 struct qstr *VAR_9 = &VAR_4->d_name;
 struct ctl_table *VAR_10;
 struct inode *VAR_11;
 struct dentry *VAR_12 = FUNC_1(-VAR_0);

 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 if (VAR_7 && !VAR_7->child) {
  FUNC_4(1);
  goto out;
 }

 VAR_7 = VAR_7 ? VAR_7->child : VAR_6->ctl_table;

 VAR_10 = FUNC_6(VAR_7, VAR_9);
 if (!VAR_10) {
  for (VAR_8 = FUNC_10(((void*)0)); VAR_8; VAR_8 = FUNC_10(VAR_8)) {
   if (VAR_8->attached_to != VAR_7)
    continue;
   VAR_10 = FUNC_6(VAR_8->attached_by, VAR_9);
   if (VAR_10)
    break;
  }
 }

 if (!VAR_10)
  goto out;

 VAR_12 = FUNC_1(-VAR_1);
 VAR_11 = FUNC_8(VAR_3->i_sb, VAR_8 ? VAR_8 : VAR_6, VAR_10);
 if (VAR_8)
  FUNC_9(VAR_8);

 if (!VAR_11)
  goto out;

 VAR_12 = ((void*)0);
 VAR_4->d_op = &VAR_2;
 FUNC_5(VAR_4, VAR_11);

out:
 FUNC_9(VAR_6);
 return VAR_12;
}
