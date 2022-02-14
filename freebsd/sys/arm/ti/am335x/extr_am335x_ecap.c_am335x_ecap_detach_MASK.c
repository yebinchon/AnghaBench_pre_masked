
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_ecap_softc {scalar_t__ sc_mem_res; int sc_mem_rid; } ;
typedef int device_t ;


 int FUNC_0 (struct am335x_ecap_softc*) ;
 int FUNC_1 (struct am335x_ecap_softc*) ;
 int FUNC_2 (struct am335x_ecap_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 struct am335x_ecap_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct am335x_ecap_softc *VAR_2;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 if (VAR_2->sc_mem_res)
  FUNC_3(VAR_1, VAR_0,
      VAR_2->sc_mem_rid, VAR_2->sc_mem_res);
 FUNC_2(VAR_2);

 FUNC_1(VAR_2);


 return (0);
}
