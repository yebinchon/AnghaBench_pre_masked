
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct as3722_softc {scalar_t__ chip_rev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct as3722_softc*,int ,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct as3722_softc *VAR_5)
{
 uint8_t VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_3);

 if (VAR_6 != VAR_2) {
  FUNC_1(VAR_5->dev, "Invalid chip ID is 0x%x\n", VAR_6);
  return (VAR_3);
 }

 VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_5->chip_rev);
 if (VAR_7 != 0)
  return (VAR_3);

 if (VAR_4)
  FUNC_1(VAR_5->dev, "AS3722 rev: 0x%x\n", VAR_5->chip_rev);
 return (0);
}
