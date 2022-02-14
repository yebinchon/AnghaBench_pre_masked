
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {int npins; int rl; } ;
typedef int pins ;
typedef int device_t ;


 struct gpiobus_ivar* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gpiobus_ivar*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (char*,...) ;
 int FUNC_6 (int *,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, device_t VAR_2)
{
 char VAR_3[128];
 int VAR_4 = 0;
 struct gpiobus_ivar *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 FUNC_4(VAR_3, 0, sizeof(VAR_3));
 VAR_4 += FUNC_2(VAR_1, VAR_2);
 if (VAR_5->npins > 0) {
  if (VAR_5->npins > 1)
   VAR_4 += FUNC_5(" at pins ");
  else
   VAR_4 += FUNC_5(" at pin ");
  FUNC_3(VAR_5, VAR_3, sizeof(VAR_3));
  VAR_4 += FUNC_5("%s", VAR_3);
 }
 FUNC_6(&VAR_5->rl, "irq", VAR_0, "%jd");
 VAR_4 += FUNC_1(VAR_1, VAR_2);

 return (VAR_4);
}
