
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tpacket_req {int dummy; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_receive_queue; int sk_prot; } ;
struct TYPE_6__ {scalar_t__ pg_vec; } ;
struct TYPE_5__ {scalar_t__ pg_vec; } ;
struct packet_sock {TYPE_3__ tx_ring; TYPE_2__ rx_ring; scalar_t__ num; scalar_t__ running; int prot_hook; } ;
struct TYPE_4__ {int sklist_lock; } ;
struct net {TYPE_1__ packet; } ;
typedef int req ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tpacket_req*,int ,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct tpacket_req*,int,int) ;
 struct packet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 struct net* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct net*,int ,int) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct packet_sock *VAR_2;
 struct net *VAR_3;




 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_9(VAR_1);
 VAR_2 = FUNC_5(VAR_1);

 FUNC_13(&VAR_3->packet.sklist_lock);
 FUNC_6(VAR_1);
 FUNC_11(VAR_3, VAR_1->sk_prot, -1);
 FUNC_14(&VAR_3->packet.sklist_lock);





 if (VAR_2->running) {



  FUNC_1(&VAR_2->prot_hook);
  VAR_2->running = 0;
  VAR_2->num = 0;
  FUNC_0(VAR_1);
 }

 FUNC_3(VAR_1);
 FUNC_10(VAR_1);
 VAR_0->sk = ((void*)0);



 FUNC_8(&VAR_1->sk_receive_queue);
 FUNC_7(VAR_1);

 FUNC_12(VAR_1);
 return 0;
}
