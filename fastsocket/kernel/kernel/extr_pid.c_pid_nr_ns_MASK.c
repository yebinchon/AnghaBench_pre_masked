
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upid {int nr; struct pid_namespace* ns; } ;
struct pid_namespace {size_t level; } ;
struct pid {size_t level; struct upid* numbers; } ;
typedef int pid_t ;



pid_t FUNC_0(struct pid *VAR_0, struct pid_namespace *VAR_1)
{
 struct upid *VAR_2;
 pid_t VAR_3 = 0;

 if (VAR_0 && VAR_1->level <= VAR_0->level) {
  VAR_2 = &VAR_0->numbers[VAR_1->level];
  if (VAR_2->ns == VAR_1)
   VAR_3 = VAR_2->nr;
 }
 return VAR_3;
}
