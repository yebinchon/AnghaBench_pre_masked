
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 () ;
 unsigned int FUNC_2 (int ,int ,unsigned int,struct sk_buff*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_2,
      struct sk_buff *VAR_3,
      const struct net_device *VAR_4,
      const struct net_device *VAR_5,
      int (*VAR_6)(struct sk_buff *))
{

 if (VAR_3->len < sizeof(struct ipv6hdr)) {
  if (FUNC_1())
   FUNC_3("ipv6_conntrack_local: packet too short\n");
  return VAR_0;
 }
 return FUNC_2(FUNC_0(VAR_5), VAR_1, VAR_2, VAR_3);
}
