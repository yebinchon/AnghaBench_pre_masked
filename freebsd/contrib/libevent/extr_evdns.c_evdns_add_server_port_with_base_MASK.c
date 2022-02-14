
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct evdns_server_port {int refcnt; int lock; int event; int socket; struct event_base* event_base; int * pending_replies; void* user_data; int user_callback; scalar_t__ closing; scalar_t__ choked; } ;
typedef int evutil_socket_t ;
typedef int evdns_request_callback_fn_type ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct event_base*,int ,int,int ,struct evdns_server_port*) ;
 int FUNC_3 (struct evdns_server_port*,int ,int) ;
 int FUNC_4 (struct evdns_server_port*) ;
 struct evdns_server_port* FUNC_5 (int) ;
 int VAR_3 ;

struct evdns_server_port *
FUNC_6(struct event_base *VAR_4, evutil_socket_t VAR_5, int VAR_6, evdns_request_callback_fn_type VAR_7, void *VAR_8)
{
 struct evdns_server_port *VAR_9;
 if (VAR_6)
  return ((void*)0);
 if (!(VAR_9 = FUNC_5(sizeof(struct evdns_server_port))))
  return ((void*)0);
 FUNC_3(VAR_9, 0, sizeof(struct evdns_server_port));


 VAR_9->socket = VAR_5;
 VAR_9->refcnt = 1;
 VAR_9->choked = 0;
 VAR_9->closing = 0;
 VAR_9->user_callback = VAR_7;
 VAR_9->user_data = VAR_8;
 VAR_9->pending_replies = ((void*)0);
 VAR_9->event_base = VAR_4;

 FUNC_2(&VAR_9->event, VAR_9->event_base,
     VAR_9->socket, VAR_2 | VAR_1,
     VAR_3, VAR_9);
 if (FUNC_1(&VAR_9->event, ((void*)0)) < 0) {
  FUNC_4(VAR_9);
  return ((void*)0);
 }
 FUNC_0(VAR_9->lock, VAR_0);
 return VAR_9;
}
