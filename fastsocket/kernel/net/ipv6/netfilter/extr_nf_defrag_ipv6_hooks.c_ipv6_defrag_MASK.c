
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ nfct; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,struct sk_buff*,struct net_device*,struct net_device*,int (*) (struct sk_buff*),scalar_t__) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_4,
    struct sk_buff *VAR_5,
    const struct net_device *VAR_6,
    const struct net_device *VAR_7,
    int (*VAR_8)(struct sk_buff *))
{
 struct sk_buff *VAR_9;


 if (VAR_5->nfct)
  return VAR_0;

 VAR_9 = FUNC_3(VAR_5, FUNC_1(VAR_4, VAR_5));

 if (VAR_9 == ((void*)0))
  return VAR_2;


 if (VAR_9 == VAR_5)
  return VAR_0;

 FUNC_2(VAR_9);

 FUNC_0(VAR_3, VAR_4, VAR_9,
         (struct net_device *) VAR_6, (struct net_device *) VAR_7,
         VAR_8, VAR_1 + 1);

 return VAR_2;
}
