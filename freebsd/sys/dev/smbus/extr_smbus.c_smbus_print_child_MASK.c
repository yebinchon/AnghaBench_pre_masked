
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_ivar {scalar_t__ addr; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct smbus_ivar* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct smbus_ivar *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2->addr != 0)
  VAR_3 += FUNC_3(" at addr 0x%x", VAR_2->addr);
 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
