
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pending {int cb_arg; int (* cb ) (int ,int ,int ,int *) ;int timeout; scalar_t__ pkt_len; int * pkt; struct pending* next_waiting; } ;
struct outside_network {TYPE_1__* unused_fds; int udp_buff; int * udp_wait_last; struct pending* udp_wait_first; int want_to_quit; } ;
struct TYPE_2__ {int cp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int ,int ,int ,int *)) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct outside_network*,struct pending*) ;
 int FUNC_4 (struct pending*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct outside_network* VAR_1)
{
 struct pending* VAR_2;

 while(VAR_1->udp_wait_first && VAR_1->unused_fds
  && !VAR_1->want_to_quit) {
  VAR_2 = VAR_1->udp_wait_first;
  VAR_1->udp_wait_first = VAR_2->next_waiting;
  if(!VAR_2->next_waiting) VAR_1->udp_wait_last = ((void*)0);
  FUNC_5(VAR_1->udp_buff);
  FUNC_7(VAR_1->udp_buff, VAR_2->pkt, VAR_2->pkt_len);
  FUNC_6(VAR_1->udp_buff);
  FUNC_2(VAR_2->pkt);
  VAR_2->pkt = ((void*)0);
  VAR_2->pkt_len = 0;
  if(!FUNC_4(VAR_2, VAR_1->udp_buff,
   VAR_2->timeout)) {

   if(VAR_2->cb) {
    FUNC_0(FUNC_1(VAR_2->cb));
    (void)(*VAR_2->cb)(VAR_1->unused_fds->cp, VAR_2->cb_arg,
     VAR_0, ((void*)0));
   }
   FUNC_3(VAR_1, VAR_2);
  }
 }
}
