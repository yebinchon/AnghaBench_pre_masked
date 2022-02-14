
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; scalar_t__ cb; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ar_pln; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct sk_buff*,struct net_device*,struct net_device*,int ) ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_6(unsigned int VAR_7, struct sk_buff *VAR_8,
          const struct net_device *VAR_9,
          const struct net_device *VAR_10,
          int (*VAR_11)(struct sk_buff *))
{
 struct net_device **VAR_12 = (struct net_device **)(VAR_8->cb);






 if (VAR_8->protocol != FUNC_3(VAR_0)) {
  if (!FUNC_0(VAR_8))
   return VAR_2;
  FUNC_4(VAR_8);
 }

 if (FUNC_2(VAR_8)->ar_pln != 4) {
  if (FUNC_0(VAR_8))
   FUNC_5(VAR_8);
  return VAR_2;
 }
 *VAR_12 = (struct net_device *)VAR_9;
 FUNC_1(VAR_1, VAR_3, VAR_8, (struct net_device *)VAR_9,
  (struct net_device *)VAR_10, VAR_5);

 return VAR_4;
}
