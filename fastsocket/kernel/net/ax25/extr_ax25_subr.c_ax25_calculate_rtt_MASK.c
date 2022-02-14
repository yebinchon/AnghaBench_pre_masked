
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ backoff; scalar_t__ n2count; int rtt; int t1; int t1timer; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void FUNC_2(ax25_cb *VAR_2)
{
 if (VAR_2->backoff == 0)
  return;

 if (FUNC_1(VAR_2) && VAR_2->n2count == 0)
  VAR_2->rtt = (9 * VAR_2->rtt + VAR_2->t1 - FUNC_0(&VAR_2->t1timer)) / 10;

 if (VAR_2->rtt < VAR_1)
  VAR_2->rtt = VAR_1;

 if (VAR_2->rtt > VAR_0)
  VAR_2->rtt = VAR_0;
}
