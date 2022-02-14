
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_perf_softc {scalar_t__ info_only; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_perf_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, int *VAR_4)
{
 struct acpi_perf_softc *VAR_5;

 if (VAR_4 == ((void*)0))
  return (VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 *VAR_4 = VAR_1;
 if (VAR_5->info_only)
  *VAR_4 |= VAR_0;
 return (0);
}
