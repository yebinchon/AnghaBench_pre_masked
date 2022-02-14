
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 if (FUNC_2(VAR_3, VAR_4, VAR_5) < 0)
  return (-1);

 if (FUNC_1(VAR_3, VAR_1) & VAR_2) {
  FUNC_0(VAR_3, "write: I2C command ACK Error.\n");
  return (VAR_0);
 }
 return (0);
}
