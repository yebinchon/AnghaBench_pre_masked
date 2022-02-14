
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvscom_softc {scalar_t__* sc_xfer; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;


 int FUNC_0 (char*,struct uvscom_softc*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct uvscom_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (struct uvscom_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct uvscom_softc *VAR_3 = FUNC_2(VAR_2);

 FUNC_0("sc=%p\n", VAR_3);



 if (VAR_3->sc_xfer[VAR_0])
  FUNC_4(VAR_3->sc_xfer[VAR_0]);

 FUNC_3(&VAR_3->sc_super_ucom, &VAR_3->sc_ucom);
 FUNC_5(VAR_3->sc_xfer, VAR_1);

 FUNC_1(VAR_2);

 FUNC_6(VAR_3);

 return (0);
}
