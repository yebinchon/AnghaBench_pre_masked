
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct sk_buff *VAR_2, bool VAR_3)
{
 if (VAR_3)
  return VAR_2->ip_summed != VAR_1;
 else
  return VAR_2->ip_summed == VAR_0;
}
