
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* evcb_cbfinalize ) (struct event_callback*,void*) ;} ;
struct event_callback {int evcb_flags; TYPE_1__ evcb_cb_union; int evcb_closure; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct event_base*,struct event_callback*) ;
 int FUNC_1 (struct event_base*,struct event_callback*,int ) ;
 struct event* FUNC_2 (struct event_callback*) ;
 int FUNC_3 (struct event*,int ) ;

void
FUNC_4(struct event_base *VAR_4, unsigned VAR_5, struct event_callback *VAR_6, void (*VAR_7)(struct event_callback *, void *))
{
 struct event *VAR_8 = ((void*)0);
 if (VAR_6->evcb_flags & VAR_2) {
  VAR_8 = FUNC_2(VAR_6);
  FUNC_3(VAR_8, VAR_0);
 } else {
  FUNC_1(VAR_4, VAR_6, 0);
 }

 VAR_6->evcb_closure = VAR_3;
 VAR_6->evcb_cb_union.evcb_cbfinalize = VAR_7;
 FUNC_0(VAR_4, VAR_6);
 VAR_6->evcb_flags |= VAR_1;
}
