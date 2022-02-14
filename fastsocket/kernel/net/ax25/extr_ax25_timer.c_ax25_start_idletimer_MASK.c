
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ idle; int idletimer; } ;
typedef TYPE_1__ ax25_cb ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(ax25_cb *VAR_1)
{
 if (VAR_1->idle > 0)
  FUNC_1(&VAR_1->idletimer, VAR_0 + VAR_1->idle);
 else
  FUNC_0(&VAR_1->idletimer);
}
