
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walkarg {scalar_t__ w_tmem; int w_req; } ;
struct rt_addrinfo {int rti_addrs; } ;
struct ifaddr {TYPE_1__* ifa_ifp; int ifa_flags; } ;
struct ifa_msghdr {int ifam_metric; scalar_t__ _ifam_spare1; int ifam_index; int ifam_flags; int ifam_addrs; } ;
struct TYPE_2__ {int if_metric; int if_index; } ;


 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct ifaddr *VAR_0, struct rt_addrinfo *VAR_1,
    struct walkarg *VAR_2, int VAR_3)
{
 struct ifa_msghdr *VAR_4;

 VAR_4 = (struct ifa_msghdr *)VAR_2->w_tmem;
 VAR_4->ifam_addrs = VAR_1->rti_addrs;
 VAR_4->ifam_flags = VAR_0->ifa_flags;
 VAR_4->ifam_index = VAR_0->ifa_ifp->if_index;
 VAR_4->_ifam_spare1 = 0;
 VAR_4->ifam_metric = VAR_0->ifa_ifp->if_metric;

 return (FUNC_0(VAR_2->w_req, VAR_2->w_tmem, VAR_3));
}
