
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ndis_softc {int ndis_dev; } ;
struct ifnet {int if_flags; } ;
typedef int ndis_status ;
struct TYPE_6__ {int nmb_resetevent; TYPE_1__* nmb_physdeviceobj; } ;
typedef TYPE_2__ ndis_miniport_block ;
typedef TYPE_2__* ndis_handle ;
struct TYPE_5__ {int do_devext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 struct ifnet* FUNC_1 (struct ndis_softc*) ;
 struct ndis_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(ndis_handle VAR_3, ndis_status VAR_4,
 uint8_t VAR_5)
{
 ndis_miniport_block *VAR_6;
 struct ndis_softc *VAR_7;
 struct ifnet *VAR_8;

 VAR_6 = VAR_3;
 VAR_7 = FUNC_2(VAR_6->nmb_physdeviceobj->do_devext);
 VAR_8 = FUNC_1(VAR_7);

 if (VAR_8 && VAR_8->if_flags & VAR_1)
  FUNC_3(VAR_7->ndis_dev, "reset done...\n");
 FUNC_0(&VAR_6->nmb_resetevent, VAR_2, VAR_0);
}
