
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {void* s_fs_info; } ;
struct nilfs_super_data {scalar_t__ sbi; } ;



__attribute__((used)) static int FUNC_0(struct super_block *VAR_0, void *VAR_1)
{
 struct nilfs_super_data *VAR_2 = VAR_1;

 return VAR_2->sbi && VAR_0->s_fs_info == (void *)VAR_2->sbi;
}
