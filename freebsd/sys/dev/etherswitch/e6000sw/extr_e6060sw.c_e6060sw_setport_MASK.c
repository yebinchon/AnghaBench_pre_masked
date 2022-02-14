
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int dummy; } ;
struct e6060sw_softc {size_t numports; scalar_t__ vlan_mode; scalar_t__* portphy; scalar_t__ cpuport; scalar_t__ smi_offset; } ;
struct TYPE_3__ {size_t es_port; int es_pvid; int es_ifr; } ;
typedef TYPE_1__ etherswitch_port_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct e6060sw_softc* FUNC_3 (int ) ;
 struct ifnet* FUNC_4 (struct e6060sw_softc*,size_t) ;
 struct mii_data* FUNC_5 (struct e6060sw_softc*,size_t) ;
 int FUNC_6 (struct ifnet*,int *,struct ifmedia*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, etherswitch_port_t *VAR_6)
{
 struct e6060sw_softc *VAR_7;
 struct ifmedia *VAR_8;
 struct mii_data *VAR_9;
 struct ifnet *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = FUNC_3(VAR_5);

 if (VAR_6->es_port < 0 || VAR_6->es_port >= VAR_7->numports)
  return (VAR_1);

 if (VAR_7->vlan_mode == VAR_2) {
  VAR_12 = FUNC_0(FUNC_2(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_6->es_port,
      VAR_3);
  VAR_12 &= ~0xfff;
  VAR_12 |= VAR_6->es_pvid;
  VAR_12 |= 1 << 12;
  FUNC_1(FUNC_2(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_6->es_port,
      VAR_3, VAR_12);
 }

 if (VAR_7->portphy[VAR_6->es_port] == VAR_7->cpuport)
  return(0);

 VAR_9 = FUNC_5(VAR_7, VAR_6->es_port);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_10 = FUNC_4(VAR_7, VAR_6->es_port);

 VAR_8 = &VAR_9->mii_media;
 VAR_11 = FUNC_6(VAR_10, &VAR_6->es_ifr, VAR_8, VAR_4);
 return (VAR_11);
}
