
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void const*,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1,
          const void *VAR_2, unsigned int VAR_3)
{
 if (VAR_1->ip_summed == VAR_0)
  VAR_1->csum = FUNC_0(VAR_1->csum, FUNC_1(VAR_2, VAR_3, 0));
}
