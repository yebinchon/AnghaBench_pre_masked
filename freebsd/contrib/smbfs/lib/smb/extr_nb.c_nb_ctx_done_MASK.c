
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_ctx {scalar_t__ nb_scope; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct nb_ctx *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->nb_scope)
  FUNC_0(VAR_0->nb_scope);
}
