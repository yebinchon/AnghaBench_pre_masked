
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbss_softc {scalar_t__ sc_mem_res; int sc_mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 struct usbss_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct usbss_softc *VAR_2 = FUNC_2(VAR_1);


 if (VAR_2->sc_mem_res)
  FUNC_0(VAR_1, VAR_0, VAR_2->sc_mem_rid,
      VAR_2->sc_mem_res);


 FUNC_1(VAR_1);

 return (0);
}
