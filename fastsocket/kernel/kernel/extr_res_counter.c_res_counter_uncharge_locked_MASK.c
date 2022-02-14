
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_counter {unsigned long usage; } ;


 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct res_counter *VAR_0, unsigned long VAR_1)
{
 if (FUNC_0(VAR_0->usage < VAR_1))
  VAR_1 = VAR_0->usage;

 VAR_0->usage -= VAR_1;
}
