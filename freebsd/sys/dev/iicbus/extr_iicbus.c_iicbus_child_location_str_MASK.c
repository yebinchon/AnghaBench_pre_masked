
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_ivar {int addr; } ;
typedef int device_t ;


 struct iicbus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct iicbus_ivar *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_3, "addr=%#x", VAR_4->addr);
 return (0);
}
