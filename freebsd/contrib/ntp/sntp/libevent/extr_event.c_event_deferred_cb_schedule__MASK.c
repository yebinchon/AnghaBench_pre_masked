
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct event_base {scalar_t__ n_deferreds_queued; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 scalar_t__ VAR_0 ;
 struct event_base* VAR_1 ;
 int FUNC_2 (struct event_base*,struct event_callback*) ;
 int FUNC_3 (struct event_base*,struct event_callback*) ;
 int VAR_2 ;

int
FUNC_4(struct event_base *VAR_3, struct event_callback *VAR_4)
{
 int VAR_5 = 1;
 if (!VAR_3)
  VAR_3 = VAR_1;
 FUNC_0(VAR_3, VAR_2);
 if (VAR_3->n_deferreds_queued > VAR_0) {
  FUNC_2(VAR_3, VAR_4);
 } else {
  ++VAR_3->n_deferreds_queued;
  VAR_5 = FUNC_3(VAR_3, VAR_4);
 }
 FUNC_1(VAR_3, VAR_2);
 return VAR_5;
}
