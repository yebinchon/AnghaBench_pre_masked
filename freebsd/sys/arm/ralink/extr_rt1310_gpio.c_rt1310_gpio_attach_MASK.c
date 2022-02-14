
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1310_gpio_softc {int lg_res; int * lg_busdev; int lg_bsh; int lg_bst; int lg_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 struct rt1310_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct rt1310_gpio_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 struct rt1310_gpio_softc *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_5->lg_dev = VAR_4;

 VAR_6 = 0;
 VAR_5->lg_res = FUNC_0(VAR_4, VAR_2, &VAR_6,
     VAR_1);
 if (!VAR_5->lg_res) {
  FUNC_3(VAR_4, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_5->lg_bst = FUNC_6(VAR_5->lg_res);
 VAR_5->lg_bsh = FUNC_5(VAR_5->lg_res);

 VAR_3 = VAR_5;

 VAR_5->lg_busdev = FUNC_4(VAR_4);
 if (VAR_5->lg_busdev == ((void*)0)) {
  FUNC_1(VAR_4, VAR_2, VAR_6, VAR_5->lg_res);
  return (VAR_0);
 }

 return (0);
}
