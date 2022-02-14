
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct lm75_softc {int sc_conf; int sc_hwtype; int sc_addr; int sc_dev; } ;
typedef int buf8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lm75_softc*) ;
 scalar_t__ FUNC_1 (struct lm75_softc*) ;
 scalar_t__ FUNC_2 (int ,int ,int,int*,int) ;

__attribute__((used)) static int
FUNC_3(struct lm75_softc *VAR_2)
{
 int VAR_3, VAR_4;
 uint8_t VAR_5;
 uint32_t VAR_6;


 if (FUNC_0(VAR_2) != 0)
  return (-1);
 VAR_6 = VAR_2->sc_conf;





 VAR_2->sc_conf = VAR_1;
 if (FUNC_1(VAR_2) != 0)
  return (-1);





 if (FUNC_0(VAR_2) != 0)
  return (-1);
 if (VAR_2->sc_conf != VAR_1)
  return (-1);







 VAR_4 = 0;
 for (VAR_3 = 4; VAR_3 <= 6; VAR_3++) {
  if (FUNC_2(VAR_2->sc_dev, VAR_2->sc_addr, VAR_3,
      &VAR_5, sizeof(VAR_5)) < 0)
   return (-1);
  if (VAR_5 != VAR_1 && VAR_5 != 0xff)
   return (-1);
  if (VAR_5 == 0xff)
   VAR_4++;
 }
 if (VAR_4 == 3)
  VAR_2->sc_hwtype = VAR_0;


 VAR_2->sc_conf = VAR_6;
 if (FUNC_1(VAR_2) != 0)
  return (-1);

 return (0);
}
