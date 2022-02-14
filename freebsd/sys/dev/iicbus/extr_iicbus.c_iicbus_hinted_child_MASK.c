
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_ivar {int addr; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char const*,int) ;
 struct iicbus_ivar* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*,int,char*,int*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, const char *VAR_2, int VAR_3)
{
 device_t VAR_4;
 int VAR_5;
 struct iicbus_ivar *VAR_6;

 VAR_4 = FUNC_0(VAR_1, 0, VAR_2, VAR_3);
 VAR_6 = FUNC_1(VAR_4);
 FUNC_4(VAR_2, VAR_3, "addr", &VAR_6->addr);
 if (FUNC_4(VAR_2, VAR_3, "irq", &VAR_5) == 0) {
  if (FUNC_2(VAR_4, VAR_0, 0, VAR_5, 1) != 0)
   FUNC_3(VAR_1,
       "warning: bus_set_resource() failed\n");
 }
}
