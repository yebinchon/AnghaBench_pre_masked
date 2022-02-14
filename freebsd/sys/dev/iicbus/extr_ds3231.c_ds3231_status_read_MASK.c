
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds3231_softc {int sc_dev; int sc_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct ds3231_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->sc_dev, VAR_0, &VAR_1->sc_status);
 if (VAR_2) {
  FUNC_0(VAR_1->sc_dev, "cannot read from RTC.\n");
  return (VAR_2);
 }

 return (0);
}
