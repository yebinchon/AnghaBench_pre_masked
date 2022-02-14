
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_ns_operations {int name; } ;
struct inode {int i_ino; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {struct proc_ns_operations* ns_ops; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 char* FUNC_1 (struct dentry*,char*,int,char*,int ,int ) ;

__attribute__((used)) static char *FUNC_2(struct dentry *VAR_0, char *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_0->d_inode;
 const struct proc_ns_operations *VAR_4 = FUNC_0(VAR_3)->ns_ops;

 return FUNC_1(VAR_0, VAR_1, VAR_2, "%s:[%lu]",
  VAR_4->name, VAR_3->i_ino);
}
