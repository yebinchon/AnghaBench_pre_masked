
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_4__ {scalar_t__ enable; } ;
struct TYPE_5__ {TYPE_1__ cfg; int cx; scalar_t__ compress; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 TYPE_2__* FUNC_3 (int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_0)
{
 const node_p VAR_1 = FUNC_0(VAR_0);
 const priv_p VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->cfg.enable) {
     if (VAR_2->compress)
  FUNC_4(&VAR_2->cx);
     else
  FUNC_5(&VAR_2->cx);
     VAR_2->cfg.enable = 0;
 }


 if ((FUNC_2(VAR_1) == 0) && FUNC_1(VAR_1))
  FUNC_6(VAR_1);
 return (0);
}
