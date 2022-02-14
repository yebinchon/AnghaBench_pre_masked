
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int emt_logger; int emt_exception; int emt_ev_cpl; int emt_execute; int * emt_dma_mem; struct sfxge_softc* emt_context; } ;
struct sfxge_mcdi {scalar_t__ state; int mem; TYPE_1__ transport; } ;
struct sfxge_softc {int mcdi_logging; int dev; struct sfxge_mcdi mcdi; int * enp; } ;
typedef int efx_nic_t ;
typedef TYPE_1__ efx_mcdi_transport_t ;
typedef int efsys_mem_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sfxge_mcdi*) ;
 int FUNC_2 (struct sfxge_mcdi*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (struct sfxge_softc*,int,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_10(struct sfxge_softc *VAR_9)
{
 efx_nic_t *VAR_10;
 struct sfxge_mcdi *VAR_11;
 efx_mcdi_transport_t *VAR_12;
 efsys_mem_t *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_10 = VAR_9->enp;
 VAR_11 = &VAR_9->mcdi;
 VAR_12 = &VAR_11->transport;
 VAR_13 = &VAR_11->mem;
 VAR_14 = sizeof (uint32_t) + VAR_1;

 FUNC_0(VAR_11->state == VAR_4,
     ("MCDI already initialized"));

 FUNC_2(VAR_11, FUNC_5(VAR_9->dev));

 VAR_11->state = VAR_3;

 if ((VAR_15 = FUNC_9(VAR_9, VAR_14, VAR_13)) != 0)
  goto fail;

 VAR_12->emt_context = VAR_9;
 VAR_12->emt_dma_mem = VAR_13;
 VAR_12->emt_execute = VAR_7;
 VAR_12->emt_ev_cpl = VAR_5;
 VAR_12->emt_exception = VAR_6;
 if ((VAR_15 = FUNC_8(VAR_10, VAR_12)) != 0)
  goto fail;

 return (0);

fail:
 FUNC_1(VAR_11);
 VAR_11->state = VAR_4;
 return (VAR_15);
}
