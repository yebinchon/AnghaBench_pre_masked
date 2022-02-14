
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_protocol {int (* gso_send_check ) (struct sk_buff*) ;} ;
struct net_offload {int (* gso_send_check ) (struct sk_buff*) ;} ;
struct iphdr {int ihl; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5)
{
 struct iphdr *VAR_6;
 const struct net_offload *VAR_7;
 const struct net_protocol *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = -VAR_0;

 if (FUNC_10(!FUNC_3(VAR_5, sizeof(*VAR_6))))
  goto out;

 VAR_6 = FUNC_1(VAR_5);
 VAR_10 = VAR_6->ihl * 4;
 if (VAR_10 < sizeof(*VAR_6))
  goto out;

 if (FUNC_10(!FUNC_3(VAR_5, VAR_10)))
  goto out;

 FUNC_0(VAR_5, VAR_10);
 FUNC_7(VAR_5);
 VAR_6 = FUNC_1(VAR_5);
 VAR_9 = VAR_6->protocol & (VAR_2 - 1);
 VAR_11 = -VAR_1;

 FUNC_5();
 VAR_7 = FUNC_4(VAR_3[VAR_9]);
 if (FUNC_2(VAR_7 && VAR_7->gso_send_check))
  VAR_11 = VAR_7->gso_send_check(VAR_5);
 else {



  VAR_8 = FUNC_4(VAR_4[VAR_9]);
  if (VAR_8 && VAR_8->gso_send_check)
   VAR_11 = VAR_8->gso_send_check(VAR_5);
 }

 FUNC_6();

out:
 return VAR_11;
}
