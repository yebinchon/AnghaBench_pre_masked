
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipt_ecn_info {int ip_ect; } ;
struct TYPE_2__ {int tos; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct sk_buff *VAR_1,
       const struct ipt_ecn_info *VAR_2)
{
 return (FUNC_0(VAR_1)->tos & VAR_0) == VAR_2->ip_ect;
}
