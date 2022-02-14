
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_offload {int (* gso_send_check ) (struct sk_buff*) ;} ;
struct ipv6hdr {int nexthdr; } ;
struct inet6_protocol {scalar_t__ gso_send_check; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4)
{
 struct ipv6hdr *VAR_5;
 const struct net_offload *VAR_6;
 const struct inet6_protocol *VAR_7;
 int VAR_8;
 int VAR_9 = -VAR_0;

 if (FUNC_11(!FUNC_4(VAR_4, sizeof(*VAR_5))))
  goto out;

 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_4, sizeof(*VAR_5));
 VAR_9 = -VAR_1;

 FUNC_6();
 VAR_8 = FUNC_1(VAR_4, VAR_5->nexthdr);
 VAR_6 = FUNC_5(VAR_2[VAR_8]);

 if (FUNC_3(VAR_6 && VAR_6->gso_send_check)) {
  FUNC_8(VAR_4);
  VAR_9 = VAR_6->gso_send_check(VAR_4);
 } else {
  VAR_7 = FUNC_5(VAR_3[VAR_8]);
  if (VAR_7 && VAR_7->gso_send_check) {
   FUNC_8(VAR_4);
   VAR_9 = VAR_6->gso_send_check(VAR_4);
  }
 }

 FUNC_7();

out:
 return VAR_9;
}
