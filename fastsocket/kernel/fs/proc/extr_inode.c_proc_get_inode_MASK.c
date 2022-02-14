
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct proc_dir_entry {TYPE_1__* proc_fops; scalar_t__ proc_iops; scalar_t__ nlink; scalar_t__ size; int gid; int uid; scalar_t__ mode; } ;
struct inode {int i_state; TYPE_1__* i_fop; scalar_t__ i_mode; scalar_t__ i_op; scalar_t__ i_nlink; scalar_t__ i_size; int i_gid; int i_uid; int i_ctime; int i_atime; int i_mtime; } ;
struct TYPE_5__ {struct proc_dir_entry* pde; scalar_t__ fd; } ;
struct TYPE_4__ {int compat_ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 struct inode* FUNC_3 (struct super_block*,unsigned int) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct inode*) ;

struct inode *FUNC_5(struct super_block *VAR_4, unsigned int VAR_5,
    struct proc_dir_entry *VAR_6)
{
 struct inode * VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_7)
  return ((void*)0);
 if (VAR_7->i_state & VAR_1) {
  VAR_7->i_mtime = VAR_7->i_atime = VAR_7->i_ctime = VAR_0;
  FUNC_0(VAR_7)->fd = 0;
  FUNC_0(VAR_7)->pde = VAR_6;

  if (VAR_6->mode) {
   VAR_7->i_mode = VAR_6->mode;
   VAR_7->i_uid = VAR_6->uid;
   VAR_7->i_gid = VAR_6->gid;
  }
  if (VAR_6->size)
   VAR_7->i_size = VAR_6->size;
  if (VAR_6->nlink)
   VAR_7->i_nlink = VAR_6->nlink;
  if (VAR_6->proc_iops)
   VAR_7->i_op = VAR_6->proc_iops;
  if (VAR_6->proc_fops) {
   if (FUNC_1(VAR_7->i_mode)) {






     VAR_7->i_fop = &VAR_2;
   } else {
    VAR_7->i_fop = VAR_6->proc_fops;
   }
  }
  FUNC_4(VAR_7);
 } else
        FUNC_2(VAR_6);
 return VAR_7;
}
