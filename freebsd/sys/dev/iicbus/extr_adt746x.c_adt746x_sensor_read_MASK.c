
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct adt746x_softc {int sc_addr; int sc_dev; } ;
struct adt746x_sensor {scalar_t__ type; scalar_t__ reg; int dev; } ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int*) ;
 struct adt746x_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct adt746x_sensor *VAR_3)
{
 struct adt746x_softc *VAR_4;
 int VAR_5 = 0;
 uint16_t VAR_6;
 uint8_t VAR_7[1], VAR_8[1];
 int8_t VAR_9;

 VAR_4 = FUNC_1(VAR_3->dev);
 if (VAR_3->type != VAR_0) {
  if (FUNC_0(VAR_4->sc_dev, VAR_4->sc_addr, VAR_3->reg,
     &VAR_9) < 0)
   return (-1);
  if (VAR_3->type == VAR_1)
   VAR_5 = 10 * VAR_9 + VAR_2;
  else
   VAR_5 = VAR_9;
 } else {
  if (FUNC_0(VAR_4->sc_dev, VAR_4->sc_addr, VAR_3->reg,
     VAR_7) < 0)
   return (-1);
  if (FUNC_0(VAR_4->sc_dev, VAR_4->sc_addr, VAR_3->reg + 1,
     VAR_8) < 0)
   return (-1);
  VAR_6 = VAR_7[0] + (VAR_8[0] << 8);

  if (VAR_6 == 0 || VAR_6 == 0xffff)
   VAR_5 = 0;
  else
   VAR_5 = (90000 * 60) / VAR_6;
 }
 return (VAR_5);
}
