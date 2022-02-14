
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_fattr {int f_mode; int attr; int f_blocks; int f_atime; int f_ctime; int f_mtime; int f_size; int f_gid; int f_uid; int f_ino; int f_nlink; } ;
struct inode {int i_mode; int i_blocks; int i_atime; int i_ctime; int i_mtime; int i_size; int i_gid; int i_uid; int i_ino; int i_nlink; } ;
struct TYPE_2__ {int attr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct smb_fattr*,int ,int) ;

void
FUNC_2(struct inode *VAR_2, struct smb_fattr *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(struct smb_fattr));
 VAR_3->f_mode = VAR_2->i_mode;
 VAR_3->f_nlink = VAR_2->i_nlink;
 VAR_3->f_ino = VAR_2->i_ino;
 VAR_3->f_uid = VAR_2->i_uid;
 VAR_3->f_gid = VAR_2->i_gid;
 VAR_3->f_size = VAR_2->i_size;
 VAR_3->f_mtime = VAR_2->i_mtime;
 VAR_3->f_ctime = VAR_2->i_ctime;
 VAR_3->f_atime = VAR_2->i_atime;
 VAR_3->f_blocks = VAR_2->i_blocks;

 VAR_3->attr = FUNC_0(VAR_2)->attr;



 if (VAR_3->f_mode & VAR_0)
  VAR_3->attr &= ~VAR_1;
 else
  VAR_3->attr |= VAR_1;
}
