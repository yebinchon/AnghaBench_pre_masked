
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int nat_table; } ;
struct net {TYPE_1__ ipv4; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct nf_conn*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int,struct net_device const*,struct net_device const*,int ) ;
 struct net* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*,int ) ;

int FUNC_5(struct sk_buff *VAR_1,
       unsigned int VAR_2,
       const struct net_device *VAR_3,
       const struct net_device *VAR_4,
       struct nf_conn *VAR_5)
{
 struct net *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6->ipv4.nat_table);

 if (VAR_7 == VAR_0) {
  if (!FUNC_4(VAR_5, FUNC_0(VAR_2)))

   VAR_7 = FUNC_1(VAR_5, VAR_2);
 }
 return VAR_7;
}
