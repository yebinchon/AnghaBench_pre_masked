
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ dst; } ;
struct TYPE_4__ {int plen; int addr; } ;
struct rt6_info {int rt6i_nexthop; TYPE_3__ u; int rt6i_flags; TYPE_1__ rt6i_dst; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rt6_info* FUNC_0 (struct rt6_info*) ;
 int FUNC_1 (int *,struct in6_addr*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct rt6_info *FUNC_3(struct rt6_info *VAR_2, struct in6_addr *VAR_3)
{
 struct rt6_info *VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_1(&VAR_4->rt6i_dst.addr, VAR_3);
  VAR_4->rt6i_dst.plen = 128;
  VAR_4->rt6i_flags |= VAR_1;
  VAR_4->u.dst.flags |= VAR_0;
  VAR_4->rt6i_nexthop = FUNC_2(VAR_2->rt6i_nexthop);
 }
 return VAR_4;
}
