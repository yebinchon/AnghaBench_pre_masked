
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubser_softc {int sc_xfer; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct ubser_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct ubser_softc*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct ubser_softc *VAR_2 = FUNC_2(VAR_1);

 FUNC_0("\n");

 FUNC_4(&VAR_2->sc_super_ucom, VAR_2->sc_ucom);
 FUNC_5(VAR_2->sc_xfer, VAR_0);

 FUNC_1(VAR_1);

 FUNC_3(VAR_2);

 return (0);
}
