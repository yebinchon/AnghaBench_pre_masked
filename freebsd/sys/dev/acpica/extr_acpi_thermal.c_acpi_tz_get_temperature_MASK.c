
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_tz_softc {int tz_temperature; int tz_dev; int tz_handle; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct acpi_tz_softc*,int*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(struct acpi_tz_softc *VAR_4)
{
    int VAR_5;
    ACPI_STATUS VAR_6;

    FUNC_2 ("acpi_tz_get_temperature");


    VAR_6 = FUNC_6(VAR_4->tz_handle, VAR_3, &VAR_5);
    if (FUNC_1(VAR_6)) {
 FUNC_3(VAR_4->tz_dev, FUNC_7(VAR_4->tz_dev),
     "error fetching current temperature -- %s\n",
      FUNC_4(VAR_6));
 return (VAR_1);
    }


    FUNC_8(VAR_4, &VAR_5, VAR_3);
    if (VAR_5 == -1)
 return (VAR_1);

    FUNC_0((VAR_0, "got %d.%dC\n", FUNC_5(VAR_5)));
    VAR_4->tz_temperature = VAR_5;
    return (VAR_2);
}
