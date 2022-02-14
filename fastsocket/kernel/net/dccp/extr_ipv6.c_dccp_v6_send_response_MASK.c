
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct request_sock {int dummy; } ;
struct ipv6_txoptions {int tot_len; int * srcrt; } ;
struct ipv6_pinfo {struct ipv6_txoptions* opt; } ;
struct in6_addr {int dummy; } ;
struct inet6_request_sock {struct in6_addr rmt_addr; struct in6_addr loc_addr; int iif; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; int oif; scalar_t__ fl6_flowlabel; struct in6_addr fl6_src; int proto; } ;
struct dst_entry {int dummy; } ;
struct dccp_hdr {int dccph_checksum; } ;
typedef int fl ;
struct TYPE_2__ {int loc_port; int rmt_port; } ;


 int VAR_0 ;
 struct dccp_hdr* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*,struct dst_entry*,struct request_sock*) ;
 int FUNC_2 (struct sk_buff*,struct in6_addr*,struct in6_addr*) ;
 int FUNC_3 (struct dst_entry*) ;
 struct inet6_request_sock* FUNC_4 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 TYPE_1__* FUNC_6 (struct request_sock*) ;
 int FUNC_7 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_8 (struct sock*,struct sk_buff*,struct flowi*,struct ipv6_txoptions*,int ) ;
 int FUNC_9 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_10 (struct flowi*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct request_sock*,struct flowi*) ;
 int FUNC_13 (struct sock*,struct ipv6_txoptions*,int ) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_1, struct request_sock *VAR_2)
{
 struct inet6_request_sock *VAR_3 = FUNC_4(VAR_2);
 struct ipv6_pinfo *VAR_4 = FUNC_5(VAR_1);
 struct sk_buff *VAR_5;
 struct ipv6_txoptions *VAR_6 = ((void*)0);
 struct in6_addr *VAR_7 = ((void*)0), VAR_8;
 struct flowi VAR_9;
 int VAR_10 = -1;
 struct dst_entry *VAR_11;

 FUNC_10(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.proto = VAR_0;
 FUNC_9(&VAR_9.fl6_dst, &VAR_3->rmt_addr);
 FUNC_9(&VAR_9.fl6_src, &VAR_3->loc_addr);
 VAR_9.fl6_flowlabel = 0;
 VAR_9.oif = VAR_3->iif;
 VAR_9.fl_ip_dport = FUNC_6(VAR_2)->rmt_port;
 VAR_9.fl_ip_sport = FUNC_6(VAR_2)->loc_port;
 FUNC_12(VAR_2, &VAR_9);

 VAR_6 = VAR_4->opt;

 if (VAR_6 != ((void*)0) && VAR_6->srcrt != ((void*)0)) {
  const struct rt0_hdr *VAR_12 = (struct rt0_hdr *)VAR_6->srcrt;

  FUNC_9(&VAR_8, &VAR_9.fl6_dst);
  FUNC_9(&VAR_9.fl6_dst, VAR_12->addr);
  VAR_7 = &VAR_8;
 }

 VAR_10 = FUNC_7(VAR_1, &VAR_11, &VAR_9);
 if (VAR_10)
  goto done;

 if (VAR_7)
  FUNC_9(&VAR_9.fl6_dst, VAR_7);

 VAR_10 = FUNC_15(FUNC_14(VAR_1), &VAR_11, &VAR_9, VAR_1, 0);
 if (VAR_10 < 0)
  goto done;

 VAR_5 = FUNC_1(VAR_1, VAR_11, VAR_2);
 if (VAR_5 != ((void*)0)) {
  struct dccp_hdr *VAR_13 = FUNC_0(VAR_5);

  VAR_13->dccph_checksum = FUNC_2(VAR_5,
        &VAR_3->loc_addr,
        &VAR_3->rmt_addr);
  FUNC_9(&VAR_9.fl6_dst, &VAR_3->rmt_addr);
  VAR_10 = FUNC_8(VAR_1, VAR_5, &VAR_9, VAR_6, 0);
  VAR_10 = FUNC_11(VAR_10);
 }

done:
 if (VAR_6 != ((void*)0) && VAR_6 != VAR_4->opt)
  FUNC_13(VAR_1, VAR_6, VAR_6->tot_len);
 FUNC_3(VAR_11);
 return VAR_10;
}
