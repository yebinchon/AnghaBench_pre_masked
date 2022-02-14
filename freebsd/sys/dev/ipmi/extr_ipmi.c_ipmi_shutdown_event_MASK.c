
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {scalar_t__ ipmi_watchdog_active; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void *VAR_5, unsigned int VAR_6, int *VAR_7)
{
 struct ipmi_softc *VAR_8 = VAR_5;


 if (!VAR_1)
  return;
 VAR_2 = 1;
 if (VAR_3 == 0) {

  FUNC_1(VAR_8, 0);
  VAR_8->ipmi_watchdog_active = 0;
 } else if (VAR_3 > 0) {

  VAR_4 = VAR_0;
  FUNC_1(VAR_8, VAR_3);
  VAR_8->ipmi_watchdog_active = VAR_3;
  FUNC_0(VAR_8);
 }
}
