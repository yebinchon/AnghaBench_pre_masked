
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct net_offload {int (* gro_complete ) (struct sk_buff*) ;} ;
struct ipv6hdr {int payload_len; } ;
struct inet6_protocol {int (* gro_complete ) (struct sk_buff*) ;} ;
struct TYPE_2__ {size_t proto; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int * VAR_2 ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_3)
{
 const struct net_offload *VAR_4;
 const struct inet6_protocol *VAR_5;
 struct ipv6hdr *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = -VAR_0;

 VAR_6->payload_len = FUNC_2(VAR_3->len - FUNC_7(VAR_3) -
     sizeof(*VAR_6));

 FUNC_5();
 VAR_4 = FUNC_4(VAR_1[FUNC_0(VAR_3)->proto]);
 if (FUNC_10(!VAR_4 || !VAR_4->gro_complete)) {
  VAR_5 = FUNC_4(VAR_2[FUNC_0(VAR_3)->proto]);
  if (!VAR_5 || !VAR_5->gro_complete) {
   FUNC_1(1);
   goto out_unlock;
  }
  VAR_7 = VAR_5->gro_complete(VAR_3);
 } else
  VAR_7 = VAR_4->gro_complete(VAR_3);

out_unlock:
 FUNC_6();

 return VAR_7;
}
