
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbphy_softc {int * mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct usbphy_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct usbphy_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->mem_res != ((void*)0))
  FUNC_0(VAR_1, VAR_0, 0, VAR_2->mem_res);

 return (0);
}
