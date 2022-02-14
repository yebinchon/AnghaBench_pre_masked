
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* arswitch_vlan_get_pvid ) (struct arswitch_softc*,int ,int *) ;} ;
struct arswitch_softc {int sc_dev; TYPE_1__ hal; } ;
struct TYPE_5__ {int es_flags; int es_port; int es_pvid; } ;
typedef TYPE_2__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct arswitch_softc*) ;
 int FUNC_2 (struct arswitch_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct arswitch_softc*,int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct arswitch_softc *VAR_7, etherswitch_port_t *VAR_8)
{
 uint32_t VAR_9;

 FUNC_1(VAR_7);


 VAR_7->hal.arswitch_vlan_get_pvid(VAR_7, VAR_8->es_port, &VAR_8->es_pvid);


 VAR_9 = FUNC_3(VAR_7->sc_dev, FUNC_0(VAR_8->es_port));
 if (VAR_9 & VAR_0)
  VAR_8->es_flags |= VAR_5;
 VAR_9 >>= VAR_2;
 if ((VAR_9 & 0x3) == VAR_1)
  VAR_8->es_flags |= VAR_4;
 if ((VAR_9 & 0x3) == VAR_3)
  VAR_8->es_flags |= VAR_6;
 FUNC_2(VAR_7);

 return (0);
}
