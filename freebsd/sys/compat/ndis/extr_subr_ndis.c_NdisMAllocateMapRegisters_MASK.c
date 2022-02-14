
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ndis_softc {int ndis_mmapcnt; int * ndis_mmaps; int ndis_mtag; int ndis_parent_tag; } ;
typedef int ndis_status ;
struct TYPE_4__ {TYPE_1__* nmb_physdeviceobj; } ;
typedef TYPE_2__ ndis_miniport_block ;
typedef scalar_t__ ndis_handle ;
typedef int bus_dmamap_t ;
struct TYPE_3__ {int do_devext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 struct ndis_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int,int ,int) ;

__attribute__((used)) static ndis_status
FUNC_5(ndis_handle VAR_10, uint32_t VAR_11,
    uint8_t VAR_12, uint32_t VAR_13, uint32_t VAR_14)
{
 struct ndis_softc *VAR_15;
 ndis_miniport_block *VAR_16;
 int VAR_17, VAR_18, VAR_19 = VAR_7;

 VAR_16 = (ndis_miniport_block *)VAR_10;
 VAR_15 = FUNC_2(VAR_16->nmb_physdeviceobj->do_devext);

 VAR_15->ndis_mmaps = FUNC_4(sizeof(bus_dmamap_t) * VAR_13,
     VAR_4, VAR_5|VAR_6);

 if (VAR_15->ndis_mmaps == ((void*)0))
  return (VAR_8);

 VAR_17 = FUNC_0(VAR_15->ndis_parent_tag, VAR_3, 0,
     VAR_2, VAR_1, ((void*)0),
     ((void*)0), VAR_14 * VAR_19, VAR_19, VAR_14, VAR_0,
     ((void*)0), ((void*)0), &VAR_15->ndis_mtag);

 if (VAR_17) {
  FUNC_3(VAR_15->ndis_mmaps, VAR_4);
  return (VAR_8);
 }

 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
  FUNC_1(VAR_15->ndis_mtag, 0, &VAR_15->ndis_mmaps[VAR_18]);

 VAR_15->ndis_mmapcnt = VAR_13;

 return (VAR_9);
}
