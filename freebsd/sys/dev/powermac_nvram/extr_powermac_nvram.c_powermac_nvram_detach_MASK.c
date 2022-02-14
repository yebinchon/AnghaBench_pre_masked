
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powermac_nvram_softc {int * sc_cdev; scalar_t__ sc_bank0; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct powermac_nvram_softc* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct powermac_nvram_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if ((void *)VAR_2->sc_bank0 != ((void*)0))
  FUNC_2(VAR_2->sc_bank0, VAR_0 * 2);

 if (VAR_2->sc_cdev != ((void*)0))
  FUNC_0(VAR_2->sc_cdev);

 return 0;
}
