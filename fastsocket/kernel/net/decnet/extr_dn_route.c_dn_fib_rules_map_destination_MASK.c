
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dn_fib_res {TYPE_2__* fi; int prefixlen; } ;
typedef int __le16 ;
struct TYPE_4__ {TYPE_1__* fib_nh; } ;
struct TYPE_3__ {int nh_gw; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline __le16 FUNC_1(__le16 VAR_0, struct dn_fib_res *VAR_1)
{
 __le16 VAR_2 = FUNC_0(VAR_1->prefixlen);
 return (VAR_0&~VAR_2)|VAR_1->fi->fib_nh->nh_gw;
}
