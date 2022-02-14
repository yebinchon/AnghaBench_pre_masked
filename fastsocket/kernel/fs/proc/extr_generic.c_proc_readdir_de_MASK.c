
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {char* name; int namelen; unsigned int low_ino; int mode; struct proc_dir_entry* next; struct proc_dir_entry* subdir; } ;
struct inode {unsigned int i_ino; } ;
struct TYPE_3__ {TYPE_2__* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
typedef int (* filldir_t ) (void*,char*,int,int,unsigned int,int) ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc_dir_entry*) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 unsigned int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct proc_dir_entry *VAR_2, struct file *VAR_3, void *VAR_4,
  filldir_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 struct inode *VAR_8 = VAR_3->f_path.dentry->d_inode;
 int VAR_9 = 0;

 VAR_6 = VAR_8->i_ino;
 VAR_7 = VAR_3->f_pos;
 switch (VAR_7) {
  case 0:
   if (VAR_5(VAR_4, ".", 1, VAR_7, VAR_6, VAR_0) < 0)
    goto out;
   VAR_7++;
   VAR_3->f_pos++;

  case 1:
   if (VAR_5(VAR_4, "..", 2, VAR_7,
        FUNC_2(VAR_3->f_path.dentry),
        VAR_0) < 0)
    goto out;
   VAR_7++;
   VAR_3->f_pos++;

  default:
   FUNC_3(&VAR_1);
   VAR_2 = VAR_2->subdir;
   VAR_7 -= 2;
   for (;;) {
    if (!VAR_2) {
     VAR_9 = 1;
     FUNC_4(&VAR_1);
     goto out;
    }
    if (!VAR_7)
     break;
    VAR_2 = VAR_2->next;
    VAR_7--;
   }

   do {
    struct proc_dir_entry *VAR_10;


    FUNC_0(VAR_2);
    FUNC_4(&VAR_1);
    if (VAR_5(VAR_4, VAR_2->name, VAR_2->namelen, VAR_3->f_pos,
         VAR_2->low_ino, VAR_2->mode >> 12) < 0) {
     FUNC_1(VAR_2);
     goto out;
    }
    FUNC_3(&VAR_1);
    VAR_3->f_pos++;
    VAR_10 = VAR_2->next;
    FUNC_1(VAR_2);
    VAR_2 = VAR_10;
   } while (VAR_2);
   FUNC_4(&VAR_1);
 }
 VAR_9 = 1;
out:
 return VAR_9;
}
