
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int member_0; int member_2; int* member_3; int member_1; } ;
struct ec_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct ec_softc* VAR_5 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int ,struct iic_msg*,int) ;
 int* FUNC_4 (int,int ,int ) ;

int
FUNC_5(uint8_t VAR_6, uint8_t *VAR_7, uint8_t VAR_8,
    uint8_t *VAR_9, uint8_t VAR_10)
{
 struct ec_softc *VAR_11;
 uint8_t *VAR_12;
 uint8_t *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_4(VAR_8 + 4, VAR_3, VAR_4);
 VAR_13 = FUNC_4(VAR_10 + 3, VAR_3, VAR_4);

 if (VAR_5 == ((void*)0))
  return (-1);

 VAR_11 = VAR_5;

 VAR_12[0] = VAR_0;
 VAR_12[1] = VAR_6;
 VAR_12[2] = VAR_8;

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_12[VAR_15 + 3] = VAR_7[VAR_15];
 }

 FUNC_1(VAR_12, VAR_8 + 3);

 struct iic_msg VAR_16[] = {
  { 0x1e, VAR_2, VAR_8 + 4, *VAR_12, },
  { 0x1e, VAR_1, VAR_10 + 3, *VAR_13, },
 };

 VAR_14 = FUNC_3(VAR_11->dev, VAR_16, 2);
 if (VAR_14 != 0) {
  FUNC_0(VAR_11->dev, "i2c transfer returned %d\n", VAR_14);
  FUNC_2(VAR_12, VAR_3);
  FUNC_2(VAR_13, VAR_3);
  return (-1);
 }

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_9[VAR_15] = VAR_13[VAR_15 + 2];
 }

 FUNC_2(VAR_12, VAR_3);
 FUNC_2(VAR_13, VAR_3);
 return (0);
}
