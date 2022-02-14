
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufoma_softc {int sc_cv; scalar_t__ sc_modetable; int sc_bulk_xfer; int sc_ctrl_xfer; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct ufoma_softc* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ufoma_softc*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct ufoma_softc *VAR_4 = FUNC_2(VAR_3);

 FUNC_4(&VAR_4->sc_super_ucom, &VAR_4->sc_ucom);
 FUNC_6(VAR_4->sc_ctrl_xfer, VAR_2);
 FUNC_6(VAR_4->sc_bulk_xfer, VAR_1);

 if (VAR_4->sc_modetable) {
  FUNC_3(VAR_4->sc_modetable, VAR_0);
 }
 FUNC_0(&VAR_4->sc_cv);

 FUNC_1(VAR_3);

 FUNC_5(VAR_4);

 return (0);
}
