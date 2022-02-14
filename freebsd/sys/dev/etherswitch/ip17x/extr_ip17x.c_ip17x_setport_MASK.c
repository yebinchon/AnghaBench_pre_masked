
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct TYPE_5__ {scalar_t__ (* ip17x_hw_setup ) (struct ip17x_softc*) ;} ;
struct ip17x_softc {size_t numports; int* portphy; scalar_t__ vlan_mode; scalar_t__* pvid; int addtag; int striptag; int cpuport; TYPE_1__ hal; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {scalar_t__ ifm_count; } ;
struct TYPE_7__ {size_t es_port; scalar_t__ es_pvid; int es_flags; int es_ifr; TYPE_2__ es_ifmr; } ;
typedef TYPE_3__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct ip17x_softc*,int ) ;
 int VAR_7 ;
 struct ip17x_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct ifnet*,int *,struct ifmedia*,int ) ;
 struct ifnet* FUNC_3 (struct ip17x_softc*,size_t) ;
 struct mii_data* FUNC_4 (struct ip17x_softc*,size_t) ;
 scalar_t__ FUNC_5 (struct ip17x_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8, etherswitch_port_t *VAR_9)
{
 struct ip17x_softc *VAR_10;
 struct ifmedia *VAR_11;
 struct ifnet *VAR_12;
 struct mii_data *VAR_13;
 int VAR_14;

  VAR_10 = FUNC_1(VAR_8);
 if (VAR_9->es_port < 0 || VAR_9->es_port >= VAR_10->numports)
  return (VAR_1);

 VAR_14 = VAR_10->portphy[VAR_9->es_port];
 VAR_12 = FUNC_3(VAR_10, VAR_9->es_port);
 VAR_13 = FUNC_4(VAR_10, VAR_9->es_port);
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  return (VAR_1);


 if (VAR_10->vlan_mode == VAR_4) {


  if (VAR_9->es_pvid != 0) {
   if (FUNC_0(VAR_10, VAR_5) &&
       VAR_9->es_pvid > VAR_6)
    return (VAR_1);
   VAR_10->pvid[VAR_14] = VAR_9->es_pvid;
  }


  if (VAR_9->es_flags & VAR_2 &&
      VAR_9->es_flags & VAR_3)
   return (VAR_0);


  VAR_10->addtag &= ~(1 << VAR_14);
  VAR_10->striptag &= ~(1 << VAR_14);


  if (VAR_9->es_flags & VAR_2)
   VAR_10->addtag |= (1 << VAR_14);
  if (VAR_9->es_flags & VAR_3)
   VAR_10->striptag |= (1 << VAR_14);
 }


 if (VAR_10->hal.ip17x_hw_setup(VAR_10))
  return (VAR_1);


 if (VAR_14 == VAR_10->cpuport)
  return (0);


 if (VAR_9->es_ifmr.ifm_count == 0)
  return (0);

 VAR_11 = &VAR_13->mii_media;
 return (FUNC_2(VAR_12, &VAR_9->es_ifr, VAR_11, VAR_7));
}
