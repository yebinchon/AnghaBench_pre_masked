
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int check; } ;
struct sock {int dummy; } ;
struct sk_buff {int csum; int len; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct request_sock {int dummy; } ;
struct ipv6_txoptions {int tot_len; scalar_t__ srcrt; } ;
struct ipv6_pinfo {struct ipv6_txoptions* opt; } ;
struct in6_addr {int dummy; } ;
struct inet6_request_sock {struct in6_addr rmt_addr; struct in6_addr loc_addr; int iif; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; int oif; scalar_t__ fl6_flowlabel; struct in6_addr fl6_src; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
struct TYPE_2__ {int loc_port; int rmt_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcphdr*,int ,int ) ;
 int FUNC_1 (struct dst_entry*) ;
 struct inet6_request_sock* FUNC_2 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct request_sock*) ;
 int FUNC_5 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,struct flowi*,struct ipv6_txoptions*,int ) ;
 int FUNC_7 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_8 (struct flowi*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct request_sock*,struct flowi*) ;
 int FUNC_11 (struct sock*,struct ipv6_txoptions*,int ) ;
 int FUNC_12 (struct sock*) ;
 struct tcphdr* FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sock*,struct dst_entry*,struct request_sock*) ;
 int FUNC_15 (int ,struct in6_addr*,struct in6_addr*,int ) ;
 int FUNC_16 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static int FUNC_17(struct sock *VAR_1, struct request_sock *VAR_2)
{
 struct inet6_request_sock *VAR_3 = FUNC_2(VAR_2);
 struct ipv6_pinfo *VAR_4 = FUNC_3(VAR_1);
 struct sk_buff * VAR_5;
 struct ipv6_txoptions *VAR_6 = ((void*)0);
 struct in6_addr * VAR_7 = ((void*)0), VAR_8;
 struct flowi VAR_9;
 struct dst_entry *VAR_10;
 int VAR_11 = -1;

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.proto = VAR_0;
 FUNC_7(&VAR_9.fl6_dst, &VAR_3->rmt_addr);
 FUNC_7(&VAR_9.fl6_src, &VAR_3->loc_addr);
 VAR_9.fl6_flowlabel = 0;
 VAR_9.oif = VAR_3->iif;
 VAR_9.fl_ip_dport = FUNC_4(VAR_2)->rmt_port;
 VAR_9.fl_ip_sport = FUNC_4(VAR_2)->loc_port;
 FUNC_10(VAR_2, &VAR_9);

 VAR_6 = VAR_4->opt;
 if (VAR_6 && VAR_6->srcrt) {
  struct rt0_hdr *VAR_12 = (struct rt0_hdr *) VAR_6->srcrt;
  FUNC_7(&VAR_8, &VAR_9.fl6_dst);
  FUNC_7(&VAR_9.fl6_dst, VAR_12->addr);
  VAR_7 = &VAR_8;
 }

 VAR_11 = FUNC_5(VAR_1, &VAR_10, &VAR_9);
 if (VAR_11)
  goto done;
 if (VAR_7)
  FUNC_7(&VAR_9.fl6_dst, VAR_7);
 if ((VAR_11 = FUNC_16(FUNC_12(VAR_1), &VAR_10, &VAR_9, VAR_1, 0)) < 0)
  goto done;

 VAR_5 = FUNC_14(VAR_1, VAR_10, VAR_2);
 if (VAR_5) {
  struct tcphdr *VAR_13 = FUNC_13(VAR_5);

  VAR_13->check = FUNC_15(VAR_5->len,
      &VAR_3->loc_addr, &VAR_3->rmt_addr,
      FUNC_0(VAR_13, VAR_5->len, VAR_5->csum));

  FUNC_7(&VAR_9.fl6_dst, &VAR_3->rmt_addr);
  VAR_11 = FUNC_6(VAR_1, VAR_5, &VAR_9, VAR_6, 0);
  VAR_11 = FUNC_9(VAR_11);
 }

done:
 if (VAR_6 && VAR_6 != VAR_4->opt)
  FUNC_11(VAR_1, VAR_6, VAR_6->tot_len);
 FUNC_1(VAR_10);
 return VAR_11;
}
