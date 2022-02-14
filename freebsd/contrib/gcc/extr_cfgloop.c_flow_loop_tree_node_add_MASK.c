
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop* outer; struct loop* inner; struct loop* next; } ;


 int FUNC_0 (struct loop*) ;

void
FUNC_1 (struct loop *VAR_0, struct loop *VAR_1)
{
  VAR_1->next = VAR_0->inner;
  VAR_0->inner = VAR_1;
  VAR_1->outer = VAR_0;

  FUNC_0 (VAR_1);
}
