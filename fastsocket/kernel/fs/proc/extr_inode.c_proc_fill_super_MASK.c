
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_blocksize; int s_blocksize_bits; int s_time_gran; int s_root; int * s_op; int s_magic; } ;
struct inode {scalar_t__ i_gid; scalar_t__ i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*) ;
 struct inode* FUNC_5 (struct super_block*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_6(struct super_block *VAR_8)
{
 struct inode * VAR_9;

 VAR_8->s_flags |= VAR_1 | VAR_3 | VAR_2;
 VAR_8->s_blocksize = 1024;
 VAR_8->s_blocksize_bits = 10;
 VAR_8->s_magic = VAR_5;
 VAR_8->s_op = &VAR_7;
 VAR_8->s_time_gran = 1;

 FUNC_1(&VAR_6);
 VAR_9 = FUNC_5(VAR_8, VAR_4, &VAR_6);
 if (!VAR_9)
  goto out_no_root;
 VAR_9->i_uid = 0;
 VAR_9->i_gid = 0;
 VAR_8->s_root = FUNC_0(VAR_9);
 if (!VAR_8->s_root)
  goto out_no_root;
 return 0;

out_no_root:
 FUNC_4("proc_read_super: get root inode failed\n");
 FUNC_3(VAR_9);
 FUNC_2(&VAR_6);
 return -VAR_0;
}
