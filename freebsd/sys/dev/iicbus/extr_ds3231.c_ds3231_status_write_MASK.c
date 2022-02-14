
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ds3231_softc {int sc_dev; int sc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct ds3231_softc *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 uint8_t VAR_7;

 VAR_7 = VAR_3->sc_status;
 if (VAR_4 == 0)
  VAR_7 |= VAR_1;
 if (VAR_5 == 0)
  VAR_7 |= VAR_2;
 VAR_6 = FUNC_1(VAR_3->sc_dev, VAR_0, VAR_7);
 if (VAR_6 != 0)
  FUNC_0(VAR_3->sc_dev, "cannot write to RTC.\n");

 return (VAR_6);
}
