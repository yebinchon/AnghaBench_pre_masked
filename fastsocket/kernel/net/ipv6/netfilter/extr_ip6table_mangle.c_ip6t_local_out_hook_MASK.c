
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct sk_buff {int len; scalar_t__ mark; } ;
struct net_device {int dummy; } ;
struct iphdr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int saddr ;
typedef int daddr ;
struct TYPE_4__ {int ip6table_mangle; } ;
struct TYPE_6__ {TYPE_1__ ipv6; } ;
struct TYPE_5__ {scalar_t__ hop_limit; int daddr; int saddr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_3__* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*,unsigned int,struct net_device const*,struct net_device const*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int *,struct in6_addr*,int) ;
 int FUNC_6 (struct in6_addr*,int *,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*) ;

__attribute__((used)) static unsigned int
FUNC_9(unsigned int VAR_3,
     struct sk_buff *VAR_4,
     const struct net_device *VAR_5,
     const struct net_device *VAR_6,
     int (*VAR_7)(struct sk_buff *))
{

 unsigned int VAR_8;
 struct in6_addr VAR_9, VAR_10;
 u_int8_t VAR_11;
 u_int32_t VAR_12, VAR_13;
 FUNC_6(&VAR_9, &FUNC_4(VAR_4)->saddr, sizeof(VAR_9));
 FUNC_6(&VAR_10, &FUNC_4(VAR_4)->daddr, sizeof(VAR_10));
 VAR_13 = VAR_4->mark;
 VAR_11 = FUNC_4(VAR_4)->hop_limit;


 VAR_12 = *((u_int32_t *)FUNC_4(VAR_4));

 VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_5, VAR_6,
       FUNC_0(VAR_6)->ipv6.ip6table_mangle);

 if (VAR_8 != VAR_1 && VAR_8 != VAR_2
  && (FUNC_5(&FUNC_4(VAR_4)->saddr, &VAR_9, sizeof(VAR_9))
      || FUNC_5(&FUNC_4(VAR_4)->daddr, &VAR_10, sizeof(VAR_10))
      || VAR_4->mark != VAR_13
      || FUNC_4(VAR_4)->hop_limit != VAR_11))
  return FUNC_1(VAR_4) == 0 ? VAR_8 : VAR_1;

 return VAR_8;
}
