
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
struct ctl_table_header {struct ctl_table* attached_by; struct ctl_table* attached_to; struct ctl_table* ctl_table; } ;
struct ctl_table {struct ctl_table* child; } ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int,int,int ,int ) ;
struct TYPE_4__ {struct ctl_table* sysctl_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 int FUNC_3 (int) ;
 struct ctl_table_header* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct ctl_table_header*,struct ctl_table*,unsigned long*,struct file*,void*,scalar_t__ (*) (void*,char*,int,int,int ,int )) ;
 int FUNC_7 (struct ctl_table_header*) ;
 struct ctl_table_header* FUNC_8 (struct ctl_table_header*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2, void *VAR_3, filldir_t VAR_4)
{
 struct dentry *VAR_5 = VAR_2->f_path.dentry;
 struct inode *VAR_6 = VAR_5->d_inode;
 struct ctl_table_header *VAR_7 = FUNC_4(VAR_6);
 struct ctl_table *VAR_8 = FUNC_1(VAR_6)->sysctl_entry;
 struct ctl_table_header *VAR_9 = ((void*)0);
 unsigned long VAR_10;
 int VAR_11 = -VAR_1;

 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7);

 if (VAR_8 && !VAR_8->child) {
  FUNC_3(1);
  goto out;
 }

 VAR_8 = VAR_8 ? VAR_8->child : VAR_7->ctl_table;

 VAR_11 = 0;

 if (VAR_2->f_pos == 0) {
  if (VAR_4(VAR_3, ".", 1, VAR_2->f_pos,
    VAR_6->i_ino, VAR_0) < 0)
   goto out;
  VAR_2->f_pos++;
 }
 if (VAR_2->f_pos == 1) {
  if (VAR_4(VAR_3, "..", 2, VAR_2->f_pos,
    FUNC_5(VAR_5), VAR_0) < 0)
   goto out;
  VAR_2->f_pos++;
 }
 VAR_10 = 2;

 VAR_11 = FUNC_6(VAR_7, VAR_8, &VAR_10, VAR_2, VAR_3, VAR_4);
 if (VAR_11)
  goto out;

 for (VAR_9 = FUNC_8(((void*)0)); VAR_9; VAR_9 = FUNC_8(VAR_9)) {
  if (VAR_9->attached_to != VAR_8)
   continue;
  VAR_11 = FUNC_6(VAR_9, VAR_9->attached_by, &VAR_10, VAR_2, VAR_3, VAR_4);
  if (VAR_11) {
   FUNC_7(VAR_9);
   break;
  }
 }
 VAR_11 = 1;
out:
 FUNC_7(VAR_7);
 return VAR_11;
}
