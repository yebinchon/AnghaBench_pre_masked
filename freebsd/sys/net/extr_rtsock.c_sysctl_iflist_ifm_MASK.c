
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walkarg {TYPE_1__* w_req; scalar_t__ w_tmem; } ;
struct rt_addrinfo {int rti_addrs; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_index; } ;
struct if_data {int dummy; } ;
struct if_msghdr32 {int ifm_flags; struct if_data ifm_data; scalar_t__ _ifm_spare1; int ifm_index; int ifm_addrs; } ;
struct if_msghdr {int ifm_flags; struct if_data ifm_data; scalar_t__ _ifm_spare1; int ifm_index; int ifm_addrs; } ;
typedef int caddr_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct if_data*,struct if_data const*,int) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1, const struct if_data *VAR_2,
    struct rt_addrinfo *VAR_3, struct walkarg *VAR_4, int VAR_5)
{
 struct if_msghdr *VAR_6;
 struct if_data *VAR_7;

 VAR_6 = (struct if_msghdr *)VAR_4->w_tmem;
 {
  VAR_6->ifm_addrs = VAR_3->rti_addrs;
  VAR_6->ifm_flags = VAR_1->if_flags | VAR_1->if_drv_flags;
  VAR_6->ifm_index = VAR_1->if_index;
  VAR_6->_ifm_spare1 = 0;
  VAR_7 = &VAR_6->ifm_data;
 }

 FUNC_1(VAR_7, VAR_2, sizeof(*VAR_7));

 return (FUNC_0(VAR_4->w_req, (caddr_t)VAR_6, VAR_5));
}
