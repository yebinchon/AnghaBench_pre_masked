
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_sndtimeo; int sk_rcvtimeo; int sk_lingertime; int sk_rcvbuf; int sk_sndbuf; TYPE_1__* sk_prot; int sk_backlog_rcv; int sk_protocol; int sk_family; int sk_destruct; int sk_shutdown; int sk_reuse; int sk_no_check; int sk_flags; int sk_bound_dev_if; int sk_type; } ;
struct TYPE_4__ {int port; } ;
struct sctp_association {int next_tsn; TYPE_2__ peer; } ;
struct inet_sock {int id; int mc_loop; int mc_ttl; int * mc_list; scalar_t__ mc_index; int uc_ttl; int pmtudisc; int dport; int rcv_saddr; int saddr; int sport; } ;
struct TYPE_3__ {int backlog_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct sock *VAR_3, struct sock *VAR_4,
      struct sctp_association *VAR_5)
{
 struct inet_sock *VAR_6 = FUNC_1(VAR_4);
 struct inet_sock *VAR_7 = FUNC_1(VAR_3);

 VAR_3->sk_type = VAR_4->sk_type;
 VAR_3->sk_bound_dev_if = VAR_4->sk_bound_dev_if;
 VAR_3->sk_flags = VAR_4->sk_flags;
 VAR_3->sk_no_check = VAR_4->sk_no_check;
 VAR_3->sk_reuse = VAR_4->sk_reuse;

 VAR_3->sk_shutdown = VAR_4->sk_shutdown;
 VAR_3->sk_destruct = VAR_1;
 VAR_3->sk_family = VAR_4->sk_family;
 VAR_3->sk_protocol = VAR_0;
 VAR_3->sk_backlog_rcv = VAR_4->sk_prot->backlog_rcv;
 VAR_3->sk_sndbuf = VAR_4->sk_sndbuf;
 VAR_3->sk_rcvbuf = VAR_4->sk_rcvbuf;
 VAR_3->sk_lingertime = VAR_4->sk_lingertime;
 VAR_3->sk_rcvtimeo = VAR_4->sk_rcvtimeo;
 VAR_3->sk_sndtimeo = VAR_4->sk_sndtimeo;

 VAR_7 = FUNC_1(VAR_3);




 VAR_7->sport = VAR_6->sport;
 VAR_7->saddr = VAR_6->saddr;
 VAR_7->rcv_saddr = VAR_6->rcv_saddr;
 VAR_7->dport = FUNC_0(VAR_5->peer.port);
 VAR_7->pmtudisc = VAR_6->pmtudisc;
 VAR_7->id = VAR_5->next_tsn ^ VAR_2;

 VAR_7->uc_ttl = VAR_6->uc_ttl;
 VAR_7->mc_loop = 1;
 VAR_7->mc_ttl = 1;
 VAR_7->mc_index = 0;
 VAR_7->mc_list = ((void*)0);
}
