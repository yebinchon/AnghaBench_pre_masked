
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int dummy; } ;
struct TYPE_7__ {int (* arswitch_port_vlan_setup ) (struct arswitch_softc*,TYPE_3__*) ;} ;
struct TYPE_6__ {scalar_t__ es_nports; } ;
struct arswitch_softc {scalar_t__ vlan_mode; TYPE_2__ hal; TYPE_1__ info; } ;
struct TYPE_8__ {scalar_t__ es_port; int es_ifr; int * es_led; } ;
typedef TYPE_3__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ifnet* FUNC_1 (struct arswitch_softc*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct arswitch_softc*,scalar_t__) ;
 struct mii_data* FUNC_3 (struct arswitch_softc*,scalar_t__) ;
 int FUNC_4 (struct arswitch_softc*,scalar_t__,int,int ) ;
 struct arswitch_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int *,struct ifmedia*,int ) ;
 int FUNC_7 (struct arswitch_softc*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4, etherswitch_port_t *VAR_5)
{
 int VAR_6, VAR_7;
 struct arswitch_softc *VAR_8;
 struct ifmedia *VAR_9;
 struct mii_data *VAR_10;
 struct ifnet *VAR_11;

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_5->es_port < 0 || VAR_5->es_port > VAR_8->info.es_nports)
  return (VAR_1);


 if (VAR_8->vlan_mode == VAR_2) {
  VAR_6 = VAR_8->hal.arswitch_port_vlan_setup(VAR_8, VAR_5);
  if (VAR_6)
   return (VAR_6);
 }


 if (FUNC_2(VAR_8, VAR_5->es_port))
  return (0);

 if (FUNC_0(VAR_8, VAR_0))
 {
  for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
  {
   int VAR_12;
   VAR_12 = FUNC_4(VAR_8, VAR_5->es_port-1, VAR_7, VAR_5->es_led[VAR_7]);
   if (VAR_12)
    return (VAR_12);
  }
 }

 VAR_10 = FUNC_3(VAR_8, VAR_5->es_port);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_11 = FUNC_1(VAR_8, VAR_5->es_port);

 VAR_9 = &VAR_10->mii_media;
 return (FUNC_6(VAR_11, &VAR_5->es_ifr, VAR_9, VAR_3));
}
