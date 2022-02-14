
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; int name; int hash; } ;
struct inode {int i_mode; int i_ino; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; int * d_op; int d_sb; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {int procname; } ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,int ,int ,int ,int ,unsigned int) ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 struct inode* FUNC_5 (int ,struct ctl_table_header*,struct ctl_table*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, void *VAR_4,
    filldir_t VAR_5,
    struct ctl_table_header *VAR_6,
    struct ctl_table *VAR_7)
{
 struct dentry *VAR_8, *VAR_9 = VAR_3->f_path.dentry;
 struct inode *VAR_10;
 struct qstr VAR_11;
 ino_t VAR_12 = 0;
 unsigned VAR_13 = VAR_0;

 VAR_11.name = VAR_7->procname;
 VAR_11.len = FUNC_6(VAR_7->procname);
 VAR_11.hash = FUNC_4(VAR_11.name, VAR_11.len);

 VAR_8 = FUNC_2(VAR_9, &VAR_11);
 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_9, &VAR_11);
  if (VAR_8) {
   VAR_10 = FUNC_5(VAR_9->d_sb, VAR_6, VAR_7);
   if (!VAR_10) {
    FUNC_3(VAR_8);
    return -VAR_1;
   } else {
    VAR_8->d_op = &VAR_2;
    FUNC_0(VAR_8, VAR_10);
   }
  } else {
   return -VAR_1;
  }
 }
 VAR_10 = VAR_8->d_inode;
 VAR_12 = VAR_10->i_ino;
 VAR_13 = VAR_10->i_mode >> 12;
 FUNC_3(VAR_8);
 return !!VAR_5(VAR_4, VAR_11.name, VAR_11.len, VAR_3->f_pos, VAR_12, VAR_13);
}
