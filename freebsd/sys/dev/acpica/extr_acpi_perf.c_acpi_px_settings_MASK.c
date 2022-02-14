
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int dummy; } ;
struct acpi_perf_softc {int px_count; int px_max_avail; int * px_states; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct cf_setting*) ;
 struct acpi_perf_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct cf_setting *VAR_3, int *VAR_4)
{
 struct acpi_perf_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_1);
 if (*VAR_4 < VAR_5->px_count - VAR_5->px_max_avail)
  return (VAR_0);


 VAR_7 = 0;
 for (VAR_6 = VAR_5->px_max_avail; VAR_6 < VAR_5->px_count; VAR_6++, VAR_7++)
  FUNC_0(VAR_2, &VAR_5->px_states[VAR_6], &VAR_3[VAR_7]);
 *VAR_4 = VAR_5->px_count - VAR_5->px_max_avail;

 return (0);
}
