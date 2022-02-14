
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pktgen_dev {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct pktgen_dev*) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct pktgen_dev*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct net_device *VAR_1,
       struct pktgen_dev *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
