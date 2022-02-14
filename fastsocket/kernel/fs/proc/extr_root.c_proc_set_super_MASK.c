
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fs_info; } ;
struct pid_namespace {int dummy; } ;


 int FUNC_0 (struct pid_namespace*) ;
 int FUNC_1 (struct super_block*,int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0, void *VAR_1)
{
 struct pid_namespace *VAR_2;

 VAR_2 = (struct pid_namespace *)VAR_1;
 VAR_0->s_fs_info = FUNC_0(VAR_2);
 return FUNC_1(VAR_0, ((void*)0));
}
