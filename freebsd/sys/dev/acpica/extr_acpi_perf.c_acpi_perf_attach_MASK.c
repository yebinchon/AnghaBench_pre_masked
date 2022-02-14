
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_perf_softc {int info_only; int px_curr_state; scalar_t__ px_max_avail; int handle; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 struct acpi_perf_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct acpi_perf_softc *VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_5->handle = FUNC_1(VAR_4);
 VAR_5->px_max_avail = 0;
 VAR_5->px_curr_state = VAR_0;
 if (FUNC_2(VAR_4) != 0)
  return (VAR_1);
 FUNC_0(VAR_2, VAR_3, ((void*)0));
 if (!VAR_5->info_only)
  FUNC_3(VAR_4);

 return (0);
}
