
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_mcdi {scalar_t__ state; int mem; int transport; } ;
struct sfxge_softc {struct sfxge_mcdi mcdi; int * enp; } ;
typedef int efx_nic_t ;
typedef int efx_mcdi_transport_t ;
typedef int efsys_mem_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sfxge_mcdi*) ;
 int FUNC_2 (struct sfxge_mcdi*) ;
 int FUNC_3 (struct sfxge_mcdi*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct sfxge_softc *VAR_1)
{
 struct sfxge_mcdi *VAR_2;
 efx_nic_t *VAR_3;
 efx_mcdi_transport_t *VAR_4;
 efsys_mem_t *VAR_5;

 VAR_3 = VAR_1->enp;
 VAR_2 = &VAR_1->mcdi;
 VAR_4 = &VAR_2->transport;
 VAR_5 = &VAR_2->mem;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2->state == VAR_0,
     ("MCDI not initialized"));

 FUNC_5(VAR_3);
 FUNC_4(VAR_4, sizeof(*VAR_4));

 FUNC_3(VAR_2);

 FUNC_6(VAR_5);

 FUNC_2(VAR_2);
}
