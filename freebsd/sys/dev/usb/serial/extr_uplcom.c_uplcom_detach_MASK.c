
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uplcom_softc {int sc_xfer; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;


 int FUNC_0 (char*,struct uplcom_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct uplcom_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct uplcom_softc*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct uplcom_softc *VAR_2 = FUNC_2(VAR_1);

 FUNC_0("sc=%p\n", VAR_2);

 FUNC_3(&VAR_2->sc_super_ucom, &VAR_2->sc_ucom);
 FUNC_5(VAR_2->sc_xfer, VAR_0);

 FUNC_1(VAR_1);

 FUNC_4(VAR_2);

 return (0);
}
