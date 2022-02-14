
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct loop {TYPE_1__* single_exit; } ;
typedef TYPE_1__* edge ;
struct TYPE_3__ {int src; } ;


 int FUNC_0 (struct loop*,int ) ;

edge
FUNC_1 (struct loop *VAR_0)
{
  edge VAR_1 = VAR_0->single_exit;

  if (!VAR_1)
    return ((void*)0);

  if (!FUNC_0 (VAR_0, VAR_1->src))
    return ((void*)0);

  return VAR_1;
}
