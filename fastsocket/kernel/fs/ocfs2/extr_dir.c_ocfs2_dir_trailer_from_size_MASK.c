
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_block_trailer {int dummy; } ;



struct ocfs2_dir_block_trailer *FUNC_0(int VAR_0,
           void *VAR_1)
{
 char *VAR_2 = VAR_1;

 VAR_2 += VAR_0 - sizeof(struct ocfs2_dir_block_trailer);
 return (struct ocfs2_dir_block_trailer *)VAR_2;
}
