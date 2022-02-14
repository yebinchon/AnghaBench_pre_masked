
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {int s_firstinodezone; int s_block_base; unsigned int s_inodes_per_block_bits; unsigned int s_inodes_per_block_1; } ;
struct sysv_inode {int dummy; } ;
struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 struct buffer_head* FUNC_1 (struct super_block*,int) ;

struct sysv_inode *
FUNC_2(struct super_block *VAR_0, unsigned VAR_1, struct buffer_head **VAR_2)
{
 struct sysv_sb_info *VAR_3 = FUNC_0(VAR_0);
 struct sysv_inode *VAR_4;
 int VAR_5 = VAR_3->s_firstinodezone + VAR_3->s_block_base;

 VAR_5 += (VAR_1-1) >> VAR_3->s_inodes_per_block_bits;
 *VAR_2 = FUNC_1(VAR_0, VAR_5);
 if (!*VAR_2)
  return ((void*)0);
 VAR_4 = (struct sysv_inode *)(*VAR_2)->b_data;
 return VAR_4 + ((VAR_1-1) & VAR_3->s_inodes_per_block_1);
}
