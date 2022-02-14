
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* ev_signal_pair; } ;
struct event_base {TYPE_1__ sig; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct event_base*) ;
 struct event_base* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(void)
{

 struct event_base *VAR_3, *VAR_4;
 int VAR_5;
 VAR_2 = 0;
 VAR_3 = FUNC_3();
 VAR_5 = VAR_3->sig.ev_signal_pair[0];
 VAR_4 = FUNC_3();
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 if (FUNC_1(VAR_5) != -1 || VAR_1!=VAR_0) {

  FUNC_4("signal pipe not closed. ");
  VAR_2 = 0;
 } else {
  VAR_2 = 1;
 }
 FUNC_0();
}
