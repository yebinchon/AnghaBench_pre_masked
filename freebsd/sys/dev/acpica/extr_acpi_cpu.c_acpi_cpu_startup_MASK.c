
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cpu_softc {int cpu_handle; scalar_t__ cpu_non_c3; int cpu_cx_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct acpi_cpu_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct acpi_cpu_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (struct acpi_cpu_softc*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,int **,int*) ;
 struct acpi_cpu_softc* FUNC_7 (int ) ;
 int FUNC_8 (struct acpi_cpu_softc*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(void *VAR_17)
{
    struct acpi_cpu_softc *VAR_18;
    int VAR_19;


    FUNC_6(VAR_5, &VAR_11, &VAR_13);





    FUNC_4();

    if (VAR_9) {




 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
     VAR_18 = FUNC_7(VAR_11[VAR_19]);
     FUNC_3(VAR_18);
 }
    } else {





 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
     VAR_18 = FUNC_7(VAR_11[VAR_19]);
     if (VAR_14 & VAR_1) {
  VAR_18->cpu_cx_count = FUNC_9(VAR_18->cpu_cx_count, VAR_18->cpu_non_c3 + 1);
     }
     FUNC_0(VAR_18->cpu_handle, VAR_0,
  VAR_8, VAR_18);
 }
    }


    for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
 VAR_18 = FUNC_7(VAR_11[VAR_19]);
 FUNC_5(VAR_18);
    }


    FUNC_1(&VAR_15, FUNC_2(VAR_16),
 VAR_4, "cx_lowest", VAR_3 | VAR_2,
 ((void*)0), 0, VAR_6, "A",
 "Global lowest Cx sleep state to use");


    VAR_10 = 0;
    for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
 VAR_18 = FUNC_7(VAR_11[VAR_19]);
 FUNC_8(VAR_18);
    }

    VAR_12 = VAR_7;

}
