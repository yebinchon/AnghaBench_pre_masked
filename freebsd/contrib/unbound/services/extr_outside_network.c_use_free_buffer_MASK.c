
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiting_tcp {void* cb_arg; int (* cb ) (int *,void*,int ,int *) ;int pkt_len; int pkt; struct waiting_tcp* next_waiting; } ;
struct outside_network {struct waiting_tcp* tcp_wait_last; struct waiting_tcp* tcp_wait_first; int want_to_quit; scalar_t__ tcp_free; } ;
typedef int (* comm_point_callback_type ) (int *,void*,int ,int *) ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int *,void*,int ,int *)) ;
 int FUNC_2 (struct waiting_tcp*,int ,int ) ;
 int FUNC_3 (int *,void*,int ,int *) ;
 int FUNC_4 (struct waiting_tcp*) ;

__attribute__((used)) static void
FUNC_5(struct outside_network* VAR_1)
{
 struct waiting_tcp* VAR_2;
 while(VAR_1->tcp_free && VAR_1->tcp_wait_first
  && !VAR_1->want_to_quit) {
  VAR_2 = VAR_1->tcp_wait_first;
  VAR_1->tcp_wait_first = VAR_2->next_waiting;
  if(VAR_1->tcp_wait_last == VAR_2)
   VAR_1->tcp_wait_last = ((void*)0);
  if(!FUNC_2(VAR_2, VAR_2->pkt, VAR_2->pkt_len)) {
   comm_point_callback_type* VAR_3 = &VAR_2->cb;
   void* VAR_4 = VAR_2->cb_arg;
   FUNC_4(VAR_2);
   FUNC_0(FUNC_1(*VAR_3));
   (void)(*VAR_3)(((void*)0), VAR_4, VAR_0, ((void*)0));
  }
 }
}
