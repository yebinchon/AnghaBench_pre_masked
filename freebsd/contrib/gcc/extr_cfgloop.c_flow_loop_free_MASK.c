
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop* pred; } ;


 int FUNC_0 (struct loop*) ;

void
FUNC_1 (struct loop *VAR_0)
{
  if (VAR_0->pred)
    FUNC_0 (VAR_0->pred);
  FUNC_0 (VAR_0);
}
