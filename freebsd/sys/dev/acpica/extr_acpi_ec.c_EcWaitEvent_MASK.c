
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct acpi_ec_softc {scalar_t__ ec_gencount; int ec_dev; scalar_t__ ec_suspending; } ;
typedef int EC_EVENT ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (struct acpi_ec_softc*,char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct acpi_ec_softc*,int ,char*,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8(struct acpi_ec_softc *VAR_9, EC_EVENT VAR_10, u_int VAR_11)
{
    static int VAR_12 = 0;
    ACPI_STATUS VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17;

    FUNC_1(VAR_4);
    VAR_13 = VAR_0;
    VAR_16 = VAR_3 || VAR_8 || VAR_5 || VAR_9->ec_suspending;


    if (VAR_16) {
 VAR_14 = (VAR_6 * 1000) / VAR_1;
 if (VAR_14 == 0)
     VAR_14 = 1;
 FUNC_4(10);
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
     VAR_13 = FUNC_5(VAR_9, "poll", VAR_10);
     if (FUNC_2(VAR_13))
  break;
     FUNC_4(VAR_1);
 }
    } else {
 VAR_17 = VAR_7 / 1000;
 if (VAR_17 != 0) {
     VAR_14 = VAR_6;
 } else {

     VAR_17 = 1;
     VAR_14 = VAR_6 / (1000 / VAR_7);
 }







 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
     if (VAR_11 == VAR_9->ec_gencount)
  FUNC_7(VAR_9, 0, "ecgpe", VAR_17);






     VAR_13 = FUNC_5(VAR_9, "sleep", VAR_10);
     if (FUNC_2(VAR_13)) {
  if (VAR_11 == VAR_9->ec_gencount)
      VAR_12++;
  else
      VAR_12 = 0;
  break;
     }
     VAR_11 = VAR_9->ec_gencount;
 }






 if (FUNC_0(VAR_13))
     VAR_13 = FUNC_5(VAR_9, "sleep_end", VAR_10);
    }
    if (!VAR_16 && VAR_12 > 10) {
 FUNC_6(VAR_9->ec_dev,
     "not getting interrupts, switched to polled mode\n");
 VAR_5 = 1;
    }
    if (FUNC_0(VAR_13))
     FUNC_3(VAR_2, "error: ec wait timed out");
    return (VAR_13);
}
