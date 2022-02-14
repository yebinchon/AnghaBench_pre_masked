
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_acad_softc {int status; } ;
typedef void* device_t ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 struct acpi_acad_softc* FUNC_7 (void*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_3)
{
    struct acpi_acad_softc *VAR_4;
    device_t VAR_5;
    ACPI_HANDLE VAR_6;
    int VAR_7;

    VAR_5 = VAR_3;
    VAR_4 = FUNC_7(VAR_5);
    VAR_6 = FUNC_6(VAR_5);
    VAR_7 = -1;
    FUNC_3(VAR_6, "_PSR", &VAR_7);


    FUNC_0(VAR_2);
    if (VAR_7 != -1 && VAR_4->status != VAR_7) {
 VAR_4->status = VAR_7;
 FUNC_1(VAR_2);
 FUNC_8(VAR_7 ? VAR_1 :
     VAR_0);
 FUNC_2(VAR_5, FUNC_5(VAR_5),
     "%s Line\n", VAR_7 ? "On" : "Off");
 FUNC_4("ACAD", VAR_6, VAR_7);
    } else
 FUNC_1(VAR_2);
}
