
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ nfct; } ;
struct net_device {int dummy; } ;
typedef enum ip_defrag_users { ____Placeholder_ip_defrag_users } ip_defrag_users ;
struct TYPE_2__ {int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (unsigned int,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_4,
       struct sk_buff *VAR_5,
       const struct net_device *VAR_6,
       const struct net_device *VAR_7,
       int (*VAR_8)(struct sk_buff *))
{
 if (FUNC_1(VAR_5)->frag_off & FUNC_0(VAR_0 | VAR_1)) {
  enum ip_defrag_users VAR_9 = FUNC_2(VAR_4, VAR_5);
  if (FUNC_3(VAR_5, VAR_9))
   return VAR_3;
 }
 return VAR_2;
}
