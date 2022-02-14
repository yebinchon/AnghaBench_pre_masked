
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_cputime {scalar_t__ sum_exec_runtime; int stime; int utime; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_3(const struct task_cputime *VAR_1,
     const struct task_cputime *VAR_2)
{
 if (!FUNC_1(VAR_2->utime, VAR_0) &&
     FUNC_2(VAR_1->utime, VAR_2->utime))
  return 1;
 if (!FUNC_1(VAR_2->stime, VAR_0) &&
     FUNC_2(FUNC_0(VAR_1->utime, VAR_1->stime),
         VAR_2->stime))
  return 1;
 if (VAR_2->sum_exec_runtime != 0 &&
     VAR_1->sum_exec_runtime >= VAR_2->sum_exec_runtime)
  return 1;
 return 0;
}
