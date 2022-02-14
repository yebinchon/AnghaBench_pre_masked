
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_8__ {TYPE_3__* native; } ;
struct TYPE_5__ {int n_sclass; } ;
struct TYPE_6__ {TYPE_1__ syment; } ;
struct TYPE_7__ {TYPE_2__ u; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2 (symbolS *VAR_0)
{
  return FUNC_0 (FUNC_1 (VAR_0))->native->u.syment.n_sclass;
}
