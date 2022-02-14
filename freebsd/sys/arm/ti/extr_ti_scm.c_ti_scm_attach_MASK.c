
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_scm_softc {int * sc_res; int sc_bsh; int sc_bst; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ti_scm_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 struct ti_scm_softc* VAR_2 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct ti_scm_softc *VAR_4 = FUNC_3(VAR_3);

 VAR_4->sc_dev = VAR_3;

 if (FUNC_0(VAR_3, VAR_1, VAR_4->sc_res)) {
  FUNC_4(VAR_3, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_4->sc_bst = FUNC_6(VAR_4->sc_res[0]);
 VAR_4->sc_bsh = FUNC_5(VAR_4->sc_res[0]);

 VAR_2 = VAR_4;


 FUNC_2(VAR_3);

 return (FUNC_1(VAR_3));
}
