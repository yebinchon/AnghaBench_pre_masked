
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ukswitch_softc {size_t numports; scalar_t__* portphy; scalar_t__ cpuport; } ;
struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {size_t es_port; int es_ifr; } ;
typedef TYPE_1__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ukswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,int *,struct ifmedia*,int ) ;
 struct ifnet* FUNC_2 (struct ukswitch_softc*,size_t) ;
 struct mii_data* FUNC_3 (struct ukswitch_softc*,size_t) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, etherswitch_port_t *VAR_3)
{
 struct ukswitch_softc *VAR_4 = FUNC_0(VAR_2);
 struct ifmedia *VAR_5;
 struct mii_data *VAR_6;
 struct ifnet *VAR_7;
 int VAR_8;

 if (VAR_3->es_port < 0 || VAR_3->es_port >= VAR_4->numports)
  return (VAR_0);

 if (VAR_4->portphy[VAR_3->es_port] == VAR_4->cpuport)
  return (VAR_0);

 VAR_6 = FUNC_3(VAR_4, VAR_3->es_port);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_2(VAR_4, VAR_3->es_port);

 VAR_5 = &VAR_6->mii_media;
 VAR_8 = FUNC_1(VAR_7, &VAR_3->es_ifr, VAR_5, VAR_1);
 return (VAR_8);
}
