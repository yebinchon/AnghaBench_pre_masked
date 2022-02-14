
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*,int*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2(unsigned int VAR_2, struct sk_buff *VAR_3,
     const struct net_device *VAR_4, const struct net_device *VAR_5,
     int (*VAR_6)(struct sk_buff *))
{
 int VAR_7;

 if (FUNC_0(VAR_3)->protocol != VAR_0)
  return VAR_1;

 return FUNC_1(VAR_3, &VAR_7, VAR_2);
}
