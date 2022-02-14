
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ndis_softc {int ndis_shlist; int ndis_parent_tag; } ;
struct TYPE_7__ {int np_quad; } ;
struct ndis_shmem {int ndis_list; void* ndis_saddr; TYPE_2__ ndis_paddr; int ndis_stag; int ndis_smap; } ;
struct TYPE_8__ {int np_quad; } ;
typedef TYPE_3__ ndis_physaddr ;
struct TYPE_9__ {TYPE_1__* nmb_physdeviceobj; } ;
typedef TYPE_4__ ndis_miniport_block ;
typedef int * ndis_handle ;
struct TYPE_6__ {int do_devext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ndis_softc*) ;
 int FUNC_3 (struct ndis_softc*) ;
 int FUNC_4 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,void*,int ,int ,void*,int) ;
 int FUNC_7 (int ,void**,int,int *) ;
 int FUNC_8 (int ,void*,int ) ;
 struct ndis_softc* FUNC_9 (int ) ;
 int FUNC_10 (struct ndis_shmem*,int ) ;
 struct ndis_shmem* FUNC_11 (int,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_12(ndis_handle VAR_9, uint32_t VAR_10, uint8_t VAR_11,
    void **VAR_12, ndis_physaddr *VAR_13)
{
 ndis_miniport_block *VAR_14;
 struct ndis_softc *VAR_15;
 struct ndis_shmem *VAR_16;
 int VAR_17;

 if (VAR_9 == ((void*)0))
  return;

 VAR_14 = (ndis_miniport_block *)VAR_9;
 VAR_15 = FUNC_9(VAR_14->nmb_physdeviceobj->do_devext);

 VAR_16 = FUNC_11(sizeof(struct ndis_shmem), VAR_4, VAR_5|VAR_6);
 if (VAR_16 == ((void*)0))
  return;

 FUNC_0(&VAR_16->ndis_list);
 VAR_17 = FUNC_4(VAR_15->ndis_parent_tag, 64,
     0, VAR_7, VAR_3, ((void*)0),
     ((void*)0), VAR_10, 1, VAR_10, VAR_0, ((void*)0), ((void*)0),
     &VAR_16->ndis_stag);

 if (VAR_17) {
  FUNC_10(VAR_16, VAR_4);
  return;
 }

 VAR_17 = FUNC_7(VAR_16->ndis_stag, VAR_12,
     VAR_1 | VAR_2, &VAR_16->ndis_smap);

 if (VAR_17) {
  FUNC_5(VAR_16->ndis_stag);
  FUNC_10(VAR_16, VAR_4);
  return;
 }

 VAR_17 = FUNC_6(VAR_16->ndis_stag, VAR_16->ndis_smap, *VAR_12,
     VAR_10, VAR_8, (void *)VAR_13, VAR_1);

 if (VAR_17) {
  FUNC_8(VAR_16->ndis_stag, *VAR_12, VAR_16->ndis_smap);
  FUNC_5(VAR_16->ndis_stag);
  FUNC_10(VAR_16, VAR_4);
  return;
 }
 FUNC_2(VAR_15);
 VAR_16->ndis_paddr.np_quad = VAR_13->np_quad;
 VAR_16->ndis_saddr = *VAR_12;
 FUNC_1((&VAR_15->ndis_shlist), (&VAR_16->ndis_list));
 FUNC_3(VAR_15);
}
