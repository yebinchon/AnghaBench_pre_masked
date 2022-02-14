
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sh_old_max; int* ev_signal_pair; int ** sh_old; int ev_signal; scalar_t__ ev_signal_added; } ;
struct event_base {TYPE_1__ sig; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct event_base* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct event_base*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int **) ;

void
FUNC_7(struct event_base *VAR_4)
{
 int VAR_5 = 0;
 if (VAR_4->sig.ev_signal_added) {
  FUNC_3(&VAR_4->sig.ev_signal);
  VAR_4->sig.ev_signal_added = 0;
 }


 FUNC_2(&VAR_4->sig.ev_signal);

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_5 < VAR_4->sig.sh_old_max && VAR_4->sig.sh_old[VAR_5] != ((void*)0))
   FUNC_4(VAR_4, VAR_5);
 }
 FUNC_0();
 if (VAR_4 == VAR_1) {
  VAR_1 = ((void*)0);
  VAR_3 = 0;
  VAR_2 = -1;
 }
 FUNC_1();

 if (VAR_4->sig.ev_signal_pair[0] != -1) {
  FUNC_5(VAR_4->sig.ev_signal_pair[0]);
  VAR_4->sig.ev_signal_pair[0] = -1;
 }
 if (VAR_4->sig.ev_signal_pair[1] != -1) {
  FUNC_5(VAR_4->sig.ev_signal_pair[1]);
  VAR_4->sig.ev_signal_pair[1] = -1;
 }
 VAR_4->sig.sh_old_max = 0;


 if (VAR_4->sig.sh_old) {
  FUNC_6(VAR_4->sig.sh_old);
  VAR_4->sig.sh_old = ((void*)0);
 }
}
