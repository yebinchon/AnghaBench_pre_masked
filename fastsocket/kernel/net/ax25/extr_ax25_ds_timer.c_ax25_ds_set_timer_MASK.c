
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slave_timeout; int slave_timer; } ;
struct TYPE_5__ {TYPE_1__ dama; int * values; } ;
typedef TYPE_2__ ax25_dev ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(ax25_dev *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->dama.slave_timeout =
  FUNC_1(VAR_3->values[VAR_0]) / 10;
 FUNC_0(&VAR_3->dama.slave_timer, VAR_2 + VAR_1);
}
