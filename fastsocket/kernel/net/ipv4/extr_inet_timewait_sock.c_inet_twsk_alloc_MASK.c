
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot_creator; int sk_hash; int sk_reuse; int sk_family; int sk_bound_dev_if; } ;
struct inet_timewait_sock {int tw_substate; TYPE_2__* tw_prot; int tw_refcnt; int tw_transparent; scalar_t__ tw_ipv6only; int tw_hash; int tw_reuse; int tw_family; int tw_dport; int tw_sport; int tw_state; int tw_num; int tw_bound_dev_if; int tw_rcv_saddr; int tw_daddr; } ;
struct inet_sock {int transparent; int dport; int sport; int num; int rcv_saddr; int daddr; } ;
struct TYPE_4__ {int owner; TYPE_1__* twsk_prot; } ;
struct TYPE_3__ {int twsk_slab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct inet_sock* FUNC_3 (struct sock const*) ;
 int FUNC_4 (struct inet_timewait_sock*) ;
 struct inet_timewait_sock* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inet_timewait_sock*,int ) ;
 int FUNC_7 (struct sock const*) ;
 int FUNC_8 (struct inet_timewait_sock*,int ) ;

struct inet_timewait_sock *FUNC_9(const struct sock *VAR_3, const int VAR_4)
{
 struct inet_timewait_sock *VAR_5 =
  FUNC_5(VAR_3->sk_prot_creator->twsk_prot->twsk_slab,
     VAR_0);
 if (VAR_5 != ((void*)0)) {
  const struct inet_sock *VAR_6 = FUNC_3(VAR_3);

  FUNC_6(VAR_5, VAR_2);


  VAR_5->tw_daddr = VAR_6->daddr;
  VAR_5->tw_rcv_saddr = VAR_6->rcv_saddr;
  VAR_5->tw_bound_dev_if = VAR_3->sk_bound_dev_if;
  VAR_5->tw_num = VAR_6->num;
  VAR_5->tw_state = VAR_1;
  VAR_5->tw_substate = VAR_4;
  VAR_5->tw_sport = VAR_6->sport;
  VAR_5->tw_dport = VAR_6->dport;
  VAR_5->tw_family = VAR_3->sk_family;
  VAR_5->tw_reuse = VAR_3->sk_reuse;
  VAR_5->tw_hash = VAR_3->sk_hash;
  VAR_5->tw_ipv6only = 0;
  VAR_5->tw_transparent = VAR_6->transparent;
  VAR_5->tw_prot = VAR_3->sk_prot_creator;
  FUNC_8(VAR_5, FUNC_2(FUNC_7(VAR_3)));
  FUNC_1(&VAR_5->tw_refcnt, 1);
  FUNC_4(VAR_5);
  FUNC_0(VAR_5->tw_prot->owner);
 }

 return VAR_5;
}
