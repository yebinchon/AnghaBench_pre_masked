
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct acpi_cpu_softc {int cpu_cx_count; TYPE_1__* cpu_cx_states; int cpu_cx_supported; } ;
struct TYPE_2__ {int trans_lat; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*,int ,int,int ) ;
 int FUNC_2 (struct sbuf*,char*,int,int ,int ) ;
 int FUNC_3 (struct sbuf*) ;

__attribute__((used)) static void
FUNC_4(struct acpi_cpu_softc *VAR_1)
{
    struct sbuf VAR_2;
    int VAR_3;




    FUNC_1(&VAR_2, VAR_1->cpu_cx_supported, sizeof(VAR_1->cpu_cx_supported),
 VAR_0);
    for (VAR_3 = 0; VAR_3 < VAR_1->cpu_cx_count; VAR_3++)
 FUNC_2(&VAR_2, "C%d/%d/%d ", VAR_3 + 1, VAR_1->cpu_cx_states[VAR_3].type,
     VAR_1->cpu_cx_states[VAR_3].trans_lat);
    FUNC_3(&VAR_2);
    FUNC_0(&VAR_2);
}
