
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct waiting_tcp {struct waiting_tcp* next_waiting; scalar_t__ pkt_len; int * pkt; int timer; int tls_auth_name; int ssl_upstream; void* cb_arg; int * cb; TYPE_1__* outnet; int addrlen; int addr; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct serviced_query {TYPE_1__* outnet; int zonelen; int zone; int addr; int tls_auth_name; int ssl_upstream; int addrlen; } ;
struct pending_tcp {int dummy; } ;
typedef int sldns_buffer ;
typedef int comm_point_callback_type ;
struct TYPE_4__ {scalar_t__ log_forwarder_query_messages; scalar_t__ log_resolver_query_messages; } ;
struct TYPE_3__ {struct waiting_tcp* tcp_wait_last; struct waiting_tcp* tcp_wait_first; TYPE_2__* dtenv; int rnd; int base; struct pending_tcp* tcp_free; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct waiting_tcp*) ;
 int FUNC_2 (int ,struct timeval*) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int ,int ,int *) ;
 int FUNC_4 (struct waiting_tcp*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (struct waiting_tcp*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct waiting_tcp*) ;

struct waiting_tcp*
FUNC_13(struct serviced_query* VAR_2, sldns_buffer* VAR_3,
 int VAR_4, comm_point_callback_type* VAR_5, void* VAR_6)
{
 struct pending_tcp* VAR_7 = VAR_2->outnet->tcp_free;
 struct waiting_tcp* VAR_8;
 struct timeval VAR_9;
 uint16_t VAR_10;

 VAR_8 = (struct waiting_tcp*)FUNC_5(sizeof(struct waiting_tcp)
  + (VAR_7?0:FUNC_10(VAR_3)));
 if(!VAR_8) {
  return ((void*)0);
 }
 if(!(VAR_8->timer = FUNC_1(VAR_2->outnet->base, VAR_1, VAR_8))) {
  FUNC_4(VAR_8);
  return ((void*)0);
 }
 VAR_8->pkt = ((void*)0);
 VAR_8->pkt_len = 0;
 VAR_10 = ((unsigned)FUNC_11(VAR_2->outnet->rnd)>>8) & 0xffff;
 FUNC_0(FUNC_9(VAR_3), VAR_10);
 FUNC_6(&VAR_8->addr, &VAR_2->addr, VAR_2->addrlen);
 VAR_8->addrlen = VAR_2->addrlen;
 VAR_8->outnet = VAR_2->outnet;
 VAR_8->cb = VAR_5;
 VAR_8->cb_arg = VAR_6;
 VAR_8->ssl_upstream = VAR_2->ssl_upstream;
 VAR_8->tls_auth_name = VAR_2->tls_auth_name;

 VAR_9.tv_sec = VAR_4/1000;
 VAR_9.tv_usec = (VAR_4%1000)*1000;

 FUNC_2(VAR_8->timer, &VAR_9);
 if(VAR_7) {

  if(!FUNC_8(VAR_8, FUNC_9(VAR_3),
   FUNC_10(VAR_3))) {
   FUNC_12(VAR_8);
   return ((void*)0);
  }







 } else {

  VAR_8->pkt = (uint8_t*)VAR_8 + sizeof(struct waiting_tcp);
  VAR_8->pkt_len = FUNC_10(VAR_3);
  FUNC_7(VAR_8->pkt, FUNC_9(VAR_3), VAR_8->pkt_len);
  VAR_8->next_waiting = ((void*)0);
  if(VAR_2->outnet->tcp_wait_last)
   VAR_2->outnet->tcp_wait_last->next_waiting = VAR_8;
  else VAR_2->outnet->tcp_wait_first = VAR_8;
  VAR_2->outnet->tcp_wait_last = VAR_8;
 }
 return VAR_8;
}
