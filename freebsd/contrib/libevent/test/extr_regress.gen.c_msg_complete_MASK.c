
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int run_length; int * run_data; scalar_t__ run_set; int attack_data; scalar_t__ attack_set; int to_name_set; int from_name_set; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct msg *VAR_0)
{
  if (!VAR_0->from_name_set)
    return (-1);
  if (!VAR_0->to_name_set)
    return (-1);
  if (VAR_0->attack_set && FUNC_0(VAR_0->attack_data) == -1)
    return (-1);
  {
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->run_length; ++VAR_1) {
      if (VAR_0->run_set && FUNC_1(VAR_0->run_data[VAR_1]) == -1)
        return (-1);
    }
  }
  return (0);
}
