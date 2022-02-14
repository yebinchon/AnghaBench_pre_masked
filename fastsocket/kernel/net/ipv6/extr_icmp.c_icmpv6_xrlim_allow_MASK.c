
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct TYPE_8__ {int plen; } ;
struct rt6_info {TYPE_4__ rt6i_dst; } ;
struct TYPE_6__ {int icmpv6_time; } ;
struct TYPE_7__ {TYPE_2__ sysctl; } ;
struct net {TYPE_3__ ipv6; } ;
struct flowi {int dummy; } ;
struct dst_entry {TYPE_1__* dev; scalar_t__ error; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct dst_entry*) ;
 struct dst_entry* FUNC_3 (struct net*,struct sock*,struct flowi*) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct dst_entry*,int) ;

__attribute__((used)) static inline int FUNC_6(struct sock *VAR_4, u8 VAR_5,
         struct flowi *VAR_6)
{
 struct dst_entry *VAR_7;
 struct net *VAR_8 = FUNC_4(VAR_4);
 int VAR_9 = 0;


 if (VAR_5 & VAR_0)
  return 1;


 if (VAR_5 == VAR_1)
  return 1;






 VAR_7 = FUNC_3(VAR_8, VAR_4, VAR_6);
 if (VAR_7->error) {
  FUNC_0(VAR_8, FUNC_2(VAR_7),
         VAR_3);
 } else if (VAR_7->dev && (VAR_7->dev->flags&VAR_2)) {
  VAR_9 = 1;
 } else {
  struct rt6_info *VAR_10 = (struct rt6_info *)VAR_7;
  int VAR_11 = VAR_8->ipv6.sysctl.icmpv6_time;


  if (VAR_10->rt6i_dst.plen < 128)
   VAR_11 >>= ((128 - VAR_10->rt6i_dst.plen)>>5);

  VAR_9 = FUNC_5(VAR_7, VAR_11);
 }
 FUNC_1(VAR_7);
 return VAR_9;
}
