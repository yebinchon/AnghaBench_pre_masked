
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int dummy; } ;
struct loop {struct loop* inner; } ;


 int FUNC_0 (struct loops*,struct loop*) ;

void
FUNC_1 (struct loops *VAR_0, struct loop *VAR_1)
{
  while (VAR_1->inner)
    FUNC_1 (VAR_0, VAR_1->inner);
  FUNC_0 (VAR_0, VAR_1);
}
