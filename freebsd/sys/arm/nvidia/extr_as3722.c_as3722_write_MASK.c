
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int member_2; int slave; int * member_3; int member_1; int member_0; } ;
struct as3722_softc {int dev; int bus_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,struct iic_msg*,int) ;

int
FUNC_2(struct as3722_softc *VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
 uint8_t VAR_5[2];
 int VAR_6;

 struct iic_msg VAR_7[1] = {
  {0, VAR_1, 2, VAR_5},
 };

 VAR_7[0].slave = VAR_2->bus_addr;
 VAR_5[0] = VAR_3;
 VAR_5[1] = VAR_4;

 VAR_6 = FUNC_1(VAR_2->dev, VAR_7, 1);
 if (VAR_6 != 0) {
  FUNC_0(VAR_2->dev,
      "Error when writing reg 0x%02X, rv: %d\n", VAR_3, VAR_6);
  return (VAR_0);
 }
 return (0);
}
