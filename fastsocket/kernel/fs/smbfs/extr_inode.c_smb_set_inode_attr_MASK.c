
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct smb_inode_info {int oldmtime; int attr; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct smb_fattr {scalar_t__ f_size; int attr; int f_atime; TYPE_1__ f_mtime; int f_blocks; int f_ctime; int f_gid; int f_uid; int f_nlink; int f_mode; } ;
struct inode {scalar_t__ i_size; int i_mode; TYPE_1__ i_mtime; int i_ino; int i_atime; int i_blocks; int i_ctime; int i_gid; int i_uid; int i_nlink; } ;
typedef scalar_t__ loff_t ;


 struct smb_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,long,long,long,long) ;
 int FUNC_3 (struct inode*) ;
 int VAR_0 ;

void
FUNC_4(struct inode *VAR_1, struct smb_fattr *VAR_2)
{
 struct smb_inode_info *VAR_3 = FUNC_0(VAR_1);





 time_t VAR_4 = VAR_1->i_mtime.tv_sec;
 loff_t VAR_5 = VAR_1->i_size;

 VAR_1->i_mode = VAR_2->f_mode;
 VAR_1->i_nlink = VAR_2->f_nlink;
 VAR_1->i_uid = VAR_2->f_uid;
 VAR_1->i_gid = VAR_2->f_gid;
 VAR_1->i_ctime = VAR_2->f_ctime;
 VAR_1->i_blocks = VAR_2->f_blocks;
 VAR_1->i_size = VAR_2->f_size;
 VAR_1->i_mtime = VAR_2->f_mtime;
 VAR_1->i_atime = VAR_2->f_atime;
 VAR_3->attr = VAR_2->attr;




 VAR_3->oldmtime = VAR_0;

 if (VAR_1->i_mtime.tv_sec != VAR_4 || VAR_1->i_size != VAR_5) {
  FUNC_2("%ld changed, old=%ld, new=%ld, oz=%ld, nz=%ld\n",
   VAR_1->i_ino,
   (long) VAR_4, (long) VAR_1->i_mtime.tv_sec,
   (long) VAR_5, (long) VAR_1->i_size);

  if (!FUNC_1(VAR_1->i_mode))
   FUNC_3(VAR_1);
 }
}
