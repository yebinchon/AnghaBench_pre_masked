
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_protocol {int (* state_transition ) (struct ip_vs_conn*,int,struct sk_buff const*,struct ip_vs_protocol*) ;} ;
struct ip_vs_conn {int dummy; } ;


 int FUNC_0 (struct ip_vs_conn*,int,struct sk_buff const*,struct ip_vs_protocol*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(struct ip_vs_conn *VAR_0, int VAR_1,
  const struct sk_buff *VAR_2,
  struct ip_vs_protocol *VAR_3)
{
 if (FUNC_1(!VAR_3->state_transition))
  return 0;
 return VAR_3->state_transition(VAR_0, VAR_1, VAR_2, VAR_3);
}
