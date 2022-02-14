
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ndis_softc {int ndis_sc; int ndis_ttag; int ndis_parent_tag; } ;
typedef int ndis_status ;
struct TYPE_4__ {TYPE_1__* nmb_physdeviceobj; } ;
typedef TYPE_2__ ndis_miniport_block ;
typedef int * ndis_handle ;
struct TYPE_3__ {int do_devext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 struct ndis_softc* FUNC_1 (int ) ;

__attribute__((used)) static ndis_status
FUNC_2(ndis_handle VAR_8, uint8_t VAR_9,
    uint32_t VAR_10)
{
 struct ndis_softc *VAR_11;
 ndis_miniport_block *VAR_12;
 int VAR_13;

 if (VAR_8 == ((void*)0))
  return (VAR_6);
 VAR_12 = (ndis_miniport_block *)VAR_8;
 VAR_11 = FUNC_1(VAR_12->nmb_physdeviceobj->do_devext);


 if (VAR_11->ndis_sc == 1)
  return (VAR_7);

 VAR_13 = FUNC_0(VAR_11->ndis_parent_tag, VAR_3, 0,
     VAR_2, VAR_1, ((void*)0), ((void*)0),
     VAR_4 * VAR_5, VAR_5, VAR_4, VAR_0,
     ((void*)0), ((void*)0), &VAR_11->ndis_ttag);

 VAR_11->ndis_sc = 1;

 return (VAR_7);
}
