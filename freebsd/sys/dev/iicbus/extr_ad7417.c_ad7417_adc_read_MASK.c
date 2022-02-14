
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ad7417_softc {int sc_addr; int sc_dev; } ;
struct ad7417_sensor {int id; int dev; } ;


 scalar_t__ FUNC_0 (int ,int ,int*,int) ;
 struct ad7417_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct ad7417_sensor *VAR_0)
{
 struct ad7417_softc *VAR_1;
 uint8_t VAR_2;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0->dev);

 switch (VAR_0->id) {
 case 11:
 case 16:
  VAR_2 = 1;
  break;
 case 12:
 case 17:
  VAR_2 = 2;
  break;
 case 13:
 case 18:
  VAR_2 = 3;
  break;
 case 14:
 case 19:
  VAR_2 = 4;
  break;
 default:
  VAR_2 = 1;
 }

 if (FUNC_0(VAR_1->sc_dev, VAR_1->sc_addr, &VAR_3, VAR_2) < 0)
  return (-1);

 return (VAR_3);
}
