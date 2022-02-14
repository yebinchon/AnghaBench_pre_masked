
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int sk_userlocks; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {TYPE_3__* nlh; int skb; } ;
struct TYPE_9__ {int * s6_addr32; } ;
struct TYPE_8__ {int * s6_addr32; } ;
struct ipv6_pinfo {TYPE_2__ daddr; TYPE_1__ rcv_saddr; } ;
struct inet_sock {int dport; int num; int daddr; int rcv_saddr; } ;
struct inet_diag_req {int idiag_ext; } ;
struct inet_diag_entry {scalar_t__ family; int userlocks; int dport; int sport; int * daddr; int * saddr; } ;
struct TYPE_11__ {int pid; } ;
struct TYPE_10__ {int nlmsg_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_7__ FUNC_0 (int ) ;
 struct inet_diag_req* FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ,int ,struct inet_diag_entry*) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct nlattr const*) ;
 int FUNC_7 (struct nlattr const*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 struct nlattr* FUNC_9 (TYPE_3__*,int,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_3,
         struct sk_buff *VAR_4,
         struct netlink_callback *VAR_5)
{
 struct inet_diag_req *VAR_6 = FUNC_1(VAR_5->nlh);

 if (FUNC_8(VAR_5->nlh, sizeof(*VAR_6))) {
  struct inet_diag_entry VAR_7;
  const struct nlattr *VAR_8 = FUNC_9(VAR_5->nlh,
         sizeof(*VAR_6),
         VAR_1);
  struct inet_sock *VAR_9 = FUNC_5(VAR_3);

  VAR_7.family = VAR_3->sk_family;
  {
   VAR_7.saddr = &VAR_9->rcv_saddr;
   VAR_7.daddr = &VAR_9->daddr;
  }
  VAR_7.sport = VAR_9->num;
  VAR_7.dport = FUNC_10(VAR_9->dport);
  VAR_7.userlocks = VAR_3->sk_userlocks;

  if (!FUNC_4(FUNC_6(VAR_8), FUNC_7(VAR_8), &VAR_7))
   return 0;
 }

 return FUNC_3(VAR_3, VAR_4, VAR_6->idiag_ext,
      FUNC_0(VAR_5->skb).pid,
      VAR_5->nlh->nlmsg_seq, VAR_2, VAR_5->nlh);
}
