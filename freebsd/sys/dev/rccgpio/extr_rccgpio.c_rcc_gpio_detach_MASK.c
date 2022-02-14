
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcc_gpio_softc {int sc_gpio_npins; int sc_mtx; int * sc_io_res; int sc_io_rid; } ;
typedef int device_t ;
struct TYPE_2__ {int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct rcc_gpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rcc_gpio_softc*,int ,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4;
 struct rcc_gpio_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 FUNC_2(VAR_3);


 for (VAR_4 = 0; VAR_4 < VAR_5->sc_gpio_npins; VAR_4++)
  FUNC_4(VAR_5, VAR_0, VAR_2[VAR_4].pin, 0);

 if (VAR_5->sc_io_res != ((void*)0))
  FUNC_0(VAR_3, VAR_1, VAR_5->sc_io_rid,
      VAR_5->sc_io_res);
 FUNC_3(&VAR_5->sc_mtx);

 return (0);
}
