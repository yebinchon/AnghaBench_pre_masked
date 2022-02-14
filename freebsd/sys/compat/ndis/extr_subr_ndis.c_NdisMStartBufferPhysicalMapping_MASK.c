
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct ndis_softc {size_t ndis_mmapcnt; int ndis_mtag; int * ndis_mmaps; } ;
struct ndis_map_arg {size_t nma_cnt; int * nma_fraglist; } ;
typedef int ndis_paddr_unit ;
struct TYPE_4__ {TYPE_1__* nmb_physdeviceobj; } ;
typedef TYPE_2__ ndis_miniport_block ;
typedef int * ndis_handle ;
typedef int ndis_buffer ;
typedef int bus_dmamap_t ;
struct TYPE_3__ {int do_devext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,void*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct ndis_softc* FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(ndis_handle VAR_4, ndis_buffer *VAR_5,
    uint32_t VAR_6, uint8_t VAR_7, ndis_paddr_unit *VAR_8,
    uint32_t *VAR_9)
{
 ndis_miniport_block *VAR_10;
 struct ndis_softc *VAR_11;
 struct ndis_map_arg VAR_12;
 bus_dmamap_t VAR_13;
 int VAR_14;

 if (VAR_4 == ((void*)0))
  return;

 VAR_10 = (ndis_miniport_block *)VAR_4;
 VAR_11 = FUNC_4(VAR_10->nmb_physdeviceobj->do_devext);

 if (VAR_6 > VAR_11->ndis_mmapcnt)
  return;

 VAR_13 = VAR_11->ndis_mmaps[VAR_6];
 VAR_12.nma_fraglist = VAR_8;

 VAR_14 = FUNC_2(VAR_11->ndis_mtag, VAR_13,
     FUNC_1(VAR_5), FUNC_0(VAR_5), VAR_3,
     (void *)&VAR_12, VAR_2);

 if (VAR_14)
  return;

 FUNC_3(VAR_11->ndis_mtag, VAR_13,
     VAR_7 ? VAR_1 : VAR_0);

 *VAR_9 = VAR_12.nma_cnt;
}
