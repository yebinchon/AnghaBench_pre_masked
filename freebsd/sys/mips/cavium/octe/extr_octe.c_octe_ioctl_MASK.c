
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_mtu; int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; TYPE_2__* if_softc; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct TYPE_6__ {int if_flags; int media; int * miibus; } ;
typedef TYPE_2__ cvm_oct_private_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct ifnet*,struct ifaddr*) ;
 int FUNC_1 (struct ifnet*,int ) ;
 struct mii_data* FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 cvm_oct_private_t *VAR_7;
 struct mii_data *VAR_8;
 struct ifreq *VAR_9;



 int VAR_10;

 VAR_7 = VAR_4->if_softc;
 VAR_9 = (struct ifreq *)VAR_6;




 switch (VAR_5) {
 case 132:
  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6);
  if (VAR_10 != 0)
   return (VAR_10);
  return (0);

 case 130:
  if (VAR_4->if_flags == VAR_7->if_flags)
   return (0);
  if ((VAR_4->if_flags & VAR_3) != 0) {
   if ((VAR_4->if_drv_flags & VAR_2) == 0)
    FUNC_5(VAR_7);
  } else {
   if ((VAR_4->if_drv_flags & VAR_2) != 0)
    FUNC_6(VAR_7);
  }
  VAR_7->if_flags = VAR_4->if_flags;
  return (0);

 case 131:





  VAR_4->if_capenable = VAR_9->ifr_reqcap;
  return (0);

 case 128:
  VAR_10 = FUNC_1(VAR_4, VAR_9->ifr_mtu);
  if (VAR_10 != 0)
   return (VAR_1);
  return (0);

 case 129:
 case 133:
  if (VAR_7->miibus != ((void*)0)) {
   VAR_8 = FUNC_2(VAR_7->miibus);
   VAR_10 = FUNC_4(VAR_4, VAR_9, &VAR_8->mii_media, VAR_5);
   if (VAR_10 != 0)
    return (VAR_10);
   return (0);
  }
  VAR_10 = FUNC_4(VAR_4, VAR_9, &VAR_7->media, VAR_5);
  if (VAR_10 != 0)
   return (VAR_10);
  return (0);

 default:
  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6);
  if (VAR_10 != 0)
   return (VAR_10);
  return (0);
 }
}
