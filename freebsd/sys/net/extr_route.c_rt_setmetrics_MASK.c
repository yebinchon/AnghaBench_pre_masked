
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {scalar_t__ rt_mtu; scalar_t__ rt_expire; int rt_weight; int rt_flags; } ;
struct rt_addrinfo {int rti_mflags; TYPE_1__* rti_rmx; } ;
struct TYPE_2__ {scalar_t__ rmx_mtu; scalar_t__ rmx_expire; int rmx_weight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_0(const struct rt_addrinfo *VAR_6, struct rtentry *VAR_7)
{

 if (VAR_6->rti_mflags & VAR_2) {
  if (VAR_6->rti_rmx->rmx_mtu != 0) {





   VAR_7->rt_flags |= VAR_0;
  } else {





   VAR_7->rt_flags &= ~VAR_0;
  }
  VAR_7->rt_mtu = VAR_6->rti_rmx->rmx_mtu;
 }
 if (VAR_6->rti_mflags & VAR_3)
  VAR_7->rt_weight = VAR_6->rti_rmx->rmx_weight;

 if (VAR_6->rti_mflags & VAR_1)
  VAR_7->rt_expire = VAR_6->rti_rmx->rmx_expire ?
      VAR_6->rti_rmx->rmx_expire - VAR_4 + VAR_5 : 0;
}
