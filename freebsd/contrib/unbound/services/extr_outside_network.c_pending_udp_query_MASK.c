
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sldns_buffer {int dummy; } ;
struct serviced_query {TYPE_2__* outnet; int addrlen; int addr; } ;
struct TYPE_3__ {struct pending* key; } ;
struct pending {int timeout; struct pending* next_waiting; int timer; int * pkt; int pkt_len; TYPE_1__ node; void* cb_arg; int * cb; int addr; int addrlen; struct serviced_query* sq; TYPE_2__* outnet; } ;
typedef int comm_point_callback_type ;
struct TYPE_4__ {struct pending* udp_wait_last; struct pending* udp_wait_first; int * unused_fds; int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,struct pending*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pending*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (TYPE_2__*,struct pending*) ;
 int VAR_1 ;
 int FUNC_7 (struct pending*,struct sldns_buffer*,int) ;
 int FUNC_8 (struct sldns_buffer*) ;
 int FUNC_9 (struct sldns_buffer*) ;
 int FUNC_10 (int ,char*) ;

struct pending*
FUNC_11(struct serviced_query* VAR_2, struct sldns_buffer* VAR_3,
 int VAR_4, comm_point_callback_type* VAR_5, void* VAR_6)
{
 struct pending* VAR_7 = (struct pending*)FUNC_0(1, sizeof(*VAR_7));
 if(!VAR_7) return ((void*)0);
 VAR_7->outnet = VAR_2->outnet;
 VAR_7->sq = VAR_2;
 VAR_7->addrlen = VAR_2->addrlen;
 FUNC_5(&VAR_7->addr, &VAR_2->addr, VAR_2->addrlen);
 VAR_7->cb = VAR_5;
 VAR_7->cb_arg = VAR_6;
 VAR_7->node.key = VAR_7;
 VAR_7->timer = FUNC_1(VAR_2->outnet->base, VAR_1,
  VAR_7);
 if(!VAR_7->timer) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 if(VAR_2->outnet->unused_fds == ((void*)0)) {

  FUNC_10(VAR_0, "no fds available, udp query waiting");
  VAR_7->timeout = VAR_4;
  VAR_7->pkt_len = FUNC_9(VAR_3);
  VAR_7->pkt = (uint8_t*)FUNC_4(FUNC_8(VAR_3),
   VAR_7->pkt_len);
  if(!VAR_7->pkt) {
   FUNC_2(VAR_7->timer);
   FUNC_3(VAR_7);
   return ((void*)0);
  }

  if(VAR_2->outnet->udp_wait_last)
   VAR_2->outnet->udp_wait_last->next_waiting = VAR_7;
  else
   VAR_2->outnet->udp_wait_first = VAR_7;
  VAR_2->outnet->udp_wait_last = VAR_7;
  return VAR_7;
 }
 if(!FUNC_7(VAR_7, VAR_3, VAR_4)) {
  FUNC_6(VAR_2->outnet, VAR_7);
  return ((void*)0);
 }
 return VAR_7;
}
