
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {int npins; int rl; } ;
typedef int pins ;
typedef int device_t ;


 struct gpiobus_ivar* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct gpiobus_ivar*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1, device_t VAR_2)
{
 char VAR_3[128];
 struct gpiobus_ivar *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 FUNC_3(VAR_3, 0, sizeof(VAR_3));
 FUNC_2(VAR_4, VAR_3, sizeof(VAR_3));
 if (VAR_4->npins > 1)
  FUNC_1(VAR_1, "<unknown device> at pins %s", VAR_3);
 else
  FUNC_1(VAR_1, "<unknown device> at pin %s", VAR_3);
 FUNC_5(&VAR_4->rl, "irq", VAR_0, "%jd");
 FUNC_4("\n");
}
