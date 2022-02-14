
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in6; } ;
struct hash_net6_elem {int cidr; TYPE_1__ ip; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct hash_net6_elem *VAR_0,
      const struct hash_net6_elem *VAR_1)
{
 FUNC_0(&VAR_0->ip.in6, &VAR_1->ip.in6);
 VAR_0->cidr = VAR_1->cidr;
}
