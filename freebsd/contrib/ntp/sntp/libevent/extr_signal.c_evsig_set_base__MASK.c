
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ev_signal_pair; int ev_n_signals_added; } ;
struct event_base {TYPE_1__ sig; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct event_base* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(struct event_base *VAR_3)
{
 FUNC_0();
 VAR_0 = VAR_3;
 VAR_2 = VAR_3->sig.ev_n_signals_added;
 VAR_1 = VAR_3->sig.ev_signal_pair[1];
 FUNC_1();
}
