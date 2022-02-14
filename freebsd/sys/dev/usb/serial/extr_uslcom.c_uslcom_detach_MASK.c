
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uslcom_softc {int sc_watchdog; int sc_xfer; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;


 int FUNC_0 (char*,struct uslcom_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct uslcom_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct uslcom_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct uslcom_softc *VAR_2 = FUNC_2(VAR_1);

 FUNC_0("sc=%p\n", VAR_2);

 FUNC_3(&VAR_2->sc_super_ucom, &VAR_2->sc_ucom);
 FUNC_5(VAR_2->sc_xfer, VAR_0);

 FUNC_4(&VAR_2->sc_watchdog);

 FUNC_1(VAR_1);

 FUNC_6(VAR_2);

 return (0);
}
