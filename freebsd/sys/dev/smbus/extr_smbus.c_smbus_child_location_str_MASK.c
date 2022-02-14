
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_ivar {scalar_t__ addr; } ;
typedef int device_t ;


 struct smbus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct smbus_ivar *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->addr != 0)
  FUNC_1(VAR_2, VAR_3, "addr=0x%x", VAR_4->addr);
 else if (VAR_3)
  VAR_2[0] = 0;
 return (0);
}
