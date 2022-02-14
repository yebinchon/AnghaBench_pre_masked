
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndtest_state {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct rndtest_state *VAR_1, int VAR_2, int *VAR_3)
{
 if (VAR_2 == 0)
  return;
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;
 VAR_2 -= 1;
 VAR_3[VAR_2]++;
}
