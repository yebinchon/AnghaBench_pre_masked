
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct security_mnt_opts {int num_mnt_opts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_1,
          struct security_mnt_opts *VAR_2)
{
 if (FUNC_0(VAR_2->num_mnt_opts))
  return -VAR_0;
 return 0;
}
