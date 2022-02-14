
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cpu_softc {int cpu_dev; int cpu_sysctl_ctx; int cpu_cx_supported; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_4 (int *,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (struct acpi_cpu_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct acpi_cpu_softc *VAR_12)
{
    FUNC_6(VAR_12);

    FUNC_4(&VAR_12->cpu_sysctl_ctx,
        FUNC_5(FUNC_7(VAR_12->cpu_dev)),
        VAR_3, "cx_supported", VAR_0,
        VAR_12->cpu_cx_supported, 0,
        "Cx/microsecond values for supported Cx states");
    FUNC_3(&VAR_12->cpu_sysctl_ctx,
      FUNC_5(FUNC_7(VAR_12->cpu_dev)),
      VAR_3, "cx_lowest", VAR_2 | VAR_1,
      (void *)VAR_12, 0, VAR_5, "A",
      "lowest Cx sleep state to use");
    FUNC_3(&VAR_12->cpu_sysctl_ctx,
      FUNC_5(FUNC_7(VAR_12->cpu_dev)),
      VAR_3, "cx_usage", VAR_2 | VAR_0,
      (void *)VAR_12, 0, VAR_8, "A",
      "percent usage for each Cx state");
    FUNC_3(&VAR_12->cpu_sysctl_ctx,
      FUNC_5(FUNC_7(VAR_12->cpu_dev)),
      VAR_3, "cx_usage_counters", VAR_2 | VAR_0,
      (void *)VAR_12, 0, VAR_7, "A",
      "Cx sleep state counters");

    FUNC_3(&VAR_12->cpu_sysctl_ctx,
      FUNC_5(FUNC_7(VAR_12->cpu_dev)),
      VAR_3, "cx_method", VAR_2 | VAR_0,
      (void *)VAR_12, 0, VAR_6, "A",
      "Cx entrance methods");



    if (!VAR_10 && VAR_9 != 0) {
 FUNC_0(VAR_4);
 FUNC_2(VAR_11, VAR_9, 8);
 FUNC_1(VAR_4);
    }
}
