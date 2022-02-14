
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_setting {int freq; } ;
struct acpi_perf_softc {int px_max_avail; int px_count; int px_curr_state; TYPE_1__* px_states; int perf_status; int perf_ctrl; scalar_t__ info_only; } ;
typedef int device_t ;
struct TYPE_2__ {int sts_val; int core_freq; int ctrl_val; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct acpi_perf_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, const struct cf_setting *VAR_3)
{
 struct acpi_perf_softc *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_4 = FUNC_4(VAR_2);


 if (VAR_4->info_only)
  return (VAR_1);


 for (VAR_5 = VAR_4->px_max_avail; VAR_5 < VAR_4->px_count; VAR_5++) {
  if (FUNC_0(VAR_3->freq, VAR_4->px_states[VAR_5].core_freq))
   break;
 }
 if (VAR_5 == VAR_4->px_count)
  return (VAR_0);


 FUNC_3(VAR_4->perf_ctrl, VAR_4->px_states[VAR_5].ctrl_val);






 VAR_7 = VAR_4->px_states[VAR_5].sts_val;
 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  VAR_6 = FUNC_2(VAR_4->perf_status);







  if (VAR_6 == VAR_7 ||
      ((VAR_7 & ~0xff) == 0 && (VAR_6 & 0xff) == VAR_7))
   break;
  FUNC_1(10);
 }
 if (VAR_8 == 1000) {
  FUNC_5(VAR_2, "Px transition to %d failed\n",
      VAR_4->px_states[VAR_5].core_freq);
  return (VAR_1);
 }
 VAR_4->px_curr_state = VAR_5;

 return (0);
}
