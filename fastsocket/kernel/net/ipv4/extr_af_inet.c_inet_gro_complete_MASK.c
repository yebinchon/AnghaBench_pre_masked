
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct net_protocol {int (* gro_complete ) (struct sk_buff*) ;} ;
struct net_offload {int (* gro_complete ) (struct sk_buff*) ;} ;
struct iphdr {int protocol; int tot_len; int check; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_2 ;
 int * VAR_3 ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4)
{
 const struct net_protocol *VAR_5;
 const struct net_offload *VAR_6;
 struct iphdr *VAR_7 = FUNC_3(VAR_4);
 int VAR_8 = VAR_7->protocol & (VAR_1 - 1);
 int VAR_9 = -VAR_0;
 __be16 VAR_10 = FUNC_2(VAR_4->len - FUNC_7(VAR_4));

 FUNC_1(&VAR_7->check, VAR_7->tot_len, VAR_10);
 VAR_7->tot_len = VAR_10;

 FUNC_5();
 VAR_6 = FUNC_4(VAR_2[VAR_8]);
 if (FUNC_10(!VAR_6 || !VAR_6->gro_complete)) {

  VAR_5 = FUNC_4(VAR_3[VAR_8]);
  if (!VAR_5 || !VAR_5->gro_complete) {
   FUNC_0(1);
   goto out_unlock;
  }
  VAR_9 = VAR_5->gro_complete(VAR_4);
 } else
  VAR_9 = VAR_6->gro_complete(VAR_4);

out_unlock:
 FUNC_6();

 return VAR_9;
}
