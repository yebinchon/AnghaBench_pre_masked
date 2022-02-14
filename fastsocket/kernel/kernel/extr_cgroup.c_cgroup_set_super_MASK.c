
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; TYPE_1__* s_fs_info; } ;
struct cgroup_sb_opts {TYPE_1__* new_root; int none; int subsys_bits; } ;
struct TYPE_2__ {struct super_block* sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct super_block*,int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_5, void *VAR_6)
{
 int VAR_7;
 struct cgroup_sb_opts *VAR_8 = VAR_6;


 if (!VAR_8->new_root)
  return -VAR_1;

 FUNC_0(!VAR_8->subsys_bits && !VAR_8->none);

 VAR_7 = FUNC_1(VAR_5, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_5->s_fs_info = VAR_8->new_root;
 VAR_8->new_root->sb = VAR_5;

 VAR_5->s_blocksize = VAR_3;
 VAR_5->s_blocksize_bits = VAR_2;
 VAR_5->s_magic = VAR_0;
 VAR_5->s_op = &VAR_4;

 return 0;
}
