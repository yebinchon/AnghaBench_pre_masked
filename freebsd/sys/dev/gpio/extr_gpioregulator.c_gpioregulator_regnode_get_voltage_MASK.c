
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct regnode {int dummy; } ;
struct gpioregulator_reg_sc {TYPE_2__* def; } ;
struct TYPE_4__ {int npins; int nstates; TYPE_1__* states; int * pins; } ;
struct TYPE_3__ {int mask; int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 struct gpioregulator_reg_sc* FUNC_1 (struct regnode*) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_1, int *VAR_2)
{
 struct gpioregulator_reg_sc *VAR_3;
 uint32_t VAR_4;
 int VAR_5, VAR_6;
 bool VAR_7;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3->def->npins; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3->def->pins[VAR_6], &VAR_7);
  if (VAR_5 != 0)
   return (VAR_5);
  VAR_4 |= (VAR_7 << VAR_6);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->def->nstates; VAR_6++) {
  if (VAR_3->def->states[VAR_6].mask == VAR_4) {
   *VAR_2 = VAR_3->def->states[VAR_6].val;
   return (0);
  }
 }

 return (VAR_0);
}
