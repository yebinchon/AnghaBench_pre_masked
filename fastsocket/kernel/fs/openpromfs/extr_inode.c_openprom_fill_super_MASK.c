
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_blocksize_bits; int s_time_gran; int s_root; int * s_op; int s_magic; int s_flags; } ;
struct TYPE_2__ {int node; } ;
struct op_inode_info {TYPE_1__ u; int type; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct op_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 struct inode* FUNC_6 (struct super_block*,int ) ;
 int VAR_5 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_6, void *VAR_7, int VAR_8)
{
 struct inode *VAR_9;
 struct op_inode_info *VAR_10;
 int VAR_11;

 VAR_6->s_flags |= VAR_1;
 VAR_6->s_blocksize = 1024;
 VAR_6->s_blocksize_bits = 10;
 VAR_6->s_magic = VAR_3;
 VAR_6->s_op = &VAR_5;
 VAR_6->s_time_gran = 1;
 VAR_9 = FUNC_6(VAR_6, VAR_2);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_2(VAR_9);
  goto out_no_root;
 }

 VAR_10 = FUNC_1(VAR_9);
 VAR_10->type = VAR_4;
 VAR_10->u.node = FUNC_5("/");

 VAR_6->s_root = FUNC_3(VAR_9);
 if (!VAR_6->s_root)
  goto out_no_root_dentry;
 return 0;

out_no_root_dentry:
 FUNC_4(VAR_9);
 VAR_11 = -VAR_0;
out_no_root:
 FUNC_7("openprom_fill_super: get root inode failed\n");
 return VAR_11;
}
