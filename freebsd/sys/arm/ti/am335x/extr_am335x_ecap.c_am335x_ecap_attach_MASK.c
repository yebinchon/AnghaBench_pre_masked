
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_ecap_softc {int * sc_mem_res; int sc_mem_rid; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct am335x_ecap_softc*) ;
 int FUNC_1 (struct am335x_ecap_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 struct am335x_ecap_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct am335x_ecap_softc *VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 VAR_4->sc_dev = VAR_3;

 FUNC_1(VAR_4);

 VAR_4->sc_mem_res = FUNC_2(VAR_3, VAR_2,
     &VAR_4->sc_mem_rid, VAR_1);
 if (VAR_4->sc_mem_res == ((void*)0)) {
  FUNC_4(VAR_3, "cannot allocate memory resources\n");
  goto fail;
 }

 return (0);

fail:
 FUNC_0(VAR_4);
 return (VAR_0);
}
