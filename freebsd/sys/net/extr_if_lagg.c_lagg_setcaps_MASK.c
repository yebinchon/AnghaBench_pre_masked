
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lagg_port {int (* lp_ioctl ) (TYPE_1__*,int ,int ) ;TYPE_1__* lp_ifp; } ;
struct ifreq {int ifr_reqcap; } ;
typedef int caddr_t ;
struct TYPE_2__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct lagg_port *VAR_2, int VAR_3)
{
 struct ifreq VAR_4;

 if (VAR_2->lp_ifp->if_capenable == VAR_3)
  return (0);
 if (VAR_2->lp_ioctl == ((void*)0))
  return (VAR_0);
 VAR_4.ifr_reqcap = VAR_3;
 return ((*VAR_2->lp_ioctl)(VAR_2->lp_ifp, VAR_1, (caddr_t)&VAR_4));
}
