
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct ocfs2_local_disk_dqblk {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0, int VAR_1, loff_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);

 return ((VAR_2 >> VAR_0->s_blocksize_bits) -
   FUNC_0(VAR_0, VAR_1) - 1) * VAR_3
        + ((unsigned int)(VAR_2 & ((1 << VAR_0->s_blocksize_bits) - 1))) /
   sizeof(struct ocfs2_local_disk_dqblk);
}
