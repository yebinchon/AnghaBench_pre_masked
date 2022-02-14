
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_tz_softc {scalar_t__ tz_cooling_updated; int tz_cooling_saved_freq; int tz_temperature; int tz_dev; } ;
typedef int * device_t ;


 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct acpi_tz_softc *VAR_3)
{
    device_t VAR_4;
    int VAR_5;

    if (!VAR_3->tz_cooling_updated)
 return (0);
    if ((VAR_4 = FUNC_5(FUNC_4("cpufreq"), 0)) == ((void*)0))
 return (VAR_1);
    FUNC_0(VAR_3->tz_dev, FUNC_3(VAR_3->tz_dev),
 "temperature %d.%dC: resuming previous clock speed (%d MHz)\n",
 FUNC_2(VAR_3->tz_temperature), VAR_3->tz_cooling_saved_freq);
    VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_0);
    if (VAR_5 == 0)
 VAR_3->tz_cooling_updated = VAR_2;
    return (VAR_5);
}
