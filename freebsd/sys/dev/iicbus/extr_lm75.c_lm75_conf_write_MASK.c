
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lm75_softc {int sc_addr; int sc_dev; scalar_t__ sc_conf; } ;
typedef int buf8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct lm75_softc *VAR_2)
{
 uint8_t VAR_3[2];

 VAR_3[0] = VAR_0;
 VAR_3[1] = (uint8_t)VAR_2->sc_conf & VAR_1;
 if (FUNC_0(VAR_2->sc_dev, VAR_2->sc_addr, VAR_3, sizeof(VAR_3)) < 0)
  return (-1);

 return (0);
}
