
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_end; int vm_start; scalar_t__ vm_pgoff; struct file* vm_file; } ;
struct seq_file {int dummy; } ;
struct inode {unsigned long i_ino; TYPE_2__* i_sb; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
typedef unsigned long long loff_t ;
typedef int dev_t ;
struct TYPE_5__ {int s_dev; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct seq_file*,TYPE_3__*,char*) ;
 int FUNC_3 (struct seq_file*,char*,int,char,...) ;
 int FUNC_4 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_6, struct vm_area_struct *VAR_7)
{
 unsigned long VAR_8 = 0;
 struct file *VAR_9;
 dev_t VAR_10 = 0;
 int VAR_11, VAR_12;
 unsigned long long VAR_13 = 0;

 VAR_11 = VAR_7->vm_flags;
 VAR_9 = VAR_7->vm_file;

 if (VAR_9) {
  struct inode *VAR_14 = VAR_7->vm_file->f_path.dentry->d_inode;
  VAR_10 = VAR_14->i_sb->s_dev;
  VAR_8 = VAR_14->i_ino;
  VAR_13 = (loff_t)VAR_7->vm_pgoff << VAR_0;
 }

 FUNC_3(VAR_6,
     "%08lx-%08lx %c%c%c%c %08llx %02x:%02x %lu %n",
     VAR_7->vm_start,
     VAR_7->vm_end,
     VAR_11 & VAR_3 ? 'r' : '-',
     VAR_11 & VAR_5 ? 'w' : '-',
     VAR_11 & VAR_1 ? 'x' : '-',
     VAR_11 & VAR_2 ? VAR_11 & VAR_4 ? 'S' : 's' : 'p',
     VAR_13,
     FUNC_0(VAR_10), FUNC_1(VAR_10), VAR_8, &VAR_12);

 if (VAR_9) {
  VAR_12 = 25 + sizeof(void *) * 6 - VAR_12;
  if (VAR_12 < 1)
   VAR_12 = 1;
  FUNC_3(VAR_6, "%*c", VAR_12, ' ');
  FUNC_2(VAR_6, &VAR_9->f_path, "");
 }

 FUNC_4(VAR_6, '\n');
 return 0;
}
