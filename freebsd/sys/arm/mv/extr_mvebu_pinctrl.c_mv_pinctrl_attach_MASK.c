
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_pinctrl_softc {int * syscon; int dev; struct mv_padconf* padconf; } ;
struct mv_padconf {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 int VAR_1 ;
 struct mv_pinctrl_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct mv_pinctrl_softc *VAR_3;
 phandle_t VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->dev = VAR_2;
 VAR_3->padconf = (struct mv_padconf *)
     FUNC_6(VAR_2,VAR_1)->ocd_data;

 if (FUNC_0(VAR_3->dev, &VAR_3->syscon) != 0 ||
     VAR_3->syscon == ((void*)0)) {
  FUNC_2(VAR_2, "cannot get syscon for device\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_5(VAR_2);

 FUNC_4(VAR_2, "marvell,pins");
 FUNC_3(VAR_2);

 return (0);
}
