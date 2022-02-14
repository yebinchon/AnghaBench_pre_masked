
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {unsigned int proc_inum; } ;



__attribute__((used)) static unsigned int FUNC_0(void *VAR_0)
{
 struct pid_namespace *VAR_1 = VAR_0;
 return VAR_1->proc_inum;
}
