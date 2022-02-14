
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwmc_softc {int cdev; int dev; } ;


 scalar_t__ FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,char*,char const**) ;

__attribute__((used)) static void
FUNC_7(struct pwmc_softc *VAR_0)
{
 const char *VAR_1;
 if (FUNC_6(FUNC_2(VAR_0->dev),
     FUNC_3(VAR_0->dev), "label", &VAR_1) == 0) {
  FUNC_4(VAR_0->cdev, "pwm/%s", VAR_1);
 }
}
