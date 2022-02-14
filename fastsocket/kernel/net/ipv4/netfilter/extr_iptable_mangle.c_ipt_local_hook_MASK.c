
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct sk_buff {int len; scalar_t__ mark; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ tos; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int iptable_mangle; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct net_device const*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 unsigned int FUNC_4 (struct sk_buff*,unsigned int,struct net_device const*,struct net_device const*,int ) ;

__attribute__((used)) static unsigned int
FUNC_5(unsigned int VAR_5,
     struct sk_buff *VAR_6,
     const struct net_device *VAR_7,
     const struct net_device *VAR_8,
     int (*VAR_9)(struct sk_buff *))
{
 unsigned int VAR_10;
 const struct iphdr *VAR_11;
 u_int8_t VAR_12;
 __be32 VAR_13, VAR_14;
 u_int32_t VAR_15;


 if (VAR_6->len < sizeof(struct iphdr)
     || FUNC_2(VAR_6) < sizeof(struct iphdr))
  return VAR_0;


 VAR_15 = VAR_6->mark;
 VAR_11 = FUNC_1(VAR_6);
 VAR_13 = VAR_11->saddr;
 VAR_14 = VAR_11->daddr;
 VAR_12 = VAR_11->tos;

 VAR_10 = FUNC_4(VAR_6, VAR_5, VAR_7, VAR_8,
      FUNC_0(VAR_8)->ipv4.iptable_mangle);

 if (VAR_10 != VAR_1 && VAR_10 != VAR_3 && VAR_10 != VAR_2) {
  VAR_11 = FUNC_1(VAR_6);

  if (VAR_11->saddr != VAR_13 ||
      VAR_11->daddr != VAR_14 ||
      VAR_6->mark != VAR_15 ||
      VAR_11->tos != VAR_12)
   if (FUNC_3(VAR_6, VAR_4))
    VAR_10 = VAR_1;
 }

 return VAR_10;
}
