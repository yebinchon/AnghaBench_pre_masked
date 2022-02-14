
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* mtkswitch_vlan_get_pvid ) (struct mtkswitch_softc*,int ,int *) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
struct TYPE_5__ {int es_flags; int es_port; int es_pvid; } ;
typedef TYPE_2__ etherswitch_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct mtkswitch_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mtkswitch_softc*,int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct mtkswitch_softc *VAR_6, etherswitch_port_t *VAR_7)
{
 uint32_t VAR_8;

 FUNC_1(VAR_6, VAR_3);
 FUNC_0(VAR_6);


 VAR_6->hal.mtkswitch_vlan_get_pvid(VAR_6, VAR_7->es_port, &VAR_7->es_pvid);


 VAR_7->es_flags = 0;
 VAR_8 = FUNC_2(VAR_6, VAR_5);
 if (VAR_8 & FUNC_5(VAR_7->es_port))
  VAR_7->es_flags |= VAR_1;

 VAR_8 = FUNC_2(VAR_6, VAR_4);
 if (VAR_8 & FUNC_4(VAR_7->es_port))
  VAR_7->es_flags |= VAR_2;
 else
  VAR_7->es_flags |= VAR_0;

 FUNC_3(VAR_6);

 return (0);
}
