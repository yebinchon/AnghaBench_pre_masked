
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_gpio_softc {int * res; int * intrhand; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 struct mtk_gpio_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct mtk_gpio_softc *VAR_2 = FUNC_4(VAR_1);
 phandle_t VAR_3;

 VAR_3 = FUNC_6(VAR_1);
 FUNC_5(VAR_1, FUNC_1(VAR_3));
 if (VAR_2->intrhand != ((void*)0))
  FUNC_3(VAR_1, VAR_2->res[1], VAR_2->intrhand);
 FUNC_2(VAR_1, VAR_0, VAR_2->res);
 FUNC_0(VAR_2);
 return (0);
}
