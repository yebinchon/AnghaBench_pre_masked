
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int cconn; } ;
struct inode {int i_sb; } ;
struct file_lock {int fl_flags; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int ip_blkno; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int ,struct file*,int,struct file_lock*) ;

int FUNC_4(struct file *VAR_2, int VAR_3, struct file_lock *VAR_4)
{
 struct inode *VAR_5 = VAR_2->f_mapping->host;
 struct ocfs2_super *VAR_6 = FUNC_1(VAR_5->i_sb);

 if (!(VAR_4->fl_flags & VAR_1))
  return -VAR_0;
 if (FUNC_2(VAR_5))
  return -VAR_0;

 return FUNC_3(VAR_6->cconn, FUNC_0(VAR_5)->ip_blkno, VAR_2, VAR_3, VAR_4);
}
