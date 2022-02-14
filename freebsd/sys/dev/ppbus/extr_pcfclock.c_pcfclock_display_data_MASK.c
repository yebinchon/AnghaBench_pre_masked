
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcfclock_data {int dev; } ;
struct cdev {struct pcfclock_data* si_drv1; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct cdev *VAR_0, char VAR_1[18])
{
 struct pcfclock_data *VAR_2 = VAR_0->si_drv1;
 if (FUNC_1(VAR_1))
  FUNC_2(VAR_2->dev, "BATTERY STATUS LOW ON\n");

}
