
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int attack_set; struct kill* attack_data; } ;
struct kill {int dummy; } ;


 struct kill* FUNC_0 () ;

int
FUNC_1(struct msg *VAR_0, struct kill* *VAR_1)
{
  if (VAR_0->attack_set != 1) {
    VAR_0->attack_data = FUNC_0();
    if (VAR_0->attack_data == ((void*)0))
      return (-1);
    VAR_0->attack_set = 1;
  }
  *VAR_1 = VAR_0->attack_data;
  return (0);
}
