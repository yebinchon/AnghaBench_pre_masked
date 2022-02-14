
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_kctx {int * worker; scalar_t__ run; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct nm_kctx *VAR_0)
{
 if (!VAR_0->worker)
  return;


 VAR_0->run = 0;


 FUNC_0(VAR_0->worker);

 VAR_0->worker = ((void*)0);
}
