
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* regused; size_t curreg; } ;
typedef TYPE_1__ compiler_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_1(compiler_state_t *VAR_1)
{
 int VAR_2 = VAR_0;

 while (--VAR_2 >= 0) {
  if (VAR_1->regused[VAR_1->curreg])
   VAR_1->curreg = (VAR_1->curreg + 1) % VAR_0;
  else {
   VAR_1->regused[VAR_1->curreg] = 1;
   return VAR_1->curreg;
  }
 }
 FUNC_0(VAR_1, "too many registers needed to evaluate expression");

}
