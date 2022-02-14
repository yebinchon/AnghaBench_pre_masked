
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* mtkswitch_vlan_set_pvid ) (struct mtkswitch_softc*,int ,int ) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
struct TYPE_5__ {int es_flags; int es_pvid; int es_port; } ;
typedef TYPE_2__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*) ;
 int FUNC_3 (struct mtkswitch_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mtkswitch_softc *VAR_5, etherswitch_port_t *VAR_6)
{
 int VAR_7;





 if ((VAR_6->es_flags & (VAR_2 |
     VAR_1 | VAR_3)) != 0)
  return (VAR_0);

 FUNC_1(VAR_5, VAR_4);
 FUNC_0(VAR_5);


 if (VAR_6->es_pvid != 0) {
  VAR_7 = VAR_5->hal.mtkswitch_vlan_set_pvid(VAR_5, VAR_6->es_port,
      VAR_6->es_pvid);
  if (VAR_7 != 0) {
   FUNC_2(VAR_5);
   return (VAR_7);
  }
 }

 FUNC_2(VAR_5);

 return (0);
}
