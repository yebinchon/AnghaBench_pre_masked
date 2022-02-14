
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct lm75_softc {scalar_t__ sc_conf; int sc_addr; int sc_dev; } ;
typedef int buf8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(struct lm75_softc *VAR_1)
{
 uint8_t VAR_2;

 if (FUNC_0(VAR_1->sc_dev, VAR_1->sc_addr, VAR_0,
     &VAR_2, sizeof(VAR_2)) < 0)
  return (-1);
 VAR_1->sc_conf = (uint32_t)VAR_2;

 return (0);
}
