
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct imx6_anatop_softc* ich_arg; int ich_func; } ;
struct imx6_anatop_softc {int res; int cpu_curmv; int dev; TYPE_1__ intr_setup_hook; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct imx6_anatop_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 struct imx6_anatop_softc* VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8)
{
 struct imx6_anatop_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->dev = VAR_8;


 if (FUNC_2(VAR_8, VAR_6, VAR_9->res)) {
  FUNC_8(VAR_8, "Cannot allocate resources\n");
  VAR_10 = VAR_1;
  goto out;
 }

 VAR_9->intr_setup_hook.ich_func = VAR_7;
 VAR_9->intr_setup_hook.ich_arg = VAR_9;
 FUNC_4(&VAR_9->intr_setup_hook);

 FUNC_0(FUNC_6(VAR_9->dev),
     FUNC_1(FUNC_7(VAR_9->dev)),
     VAR_4, "cpu_voltage", VAR_0,
     &VAR_9->cpu_curmv, 0, "Current CPU voltage in millivolts");

 VAR_5 = VAR_9;






 FUNC_9(VAR_3,
     VAR_2);
 VAR_10 = 0;

out:

 if (VAR_10 != 0) {
  FUNC_3(VAR_8, VAR_6, VAR_9->res);
 }

 return (VAR_10);
}
