
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ds1775_softc {int sc_addr; int sc_dev; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct ds1775_softc *VAR_2)
{
 uint16_t VAR_3[2];
 uint16_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->sc_dev, VAR_2->sc_addr, VAR_0, VAR_3);
 if (VAR_5 < 0)
  return (-1);

 VAR_4 = *((int16_t *)VAR_3);




 return (((int16_t)(VAR_4) >> 7) * 5 + VAR_1);
}
