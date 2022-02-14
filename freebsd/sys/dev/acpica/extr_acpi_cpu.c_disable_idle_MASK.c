
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_cpu_softc {int cpu_disable_idle; TYPE_1__* cpu_pcpu; } ;
typedef int cpuset_t ;
struct TYPE_2__ {int pc_cpuid; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct acpi_cpu_softc *VAR_2)
{
    cpuset_t VAR_3;

    FUNC_0(VAR_2->cpu_pcpu->pc_cpuid, &VAR_3);
    VAR_2->cpu_disable_idle = VAR_0;
    FUNC_1(VAR_3, VAR_1, ((void*)0),
 VAR_1, ((void*)0));
}
