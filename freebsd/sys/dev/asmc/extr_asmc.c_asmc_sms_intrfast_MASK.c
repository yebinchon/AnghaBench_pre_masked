
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct asmc_softc {int sc_sms_task; int sc_sms_tq; int sc_sms_intrtype; int sc_mtx; int sc_sms_intr_works; } ;
typedef int device_t ;


 int FUNC_0 (struct asmc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct asmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_1)
{
 uint8_t VAR_2;
 device_t VAR_3 = (device_t) VAR_1;
 struct asmc_softc *VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4->sc_sms_intr_works)
  return (VAR_0);

 FUNC_3(&VAR_4->sc_mtx);
 VAR_2 = FUNC_0(VAR_4);
 FUNC_4(&VAR_4->sc_mtx);

 VAR_4->sc_sms_intrtype = VAR_2;
 FUNC_1(VAR_3, VAR_2);

 FUNC_5(VAR_4->sc_sms_tq, &VAR_4->sc_sms_task);
 return (VAR_0);
}
