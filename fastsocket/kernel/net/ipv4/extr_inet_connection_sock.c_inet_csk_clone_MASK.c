
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_write_space; int sk_state; } ;
struct request_sock {int dummy; } ;
struct inet_connection_sock {int icsk_accept_queue; scalar_t__ icsk_probes_out; scalar_t__ icsk_backoff; scalar_t__ icsk_retransmits; int * icsk_bind_hash; } ;
typedef int gfp_t ;
struct TYPE_4__ {int loc_port; int rmt_port; } ;
struct TYPE_3__ {int sport; int num; int dport; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct request_sock const*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock*,struct request_sock const*) ;
 struct sock* FUNC_6 (struct sock*,int const) ;
 int VAR_1 ;

struct sock *FUNC_7(struct sock *VAR_2, const struct request_sock *VAR_3,
       const gfp_t VAR_4)
{
 struct sock *VAR_5 = FUNC_6(VAR_2, VAR_4);

 if (VAR_5 != ((void*)0)) {
  struct inet_connection_sock *VAR_6 = FUNC_0(VAR_5);

  VAR_5->sk_state = VAR_0;
  VAR_6->icsk_bind_hash = ((void*)0);

  FUNC_2(VAR_5)->dport = FUNC_1(VAR_3)->rmt_port;
  FUNC_2(VAR_5)->num = FUNC_4(FUNC_1(VAR_3)->loc_port);
  FUNC_2(VAR_5)->sport = FUNC_1(VAR_3)->loc_port;
  VAR_5->sk_write_space = VAR_1;

  VAR_6->icsk_retransmits = 0;
  VAR_6->icsk_backoff = 0;
  VAR_6->icsk_probes_out = 0;


  FUNC_3(&VAR_6->icsk_accept_queue, 0, sizeof(VAR_6->icsk_accept_queue));

  FUNC_5(VAR_5, VAR_3);
 }
 return VAR_5;
}
