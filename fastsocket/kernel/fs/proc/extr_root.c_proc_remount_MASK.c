
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct pid_namespace* s_fs_info; } ;
struct pid_namespace {int dummy; } ;


 int FUNC_0 (char*,struct pid_namespace*) ;

int FUNC_1(struct super_block *VAR_0, int *VAR_1, char *VAR_2)
{
 struct pid_namespace *VAR_3 = VAR_0->s_fs_info;
 return !FUNC_0(VAR_2, VAR_3);
}
