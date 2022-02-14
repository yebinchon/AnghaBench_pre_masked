
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v7_super_block {int s_time; int s_ninode; int s_nfree; } ;
struct sysv_sb_info {struct buffer_head* s_bh2; struct buffer_head* s_bh1; int s_bytesex; int s_type; scalar_t__ s_block_base; struct super_block* s_sb; } ;
struct sysv_inode {int i_size; int i_mode; } ;
struct super_block {int s_id; struct sysv_sb_info* s_fs_info; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct super_block*,int,int) ;
 int FUNC_2 (struct sysv_sb_info*,int ) ;
 int FUNC_3 (struct sysv_sb_info*,int ) ;
 int FUNC_4 (struct sysv_sb_info*) ;
 struct sysv_sb_info* FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 struct buffer_head* FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_8, void *VAR_9, int VAR_10)
{
 struct sysv_sb_info *VAR_11;
 struct buffer_head *VAR_12, *VAR_13 = ((void*)0);
 struct v7_super_block *VAR_14;
 struct sysv_inode *VAR_15;

 if (440 != sizeof (struct v7_super_block))
  FUNC_6("V7 FS: bad super-block size");
 if (64 != sizeof (struct sysv_inode))
  FUNC_6("sysv fs: bad i-node size");

 VAR_11 = FUNC_5(sizeof(struct sysv_sb_info), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->s_sb = VAR_8;
 VAR_11->s_block_base = 0;
 VAR_11->s_type = VAR_3;
 VAR_11->s_bytesex = VAR_0;
 VAR_8->s_fs_info = VAR_11;

 FUNC_9(VAR_8, 512);

 if ((VAR_12 = FUNC_8(VAR_8, 1)) == ((void*)0)) {
  if (!VAR_10)
   FUNC_7("VFS: unable to read V7 FS superblock on "
          "device %s.\n", VAR_8->s_id);
  goto failed;
 }


 VAR_14 = (struct v7_super_block *) VAR_12->b_data;
 if (FUNC_2(VAR_11, VAR_14->s_nfree) > VAR_6 ||
     FUNC_2(VAR_11, VAR_14->s_ninode) > VAR_7 ||
     FUNC_3(VAR_11, VAR_14->s_time) == 0)
  goto failed;



 if ((VAR_13 = FUNC_8(VAR_8, 2)) == ((void*)0))
  goto failed;
 VAR_15 = (struct sysv_inode *)(VAR_13->b_data + 64);
 if ((FUNC_2(VAR_11, VAR_15->i_mode) & ~0777) != VAR_5 ||
     (FUNC_3(VAR_11, VAR_15->i_size) == 0) ||
     (FUNC_3(VAR_11, VAR_15->i_size) & 017) != 0)
  goto failed;
 FUNC_0(VAR_13);
 VAR_13 = ((void*)0);

 VAR_11->s_bh1 = VAR_12;
 VAR_11->s_bh2 = VAR_12;
 if (FUNC_1(VAR_8, VAR_10, 1))
  return 0;

failed:
 FUNC_0(VAR_13);
 FUNC_0(VAR_12);
 FUNC_4(VAR_11);
 return -VAR_1;
}
