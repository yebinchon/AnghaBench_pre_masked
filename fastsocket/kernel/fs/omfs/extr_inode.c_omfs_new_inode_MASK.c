
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct omfs_sb_info {int s_sys_blocksize; int s_mirrors; } ;
struct inode {int i_mode; int i_size; int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; TYPE_1__* i_mapping; int i_gid; int i_uid; int i_ino; int i_sb; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 struct omfs_sb_info* FUNC_1 (int ) ;

 int VAR_2 ;

 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int *,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct inode *FUNC_11(struct inode *VAR_8, int VAR_9)
{
 struct inode *VAR_10;
 u64 VAR_11;
 int VAR_12;
 int VAR_13;
 struct omfs_sb_info *VAR_14 = FUNC_1(VAR_8->i_sb);

 VAR_10 = FUNC_9(VAR_8->i_sb);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_10(VAR_8->i_sb, VAR_14->s_mirrors, VAR_14->s_mirrors,
   &VAR_11, &VAR_13);
 if (VAR_12)
  goto fail;

 VAR_10->i_ino = VAR_11;
 VAR_10->i_mode = VAR_9;
 VAR_10->i_uid = FUNC_3();
 VAR_10->i_gid = FUNC_2();
 VAR_10->i_mapping->a_ops = &VAR_3;

 VAR_10->i_atime = VAR_10->i_mtime = VAR_10->i_ctime = VAR_0;
 switch (VAR_9 & VAR_2) {
 case 129:
  VAR_10->i_op = &VAR_4;
  VAR_10->i_fop = &VAR_5;
  VAR_10->i_size = VAR_14->s_sys_blocksize;
  FUNC_4(VAR_10);
  break;
 case 128:
  VAR_10->i_op = &VAR_6;
  VAR_10->i_fop = &VAR_7;
  VAR_10->i_size = 0;
  break;
 }

 FUNC_5(VAR_10);
 FUNC_8(VAR_10);
 return VAR_10;
fail:
 FUNC_7(VAR_10);
 FUNC_6(VAR_10);
 return FUNC_0(VAR_12);
}
