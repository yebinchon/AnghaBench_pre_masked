
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ds1631_softc {int sc_dev; int sc_addr; int init_done; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_3(struct ds1631_softc *VAR_2)
{
 uint16_t VAR_3[2];
 uint16_t VAR_4;
 int VAR_5;

 if (!VAR_2->init_done)
  FUNC_1(VAR_2->sc_dev, VAR_2->sc_addr);

 VAR_5 = FUNC_2(VAR_2->sc_dev, VAR_2->sc_addr, VAR_0, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->sc_dev, "ds1631 read TEMP failed: %x\n", VAR_5);
  return (-1);
 }

 VAR_4 = *((int16_t *)VAR_3);







 return (((int16_t)(VAR_4) >> 6) * 25 / 10 + VAR_1);
}
