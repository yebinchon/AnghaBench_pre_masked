
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dest; int source; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_rcv_dst; } ;
struct sk_buff {scalar_t__ sock_dst; struct sock* peek_sk; TYPE_1__* dev; scalar_t__ data; } ;
struct iphdr {int ihl; int daddr; int saddr; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sock* FUNC_0 (int *,int *,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4)
{
 struct iphdr *VAR_5 = (struct iphdr *)VAR_4->data;
 int VAR_6 = VAR_5->ihl;

 if (FUNC_2(VAR_4, (VAR_6 * 4) + sizeof(struct tcphdr))) {
  struct sock *VAR_7;
  struct tcphdr *VAR_8 = (struct tcphdr *)(VAR_4->data + (VAR_6 * 4));

  if (!VAR_4->peek_sk) {
   VAR_7 = FUNC_0(&VAR_2, &VAR_3, VAR_5->saddr, VAR_8->source, VAR_5->daddr, VAR_8->dest, VAR_4->dev->ifindex);;
   VAR_4->peek_sk = VAR_7;
  } else
   VAR_7 = VAR_4->peek_sk;

  if (FUNC_1(VAR_7)) {
   if ((VAR_7->sk_state != VAR_1) && FUNC_4(VAR_7, VAR_0)) {

    if(VAR_7->sk_rcv_dst) {
     FUNC_3(VAR_4, VAR_7->sk_rcv_dst);
     VAR_4->sock_dst = VAR_7->sk_rcv_dst;

    }







   }
  }
 }

 return -1;
}
