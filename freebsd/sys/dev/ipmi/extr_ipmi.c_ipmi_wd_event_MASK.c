
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct ipmi_softc {unsigned int ipmi_watchdog_active; scalar_t__ ipmi_watchdog_actions; scalar_t__ ipmi_watchdog_pretimeout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (struct ipmi_softc*,unsigned int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_3(void *VAR_7, unsigned int VAR_8, int *VAR_9)
{
 struct ipmi_softc *VAR_10 = VAR_7;
 unsigned int VAR_11;
 int VAR_12;


 if (!VAR_3)
  return;







 if (VAR_4) {
  if (VAR_2 && VAR_10->ipmi_watchdog_active)
   FUNC_1(VAR_10);
  return;
 }

 VAR_8 &= VAR_1;
 if (VAR_8 > 0 && VAR_8 <= 63) {
  VAR_11 = ((uint64_t)1 << VAR_8) / 1000000000;
  if (VAR_11 == 0)
   VAR_11 = 1;
  if (VAR_11 != VAR_10->ipmi_watchdog_active ||
      VAR_6 != VAR_10->ipmi_watchdog_actions ||
      VAR_5 != VAR_10->ipmi_watchdog_pretimeout) {
   VAR_12 = FUNC_2(VAR_10, VAR_11);
   if (VAR_12 == 0) {
    VAR_10->ipmi_watchdog_active = VAR_11;
    VAR_10->ipmi_watchdog_actions = VAR_6;
    VAR_10->ipmi_watchdog_pretimeout = VAR_5;
   } else {
    (void)FUNC_2(VAR_10, 0);
    VAR_10->ipmi_watchdog_active = 0;
    VAR_10->ipmi_watchdog_actions = 0;
    VAR_10->ipmi_watchdog_pretimeout = 0;
   }
  }
  if (VAR_10->ipmi_watchdog_active != 0) {
   VAR_12 = FUNC_1(VAR_10);
   if (VAR_12 == 0) {
    *VAR_9 = 0;
   } else {
    (void)FUNC_2(VAR_10, 0);
    VAR_10->ipmi_watchdog_active = 0;
    VAR_10->ipmi_watchdog_actions = 0;
    VAR_10->ipmi_watchdog_pretimeout = 0;
   }
  }
 } else if (FUNC_0(&VAR_10->ipmi_watchdog_active) != 0) {
  VAR_10->ipmi_watchdog_actions = 0;
  VAR_10->ipmi_watchdog_pretimeout = 0;

  VAR_12 = FUNC_2(VAR_10, 0);
  if (VAR_12 != 0 && VAR_8 == 0)
   *VAR_9 = VAR_0;
 }
}
