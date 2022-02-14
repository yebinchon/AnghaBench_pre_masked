
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* mtkswitch_vlan_get_pvid ) (struct mtkswitch_softc*,int ,int *) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
struct TYPE_5__ {scalar_t__ es_flags; int es_pvid; int es_port; } ;
typedef TYPE_2__ etherswitch_port_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*) ;
 int FUNC_3 (struct mtkswitch_softc*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct mtkswitch_softc *VAR_1, etherswitch_port_t *VAR_2)
{

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1);


 VAR_1->hal.mtkswitch_vlan_get_pvid(VAR_1, VAR_2->es_port, &VAR_2->es_pvid);





 VAR_2->es_flags = 0;

 FUNC_2(VAR_1);

 return (0);
}
