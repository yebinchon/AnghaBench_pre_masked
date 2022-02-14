
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int dummy; } ;
struct acpi_perf_softc {scalar_t__ px_max_avail; scalar_t__ px_curr_state; int dev; int * px_states; int handle; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__*) ;
 int FUNC_2 (int ,struct cf_setting*) ;
 int FUNC_3 (int ,int *,struct cf_setting*) ;

__attribute__((used)) static void
FUNC_4(struct acpi_perf_softc *VAR_1)
{
 ACPI_STATUS VAR_2;
 struct cf_setting VAR_3;

 VAR_2 = FUNC_1(VAR_1->handle, "_PPC", &VAR_1->px_max_avail);


 if (FUNC_0(VAR_2)) {
  if (VAR_1->px_curr_state != VAR_0 &&
      VAR_1->px_curr_state > VAR_1->px_max_avail) {
   FUNC_3(VAR_1->dev,
       &VAR_1->px_states[VAR_1->px_max_avail], &VAR_3);
   FUNC_2(VAR_1->dev, &VAR_3);
  }
 } else
  VAR_1->px_max_avail = 0;
}
