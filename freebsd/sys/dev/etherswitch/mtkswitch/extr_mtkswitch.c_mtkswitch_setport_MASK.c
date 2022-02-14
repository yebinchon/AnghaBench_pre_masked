
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* mtkswitch_port_vlan_setup ) (struct mtkswitch_softc*,TYPE_3__*) ;} ;
struct TYPE_6__ {scalar_t__ es_nports; } ;
struct mtkswitch_softc {scalar_t__ vlan_mode; TYPE_2__ hal; TYPE_1__ info; } ;
struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {scalar_t__ es_port; int es_ifr; } ;
typedef TYPE_3__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mtkswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,int *,struct ifmedia*,int ) ;
 struct ifnet* FUNC_2 (struct mtkswitch_softc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mtkswitch_softc*,scalar_t__) ;
 struct mii_data* FUNC_4 (struct mtkswitch_softc*,scalar_t__) ;
 int FUNC_5 (struct mtkswitch_softc*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, etherswitch_port_t *VAR_4)
{
 int VAR_5;
 struct mtkswitch_softc *VAR_6;
 struct ifmedia *VAR_7;
 struct mii_data *VAR_8;
 struct ifnet *VAR_9;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_4->es_port < 0 || VAR_4->es_port > VAR_6->info.es_nports)
  return (VAR_0);


 if (VAR_6->vlan_mode == VAR_1) {
  VAR_5 = VAR_6->hal.mtkswitch_port_vlan_setup(VAR_6, VAR_4);
  if (VAR_5)
   return (VAR_5);
 }


 if (FUNC_3(VAR_6, VAR_4->es_port))
  return (0);

 VAR_8 = FUNC_4(VAR_6, VAR_4->es_port);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_9 = FUNC_2(VAR_6, VAR_4->es_port);

 VAR_7 = &VAR_8->mii_media;
 return (FUNC_1(VAR_9, &VAR_4->es_ifr, VAR_7, VAR_2));
}
