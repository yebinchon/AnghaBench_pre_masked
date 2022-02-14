
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ksz8995ma_softc {int numports; scalar_t__ vlan_mode; int* portphy; int cpuport; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {int es_port; int es_pvid; int es_flags; int es_ifr; } ;
typedef TYPE_1__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ksz8995ma_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,int *,struct ifmedia*,int ) ;
 struct ifnet* FUNC_2 (struct ksz8995ma_softc*,size_t) ;
 struct mii_data* FUNC_3 (struct ksz8995ma_softc*,size_t) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_16, etherswitch_port_t *VAR_17)
{
 struct ksz8995ma_softc *VAR_18;
 struct mii_data *VAR_19;
        struct ifmedia *VAR_20;
        struct ifnet *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;

 VAR_18 = FUNC_0(VAR_16);

 if (VAR_17->es_port < 0 || VAR_17->es_port >= VAR_18->numports)
  return (VAR_0);

 if (VAR_18->vlan_mode == VAR_5) {
  FUNC_5(VAR_16, VAR_11 +
      VAR_12 * VAR_17->es_port, VAR_17->es_pvid & 0xff);
  VAR_24 = FUNC_4(VAR_16, VAR_10 +
      VAR_12 * VAR_17->es_port);
  FUNC_5(VAR_16, VAR_10 +
      VAR_12 * VAR_17->es_port,
      (VAR_24 & 0xf0) | ((VAR_17->es_pvid >> 8) & 0x0f));

  VAR_24 = FUNC_4(VAR_16, VAR_8 +
      VAR_12 * VAR_17->es_port);
  if (VAR_17->es_flags & VAR_1)
   VAR_24 |= VAR_13;
  else
   VAR_24 &= ~VAR_13;
  if (VAR_17->es_flags & VAR_4)
   VAR_24 |= VAR_14;
  else
   VAR_24 &= ~VAR_14;
  FUNC_5(VAR_16, VAR_8 +
      VAR_12 * VAR_17->es_port, VAR_24);

  VAR_24 = FUNC_4(VAR_16, VAR_9 +
      VAR_12 * VAR_17->es_port);
  if (VAR_17->es_flags & VAR_2)
   VAR_24 |= VAR_6;
  else
   VAR_24 &= ~VAR_6;
  if (VAR_17->es_flags & VAR_3)
   VAR_24 |= VAR_7;
  else
   VAR_24 &= ~VAR_7;
  FUNC_5(VAR_16, VAR_9 +
      VAR_12 * VAR_17->es_port, VAR_24);
 }

 VAR_22 = VAR_18->portphy[VAR_17->es_port];
 VAR_19 = FUNC_3(VAR_18, VAR_17->es_port);
 if (VAR_22 != VAR_18->cpuport) {
  if (VAR_19 == ((void*)0))
   return (VAR_0);
  VAR_21 = FUNC_2(VAR_18, VAR_17->es_port);
  VAR_20 = &VAR_19->mii_media;
  VAR_23 = FUNC_1(VAR_21, &VAR_17->es_ifr, VAR_20, VAR_15);
 }
 return (0);
}
