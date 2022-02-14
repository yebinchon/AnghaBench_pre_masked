
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct server_request {struct server_request* next_pending; struct server_request* prev_pending; scalar_t__ addrlen; int addr; scalar_t__ response_len; int response; struct evdns_server_port* port; } ;
struct evdns_server_request {int dummy; } ;
struct evdns_server_port {int choked; struct server_request* pending_replies; int event; scalar_t__ closing; int socket; int event_base; } ;
typedef int ev_socklen_t ;


 int FUNC_0 (struct evdns_server_port*) ;
 int VAR_0 ;
 int FUNC_1 (struct evdns_server_port*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct server_request* FUNC_3 (struct evdns_server_request*) ;
 int FUNC_4 (struct server_request*,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int ,int,int ,struct evdns_server_port*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ,int,int ,struct sockaddr*,int ) ;
 int FUNC_11 (struct evdns_server_port*) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (struct server_request*) ;

int
FUNC_13(struct evdns_server_request *VAR_5, int VAR_6)
{
 struct server_request *VAR_7 = FUNC_3(VAR_5);
 struct evdns_server_port *VAR_8 = VAR_7->port;
 int VAR_9 = -1;

 FUNC_0(VAR_8);
 if (!VAR_7->response) {
  if ((VAR_9 = FUNC_4(VAR_7, VAR_6))<0)
   goto done;
 }

 VAR_9 = FUNC_10(VAR_8->socket, VAR_7->response, (int)VAR_7->response_len, 0,
      (struct sockaddr*) &VAR_7->addr, (ev_socklen_t)VAR_7->addrlen);
 if (VAR_9<0) {
  int VAR_10 = FUNC_8(VAR_8->socket);
  if (FUNC_2(VAR_10))
   goto done;

  if (VAR_8->pending_replies) {
   VAR_7->prev_pending = VAR_8->pending_replies->prev_pending;
   VAR_7->next_pending = VAR_8->pending_replies;
   VAR_7->prev_pending->next_pending =
    VAR_7->next_pending->prev_pending = VAR_7;
  } else {
   VAR_7->prev_pending = VAR_7->next_pending = VAR_7;
   VAR_8->pending_replies = VAR_7;
   VAR_8->choked = 1;

   (void) FUNC_7(&VAR_8->event);
   FUNC_6(&VAR_8->event, VAR_8->event_base, VAR_8->socket, (VAR_8->closing?0:VAR_2) | VAR_3 | VAR_1, VAR_4, VAR_8);

   if (FUNC_5(&VAR_8->event, ((void*)0)) < 0) {
    FUNC_9(VAR_0, "Error from libevent when adding event for DNS server");
   }

  }

  VAR_9 = 1;
  goto done;
 }
 if (FUNC_12(VAR_7)) {
  VAR_9 = 0;
  goto done;
 }

 if (VAR_8->pending_replies)
  FUNC_11(VAR_8);

 VAR_9 = 0;
done:
 FUNC_1(VAR_8);
 return VAR_9;
}
