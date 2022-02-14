
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct max6690_softc {int sc_addr; int sc_dev; } ;
struct max6690_sensor {int id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct max6690_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct max6690_sensor *VAR_6)
{
 uint8_t VAR_7 = 0, VAR_8 = 0;
 uint8_t VAR_9 = 0;
 uint8_t VAR_10 = 0;
 int VAR_11, VAR_12;

 struct max6690_softc *VAR_13;

 VAR_13 = FUNC_0(VAR_6->dev);


 if ((VAR_6->id % 2) == 0) {
  VAR_7 = VAR_3;
  VAR_8 = VAR_2;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = VAR_0;
 }

 VAR_11 = FUNC_1(VAR_13->sc_dev, VAR_13->sc_addr, VAR_7, &VAR_9);

 if (VAR_11 < 0)
  return (-1);

 VAR_11 = FUNC_1(VAR_13->sc_dev, VAR_13->sc_addr, VAR_8, &VAR_10);

 if (VAR_11 < 0)
  return (-1);

 VAR_10 &= VAR_4;




 VAR_12 = (VAR_9 * 10) + (VAR_10 >> 5) * 10 / 8;

 return (VAR_12 + VAR_5);
}
