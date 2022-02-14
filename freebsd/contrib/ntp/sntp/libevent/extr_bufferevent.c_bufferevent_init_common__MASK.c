
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int * output; int * input; int enabled; struct bufferevent_ops const* be_ops; int timeout_write; int timeout_read; struct event_base* ev_base; } ;
struct bufferevent_private {int refcnt; int options; int deferred; struct bufferevent bev; } ;
struct bufferevent_ops {int dummy; } ;
typedef enum bufferevent_options { ____Placeholder_bufferevent_options } bufferevent_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bufferevent*,int *) ;
 int FUNC_1 (struct bufferevent_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 () ;
 int FUNC_4 (int *,struct bufferevent*) ;
 int FUNC_5 (struct event_base*) ;
 int FUNC_6 (int *,int,int ,struct bufferevent_private*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct bufferevent_private *VAR_6,
    struct event_base *VAR_7,
    const struct bufferevent_ops *VAR_8,
    enum bufferevent_options VAR_9)
{
 struct bufferevent *VAR_10 = &VAR_6->bev;

 if (!VAR_10->input) {
  if ((VAR_10->input = FUNC_3()) == ((void*)0))
   return -1;
 }

 if (!VAR_10->output) {
  if ((VAR_10->output = FUNC_3()) == ((void*)0)) {
   FUNC_2(VAR_10->input);
   return -1;
  }
 }

 VAR_6->refcnt = 1;
 VAR_10->ev_base = VAR_7;


 FUNC_8(&VAR_10->timeout_read);
 FUNC_8(&VAR_10->timeout_write);

 VAR_10->be_ops = VAR_8;

 FUNC_1(VAR_6);






 VAR_10->enabled = VAR_3;


 if (VAR_9 & VAR_1) {
  if (FUNC_0(VAR_10, ((void*)0)) < 0) {

   FUNC_2(VAR_10->input);
   FUNC_2(VAR_10->output);
   VAR_10->input = ((void*)0);
   VAR_10->output = ((void*)0);
   return -1;
  }
 }

 if ((VAR_9 & (VAR_0|VAR_2))
     == VAR_2) {
  FUNC_7("UNLOCK_CALLBACKS requires DEFER_CALLBACKS");
  return -1;
 }
 if (VAR_9 & VAR_2)
  FUNC_6(
      &VAR_6->deferred,
      FUNC_5(VAR_7) / 2,
      VAR_5,
      VAR_6);
 else
  FUNC_6(
      &VAR_6->deferred,
      FUNC_5(VAR_7) / 2,
      VAR_4,
      VAR_6);

 VAR_6->options = VAR_9;

 FUNC_4(VAR_10->input, VAR_10);
 FUNC_4(VAR_10->output, VAR_10);

 return 0;
}
