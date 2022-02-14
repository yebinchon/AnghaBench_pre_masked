
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ds1307_softc {int sc_ctrl; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ds1307_softc *VAR_2)
{
 int VAR_3;
 uint8_t VAR_4;

 VAR_4 = VAR_2->sc_ctrl & VAR_1;
 VAR_3 = FUNC_1(VAR_2->sc_dev, VAR_0, VAR_4);
 if (VAR_3 != 0)
  FUNC_0(VAR_2->sc_dev, "cannot write to RTC.\n");

 return (VAR_3);
}
