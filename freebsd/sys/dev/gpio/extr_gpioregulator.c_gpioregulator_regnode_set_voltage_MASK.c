
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regnode {int dummy; } ;
struct gpioregulator_state {int val; int mask; } ;
struct gpioregulator_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {int nstates; int npins; int startup_delay_us; int * pins; struct gpioregulator_state* states; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct gpioregulator_reg_sc* FUNC_1 (struct regnode*) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_1, int VAR_2,
    int VAR_3, int *VAR_4)
{
 struct gpioregulator_reg_sc *VAR_5;
 const struct gpioregulator_state *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_5->def->nstates; VAR_8++) {
  if (VAR_5->def->states[VAR_8].val >= VAR_2 &&
      VAR_5->def->states[VAR_8].val <= VAR_3) {
   VAR_6 = &VAR_5->def->states[VAR_8];
   break;
  }
 }
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_5->def->npins; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5->def->pins[VAR_8],
      (VAR_6->mask >> VAR_8) & 1);
  if (VAR_7 != 0)
   return (VAR_7);
 }

 *VAR_4 = VAR_5->def->startup_delay_us;

 return (0);
}
