
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_adapter {int dummy; } ;
typedef enum txrx { ____Placeholder_txrx } txrx ;
struct TYPE_3__ {scalar_t__ nkr_stopped; } ;


 TYPE_1__** FUNC_0 (struct netmap_adapter*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(struct netmap_adapter *VAR_0, u_int VAR_1, enum txrx VAR_2, int VAR_3)
{
 if (VAR_3)
  FUNC_1(FUNC_0(VAR_0, VAR_2)[VAR_1], VAR_3);
 else
  FUNC_0(VAR_0, VAR_2)[VAR_1]->nkr_stopped = 0;
}
