
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_tz_softc {int tz_flags; int tz_handle; int tz_dev; } ;
typedef scalar_t__ ACPI_STATUS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct acpi_tz_softc*,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
    ACPI_STATUS VAR_6;
    struct acpi_tz_softc *VAR_7 = (struct acpi_tz_softc *)VAR_5;
    int VAR_8;

    VAR_8 = FUNC_7();
    if (VAR_8 != VAR_2 && VAR_8 != VAR_1)
 return;


    if ((VAR_7->tz_flags & VAR_4) == 0) {


 VAR_6 = FUNC_3(VAR_7->tz_handle, "_SCP",
     (VAR_8 == VAR_2) ? 0 : 1);
 if (FUNC_0(VAR_6)) {
     if (VAR_6 != VAR_0)
  FUNC_1(VAR_7->tz_dev,
       FUNC_4(VAR_7->tz_dev),
       "can't evaluate %s._SCP - %s\n",
       FUNC_5(VAR_7->tz_handle),
       FUNC_2(VAR_6));
     VAR_7->tz_flags |= VAR_4;
 } else {

     FUNC_6(VAR_7, VAR_3);
 }
    }
}
