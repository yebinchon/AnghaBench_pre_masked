
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_cpu_softc {int cpu_cx_lowest; int cpu_non_c3; int cpu_cx_stats; TYPE_1__* cpu_cx_states; scalar_t__ cpu_cx_count; int cpu_cx_lowest_lim; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct acpi_cpu_softc *VAR_2)
{
    int VAR_3;

    FUNC_0(VAR_1);
    VAR_2->cpu_cx_lowest = FUNC_2(VAR_2->cpu_cx_lowest_lim, VAR_2->cpu_cx_count - 1);


    VAR_2->cpu_non_c3 = 0;
    for (VAR_3 = VAR_2->cpu_cx_lowest; VAR_3 >= 0; VAR_3--) {
 if (VAR_2->cpu_cx_states[VAR_3].type < VAR_0) {
     VAR_2->cpu_non_c3 = VAR_3;
     break;
 }
    }


    FUNC_1(VAR_2->cpu_cx_stats, sizeof(VAR_2->cpu_cx_stats));
    return (0);
}
