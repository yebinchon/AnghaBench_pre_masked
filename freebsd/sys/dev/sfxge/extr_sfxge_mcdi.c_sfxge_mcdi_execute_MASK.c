
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sfxge_mcdi {scalar_t__ state; } ;
struct sfxge_softc {int enp; struct sfxge_mcdi mcdi; } ;
typedef int efx_mcdi_req_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sfxge_mcdi*) ;
 int FUNC_2 (struct sfxge_mcdi*) ;
 int FUNC_3 (int ,int *,scalar_t__*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sfxge_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, efx_mcdi_req_t *VAR_3)
{
 struct sfxge_softc *VAR_4;
 struct sfxge_mcdi *VAR_5;
 uint32_t VAR_6 = 0;

 VAR_4 = (struct sfxge_softc *)VAR_2;
 VAR_5 = &VAR_4->mcdi;

 FUNC_1(VAR_5);

 FUNC_0(VAR_5->state == VAR_1,
     ("MCDI not initialized"));


 FUNC_3(VAR_4->enp, VAR_3, &VAR_6);
 FUNC_0(VAR_6 > 0, ("MCDI timeout not initialized"));

 FUNC_4(VAR_4->enp, VAR_3, VAR_0);
 FUNC_5(VAR_4, VAR_6);

 FUNC_2(VAR_5);
}
