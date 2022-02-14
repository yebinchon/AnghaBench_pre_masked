
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* arswitch_vlan_set_pvid ) (struct arswitch_softc*,int ,int ) ;} ;
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
 int VAR_7 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct arswitch_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct arswitch_softc *VAR_8, etherswitch_port_t *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 FUNC_1(VAR_8);


 if (VAR_9->es_pvid != 0)
  VAR_8->hal.arswitch_vlan_set_pvid(VAR_8, VAR_9->es_port, VAR_9->es_pvid);


 if (VAR_9->es_flags & VAR_5 &&
     VAR_9->es_flags & VAR_7) {
  FUNC_2(VAR_8);
  return (VAR_4);
 }

 VAR_10 = 0;
 if (VAR_9->es_flags & VAR_6)
  VAR_10 |= VAR_0;
 if (VAR_9->es_flags & VAR_5)
  VAR_10 |= VAR_1 <<
      VAR_2;
 if (VAR_9->es_flags & VAR_7)
  VAR_10 |= VAR_3 <<
      VAR_2;

 VAR_11 = FUNC_3(VAR_8->sc_dev,
     FUNC_0(VAR_9->es_port),
     0x3 << VAR_2 |
     VAR_0, VAR_10);

 FUNC_2(VAR_8);
 return (VAR_11);
}
