
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct ndis_softc {int dummy; } ;
struct mtx {int dummy; } ;
typedef int ndis_status ;
struct TYPE_11__ {int ni_introbj; int ni_dpc; int ni_dpcevt; int ni_dpcfunc; int ni_isrfunc; scalar_t__ ni_dpccnt; void* ni_shared; void* ni_isrreq; void* ni_block; int * ni_rsvd; } ;
typedef TYPE_3__ ndis_miniport_interrupt ;
struct TYPE_12__ {int nmc_interrupt_func; int nmc_isr_func; } ;
typedef TYPE_4__ ndis_miniport_characteristics ;
struct TYPE_13__ {TYPE_3__* nmb_interrupt; TYPE_2__* nmb_deviceobj; TYPE_1__* nmb_physdeviceobj; } ;
typedef TYPE_5__ ndis_miniport_block ;
typedef int ndis_interrupt_mode ;
typedef void* ndis_handle ;
typedef int funcptr ;
struct TYPE_10__ {int do_drvobj; } ;
struct TYPE_9__ {int do_devext; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,struct ndis_softc*,int *,int ,int ,int ,int ,void*,int ,int ) ;
 TYPE_4__* FUNC_2 (int ,void*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ndis_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static ndis_status
FUNC_8(ndis_miniport_interrupt *VAR_11, ndis_handle VAR_12,
    uint32_t VAR_13, uint32_t VAR_14, uint8_t VAR_15, uint8_t VAR_16,
    ndis_interrupt_mode VAR_17)
{
 ndis_miniport_block *VAR_18;
 ndis_miniport_characteristics *VAR_19;
 struct ndis_softc *VAR_20;
 int VAR_21;

 VAR_18 = VAR_12;
 VAR_20 = FUNC_6(VAR_18->nmb_physdeviceobj->do_devext);
 VAR_19 = FUNC_2(VAR_18->nmb_deviceobj->do_drvobj,
     (void *)1);

 VAR_11->ni_rsvd = FUNC_0(VAR_6,
     sizeof(struct mtx), 0);
 if (VAR_11->ni_rsvd == ((void*)0))
  return (VAR_4);

 VAR_11->ni_block = VAR_12;
 VAR_11->ni_isrreq = VAR_15;
 VAR_11->ni_shared = VAR_16;
 VAR_11->ni_dpccnt = 0;
 VAR_11->ni_isrfunc = VAR_19->nmc_isr_func;
 VAR_11->ni_dpcfunc = VAR_19->nmc_interrupt_func;

 FUNC_4(&VAR_11->ni_dpcevt, VAR_0, VAR_8);
 FUNC_3(&VAR_11->ni_dpc,
     FUNC_7((funcptr)VAR_10), VAR_11);
 FUNC_5(&VAR_11->ni_dpc, VAR_2);

 VAR_21 = FUNC_1(&VAR_11->ni_introbj,
     FUNC_7((funcptr)VAR_9), VAR_20, ((void*)0),
     VAR_13, VAR_14, 0, VAR_17, VAR_16, 0, VAR_1);

 if (VAR_21 != VAR_7)
  return (VAR_3);

 VAR_18->nmb_interrupt = VAR_11;

 return (VAR_5);
}
