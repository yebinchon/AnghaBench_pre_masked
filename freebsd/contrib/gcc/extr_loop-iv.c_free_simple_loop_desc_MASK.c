
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niter_desc {int dummy; } ;
struct loop {int * aux; } ;


 int FUNC_0 (struct niter_desc*) ;
 struct niter_desc* FUNC_1 (struct loop*) ;

void
FUNC_2 (struct loop *VAR_0)
{
  struct niter_desc *VAR_1 = FUNC_1 (VAR_0);

  if (!VAR_1)
    return;

  FUNC_0 (VAR_1);
  VAR_0->aux = ((void*)0);
}
