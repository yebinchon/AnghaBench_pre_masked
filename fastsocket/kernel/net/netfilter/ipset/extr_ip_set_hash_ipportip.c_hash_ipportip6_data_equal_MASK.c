
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in6; } ;
struct TYPE_4__ {int in6; } ;
struct hash_ipportip6_elem {scalar_t__ port; scalar_t__ proto; TYPE_1__ ip2; TYPE_2__ ip; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static inline bool
FUNC_1(const struct hash_ipportip6_elem *VAR_0,
     const struct hash_ipportip6_elem *VAR_1)
{
 return FUNC_0(&VAR_0->ip.in6, &VAR_1->ip.in6) == 0 &&
        FUNC_0(&VAR_0->ip2.in6, &VAR_1->ip2.in6) == 0 &&
        VAR_0->port == VAR_1->port &&
        VAR_0->proto == VAR_1->proto;
}
