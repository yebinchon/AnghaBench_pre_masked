
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int task; int threads_up_to_date; } ;


 int FUNC_0 (struct inf*) ;

int
FUNC_1 (struct inf *VAR_0)
{
  if (!VAR_0->task)
    return 0;
  if (!VAR_0->threads_up_to_date)
    FUNC_0 (VAR_0);
  return !!VAR_0->task;
}
