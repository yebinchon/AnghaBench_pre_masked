
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cyapa_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct cyapa_softc *VAR_2, int VAR_3)
{
 uint8_t VAR_4;
 device_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2->dev);
 VAR_6 = FUNC_4(VAR_5, VAR_2->dev, VAR_1);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_0(VAR_2->dev, VAR_0,
      &VAR_4, 1);
  VAR_4 = (VAR_4 & ~0xFC) | VAR_3;
  if (VAR_6 == 0) {
   VAR_6 = FUNC_1(VAR_2->dev, VAR_0,
       &VAR_4, 1);
  }
  FUNC_3(VAR_5, VAR_2->dev);
 }
}
