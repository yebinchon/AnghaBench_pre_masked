
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int from_name_set; int to_name_set; int attack_set; int run_set; int run_length; scalar_t__ run_num_allocated; int * run_data; int * attack_data; int * to_name_data; int * from_name_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct msg *VAR_0)
{
  if (VAR_0->from_name_set == 1) {
    FUNC_0(VAR_0->from_name_data);
    VAR_0->from_name_data = ((void*)0);
    VAR_0->from_name_set = 0;
  }
  if (VAR_0->to_name_set == 1) {
    FUNC_0(VAR_0->to_name_data);
    VAR_0->to_name_data = ((void*)0);
    VAR_0->to_name_set = 0;
  }
  if (VAR_0->attack_set == 1) {
    FUNC_1(VAR_0->attack_data);
    VAR_0->attack_data = ((void*)0);
    VAR_0->attack_set = 0;
  }
  if (VAR_0->run_set == 1) {
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->run_length; ++VAR_1) {
      FUNC_2(VAR_0->run_data[VAR_1]);
    }
    FUNC_0(VAR_0->run_data);
    VAR_0->run_data = ((void*)0);
    VAR_0->run_set = 0;
    VAR_0->run_length = 0;
    VAR_0->run_num_allocated = 0;
  }
}
