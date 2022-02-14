
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adm1030_softc {int sc_pwm; int sc_addr; int sc_dev; } ;


 scalar_t__ FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct adm1030_softc *VAR_0, int VAR_1)
{

 if (VAR_1 > 0xF)
  VAR_1 = 0xF;
 if (VAR_1 < 0)
  VAR_1 = 0;

 if (FUNC_0(VAR_0->sc_dev, VAR_0->sc_addr, 0x22, VAR_1) < 0)
  return (-1);

 VAR_0->sc_pwm = VAR_1;
 return (0);
}
