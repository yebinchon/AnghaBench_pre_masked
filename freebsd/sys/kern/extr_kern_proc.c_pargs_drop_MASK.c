
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pargs {int ar_ref; } ;


 int FUNC_0 (struct pargs*) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct pargs *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;
 if (FUNC_1(&VAR_0->ar_ref))
  FUNC_0(VAR_0);
}
