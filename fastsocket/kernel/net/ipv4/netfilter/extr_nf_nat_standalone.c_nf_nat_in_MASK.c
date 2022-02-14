
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {scalar_t__ daddr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (unsigned int,struct sk_buff*,struct net_device const*,struct net_device const*,int (*) (struct sk_buff*)) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static unsigned int
FUNC_3(unsigned int VAR_2,
   struct sk_buff *VAR_3,
   const struct net_device *VAR_4,
   const struct net_device *VAR_5,
   int (*VAR_6)(struct sk_buff *))
{
 unsigned int VAR_7;
 __be32 VAR_8 = FUNC_0(VAR_3)->daddr;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 != VAR_0 && VAR_7 != VAR_1 &&
     VAR_8 != FUNC_0(VAR_3)->daddr)
  FUNC_2(VAR_3);

 return VAR_7;
}
