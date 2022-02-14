
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int member_2; int slave; int * member_3; int member_1; int member_0; } ;
struct as3722_softc {int dev; int bus_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,struct iic_msg*,int) ;

int
FUNC_2(struct as3722_softc *VAR_3, uint8_t VAR_4, uint8_t *VAR_5)
{
 uint8_t VAR_6;
 int VAR_7;
 struct iic_msg VAR_8[2] = {
  {0, VAR_2, 1, VAR_6},
  {0, VAR_1, 1, *VAR_5},
 };

 VAR_8[0].slave = VAR_3->bus_addr;
 VAR_8[1].slave = VAR_3->bus_addr;
 VAR_6 = VAR_4;

 VAR_7 = FUNC_1(VAR_3->dev, VAR_8, 2);
 if (VAR_7 != 0) {
  FUNC_0(VAR_3->dev,
      "Error when reading reg 0x%02X, rv: %d\n", VAR_4, VAR_7);
  return (VAR_0);
 }

 return (0);
}
