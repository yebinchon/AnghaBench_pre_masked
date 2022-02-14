
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_net4_elem {scalar_t__ ip; scalar_t__ cidr; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct hash_net4_elem *VAR_0,
      const struct hash_net4_elem *VAR_1)
{
 return VAR_0->ip == VAR_1->ip && VAR_0->cidr == VAR_1->cidr;
}
