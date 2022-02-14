
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_prev; scalar_t__ vm_pgoff; struct file* vm_file; struct mm_struct* vm_mm; } ;
struct seq_file {int dummy; } ;
struct mm_struct {unsigned long start_brk; unsigned long brk; unsigned long start_stack; } ;
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct seq_file*,int) ;
 int FUNC_4 (struct seq_file*,TYPE_3__*,char*) ;
 int FUNC_5 (struct seq_file*,char*,unsigned long,unsigned long,char,char,char,char,unsigned long long,int ,int ,unsigned long,int*) ;
 int FUNC_6 (struct seq_file*,char) ;
 int FUNC_7 (struct seq_file*,char const*) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct seq_file *VAR_7, struct vm_area_struct *VAR_8)
{
 struct mm_struct *VAR_9 = VAR_8->vm_mm;
 struct file *VAR_10 = VAR_8->vm_file;
 int VAR_11 = VAR_8->vm_flags;
 unsigned long VAR_12 = 0;
 unsigned long long VAR_13 = 0;
 unsigned long VAR_14;
 dev_t VAR_15 = 0;
 int VAR_16;

 if (VAR_10) {
  struct inode *VAR_17 = VAR_8->vm_file->f_path.dentry->d_inode;
  VAR_15 = VAR_17->i_sb->s_dev;
  VAR_12 = VAR_17->i_ino;
  VAR_13 = ((loff_t)VAR_8->vm_pgoff) << VAR_0;
 }


 VAR_14 = VAR_8->vm_start;
 if (VAR_8->vm_flags & VAR_3)
  if (!FUNC_8(VAR_8->vm_prev, VAR_8->vm_start))
   VAR_14 += VAR_1;

 FUNC_5(VAR_7, "%08lx-%08lx %c%c%c%c %08llx %02x:%02x %lu %n",
   VAR_14,
   VAR_8->vm_end,
   VAR_11 & VAR_5 ? 'r' : '-',
   VAR_11 & VAR_6 ? 'w' : '-',
   VAR_11 & VAR_2 ? 'x' : '-',
   VAR_11 & VAR_4 ? 's' : 'p',
   VAR_13,
   FUNC_0(VAR_15), FUNC_1(VAR_15), VAR_12, &VAR_16);





 if (VAR_10) {
  FUNC_3(VAR_7, VAR_16);
  FUNC_4(VAR_7, &VAR_10->f_path, "\n");
 } else {
  const char *VAR_18 = FUNC_2(VAR_8);
  if (!VAR_18) {
   if (VAR_9) {
    if (VAR_8->vm_start <= VAR_9->start_brk &&
      VAR_8->vm_end >= VAR_9->brk) {
     VAR_18 = "[heap]";
    } else if (VAR_8->vm_start <= VAR_9->start_stack &&
        VAR_8->vm_end >= VAR_9->start_stack) {
     VAR_18 = "[stack]";
    }
   } else {
    VAR_18 = "[vdso]";
   }
  }
  if (VAR_18) {
   FUNC_3(VAR_7, VAR_16);
   FUNC_7(VAR_7, VAR_18);
  }
 }
 FUNC_6(VAR_7, '\n');
}
