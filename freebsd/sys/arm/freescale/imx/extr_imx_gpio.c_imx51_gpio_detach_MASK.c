
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx51_gpio_softc {int sc_mtx; int * sc_res; scalar_t__* gpio_ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct imx51_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4;
 struct imx51_gpio_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_3);

 FUNC_3(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_5->gpio_ih[VAR_4])
   FUNC_1(VAR_3, VAR_5->sc_res[VAR_4 + VAR_0],
       VAR_5->gpio_ih[VAR_4]);
 }
 FUNC_0(VAR_3, VAR_2, VAR_5->sc_res);
 FUNC_4(&VAR_5->sc_mtx);

 return(0);
}
