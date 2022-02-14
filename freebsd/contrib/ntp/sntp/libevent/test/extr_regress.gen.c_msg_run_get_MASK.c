
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int dummy; } ;
struct msg {int run_length; struct run** run_data; int run_set; } ;



int
FUNC_0(struct msg *VAR_0, int VAR_1,
    struct run* *VAR_2)
{
  if (!VAR_0->run_set || VAR_1 < 0 || VAR_1 >= VAR_0->run_length)
    return (-1);
  *VAR_2 = VAR_0->run_data[VAR_1];
  return (0);
}
