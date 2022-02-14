
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_cputime {scalar_t__ sum_exec_runtime; int stime; int utime; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(const struct task_cputime *VAR_1)
{
 if (FUNC_0(VAR_1->utime, VAR_0) &&
     FUNC_0(VAR_1->stime, VAR_0) &&
     VAR_1->sum_exec_runtime == 0)
  return 1;
 return 0;
}
