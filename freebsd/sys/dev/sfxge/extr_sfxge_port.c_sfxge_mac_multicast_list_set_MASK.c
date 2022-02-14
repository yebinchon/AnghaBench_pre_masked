
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_port {scalar_t__ mcast_count; int mcast_addrs; int lock; } ;
struct sfxge_softc {int dev; int enp; struct sfxge_port port; struct ifnet* ifnet; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ifnet*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct sfxge_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->ifnet;
 struct sfxge_port *VAR_6 = &VAR_4->port;
 int VAR_7 = 0;

 FUNC_3(&VAR_6->lock, VAR_2);

 VAR_6->mcast_count = FUNC_2(VAR_5, VAR_3,
     VAR_6->mcast_addrs);
 if (VAR_6->mcast_count == VAR_0) {
  FUNC_0(VAR_4->dev, "Too many multicast addresses\n");
  VAR_7 = VAR_1;
 }

 if (VAR_7 == 0) {
  VAR_7 = FUNC_1(VAR_4->enp, VAR_6->mcast_addrs,
      VAR_6->mcast_count);
  if (VAR_7 != 0)
   FUNC_0(VAR_4->dev,
       "Cannot set multicast address list\n");
 }

 return (VAR_7);
}
