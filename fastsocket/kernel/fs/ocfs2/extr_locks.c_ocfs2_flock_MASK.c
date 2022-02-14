
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_sb; } ;
struct file_lock {int fl_flags; scalar_t__ fl_type; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*,struct file_lock*) ;
 int FUNC_3 (struct file*,struct inode*,int,struct file_lock*) ;
 int FUNC_4 (struct file*,int,struct file_lock*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;

int FUNC_6(struct file *VAR_4, int VAR_5, struct file_lock *VAR_6)
{
 struct inode *VAR_7 = VAR_4->f_mapping->host;
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_7->i_sb);

 if (!(VAR_6->fl_flags & VAR_1))
  return -VAR_0;
 if (FUNC_1(VAR_7))
  return -VAR_0;

 if ((VAR_8->s_mount_opt & VAR_3) ||
     FUNC_5(VAR_8))
  return FUNC_2(VAR_4, VAR_6);

 if (VAR_6->fl_type == VAR_2)
  return FUNC_4(VAR_4, VAR_5, VAR_6);
 else
  return FUNC_3(VAR_4, VAR_7, VAR_5, VAR_6);
}
