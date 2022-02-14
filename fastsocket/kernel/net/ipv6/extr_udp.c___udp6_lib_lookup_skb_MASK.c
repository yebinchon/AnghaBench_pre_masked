
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_table {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 struct sock* FUNC_0 (int ,int *,int ,int *,int ,int ,struct udp_table*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct sock* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_7(struct sk_buff *VAR_0,
       __be16 VAR_1, __be16 VAR_2,
       struct udp_table *VAR_3)
{
 struct sock *VAR_4;
 struct ipv6hdr *VAR_5 = FUNC_3(VAR_0);

 if (FUNC_6(VAR_4 = FUNC_5(VAR_0)))
  return VAR_4;
 return FUNC_0(FUNC_1(FUNC_4(VAR_0)->dev), &VAR_5->saddr, VAR_1,
     &VAR_5->daddr, VAR_2, FUNC_2(VAR_0),
     VAR_3);
}
