
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* evcb_cbfinalize ) (struct event_callback*,int ) ;} ;
struct event_callback {int evcb_flags; int evcb_closure; int evcb_arg; TYPE_3__ evcb_cb_union; } ;
struct event_base {int dummy; } ;
struct TYPE_4__ {int (* evcb_evfinalize ) (struct event*,int ) ;} ;
struct TYPE_5__ {TYPE_1__ evcb_cb_union; } ;
struct event {int ev_flags; int ev_arg; TYPE_2__ ev_evcallback; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_2 (struct event_base*,struct event_callback*,int) ;
 struct event* FUNC_3 (struct event_callback*) ;
 int FUNC_4 (struct event*,int ) ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 (struct event*,int ) ;
 int FUNC_7 (struct event_callback*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(struct event_base *VAR_5,
    struct event_callback *VAR_6,
    int VAR_7)
{
 int VAR_8 = 0;

 if (VAR_6->evcb_flags & VAR_2) {
  struct event *VAR_9 = FUNC_3(VAR_6);
  if (!(VAR_9->ev_flags & VAR_3)) {
   FUNC_4(VAR_9, VAR_0);
   VAR_8 = 1;
  }
 } else {
  FUNC_0(VAR_5, VAR_4);
  FUNC_2(VAR_5, VAR_6, 1);
  FUNC_1(VAR_5, VAR_4);
  VAR_8 = 1;
 }

 if (VAR_7 && (VAR_6->evcb_flags & VAR_1)) {
  switch (VAR_6->evcb_closure) {
  case 129:
  case 128: {
   struct event *VAR_10 = FUNC_3(VAR_6);
   VAR_10->ev_evcallback.evcb_cb_union.evcb_evfinalize(VAR_10, VAR_10->ev_arg);
   if (VAR_6->evcb_closure == 128)
    FUNC_5(VAR_10);
   break;
  }
  case 130:
   VAR_6->evcb_cb_union.evcb_cbfinalize(VAR_6, VAR_6->evcb_arg);
   break;
  default:
   break;
  }
 }
 return VAR_8;
}
