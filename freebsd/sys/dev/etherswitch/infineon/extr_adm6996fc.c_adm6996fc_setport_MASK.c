
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int dummy; } ;
struct adm6996fc_softc {size_t numports; scalar_t__ vlan_mode; scalar_t__* portphy; scalar_t__ cpuport; } ;
struct TYPE_3__ {size_t es_port; int es_pvid; int es_flags; int es_ifr; } ;
typedef TYPE_1__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ifnet* FUNC_2 (struct adm6996fc_softc*,size_t) ;
 struct mii_data* FUNC_3 (struct adm6996fc_softc*,size_t) ;
 int FUNC_4 (int ) ;
 struct adm6996fc_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int *,struct ifmedia*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, etherswitch_port_t *VAR_7)
{
 struct adm6996fc_softc *VAR_8;
 struct ifmedia *VAR_9;
 struct mii_data *VAR_10;
 struct ifnet *VAR_11;
 device_t VAR_12;
 int VAR_13;
 int VAR_14;

 int VAR_15[6] = {0x01, 0x03, 0x05, 0x07, 0x08, 0x09};
 int VAR_16[6] = {0x28, 0x29, 0x2a, 0x2b, 0x2b, 0x2c};

 VAR_8 = FUNC_5(VAR_6);
 VAR_12 = FUNC_4(VAR_6);

 if (VAR_7->es_port < 0 || VAR_7->es_port >= VAR_8->numports)
  return (VAR_2);

 if (VAR_8->vlan_mode == VAR_4) {
  VAR_14 = FUNC_0(VAR_12, VAR_15[VAR_7->es_port]);
  VAR_14 &= ~(0xf << 10);
  VAR_14 |= (VAR_7->es_pvid & 0xf) << VAR_1;
  if (VAR_7->es_flags & VAR_3)
   VAR_14 |= 1 << VAR_0;
  else
   VAR_14 &= ~(1 << VAR_0);
  FUNC_1(VAR_12, VAR_15[VAR_7->es_port], VAR_14);
  VAR_14 = FUNC_0(VAR_12, VAR_16[VAR_7->es_port]);

  if (VAR_7->es_port == 4) {
   VAR_14 &= ~(0xff << 8);
   VAR_14 = VAR_14 | (((VAR_7->es_pvid >> 4) & 0xff) << 8);
  } else {
   VAR_14 &= ~0xff;
   VAR_14 = VAR_14 | ((VAR_7->es_pvid >> 4) & 0xff);
  }
  FUNC_1(VAR_12, VAR_16[VAR_7->es_port], VAR_14);
  VAR_13 = 0;
 } else {
  if (VAR_8->portphy[VAR_7->es_port] == VAR_8->cpuport)
   return (VAR_2);
 }

 if (VAR_8->portphy[VAR_7->es_port] != VAR_8->cpuport) {
  VAR_10 = FUNC_3(VAR_8, VAR_7->es_port);
  if (VAR_10 == ((void*)0))
   return (VAR_2);

  VAR_11 = FUNC_2(VAR_8, VAR_7->es_port);

  VAR_9 = &VAR_10->mii_media;
  VAR_13 = FUNC_6(VAR_11, &VAR_7->es_ifr, VAR_9, VAR_5);
 }
 return (VAR_13);
}
