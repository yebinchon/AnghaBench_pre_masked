
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct cgroupfs_root* s_fs_info; } ;
struct cgroupfs_root {scalar_t__ subsys_bits; int name; } ;
struct cgroup_sb_opts {scalar_t__ subsys_bits; scalar_t__ none; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 struct cgroup_sb_opts *VAR_2 = VAR_1;
 struct cgroupfs_root *VAR_3 = VAR_0->s_fs_info;


 if (VAR_2->name && FUNC_0(VAR_2->name, VAR_3->name))
  return 0;





 if ((VAR_2->subsys_bits || VAR_2->none)
     && (VAR_2->subsys_bits != VAR_3->subsys_bits))
  return 0;

 return 1;
}
