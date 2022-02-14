
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_softc {int sc_res; int sc_rid; int sc_region; int sc_nod; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct cfi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(device_t VAR_2)
{
 struct cfi_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3->sc_nod);
 FUNC_3(VAR_3->sc_region, VAR_0);
 FUNC_0(VAR_2, VAR_1, VAR_3->sc_rid, VAR_3->sc_res);
 return (0);
}
