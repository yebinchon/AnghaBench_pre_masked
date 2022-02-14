
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec_softc {int ec_sci_pend; int ec_gencount; } ;
typedef int UINT32 ;
typedef int EC_STATUS ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct acpi_ec_softc*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct acpi_ec_softc*) ;

__attribute__((used)) static UINT32
FUNC_10(ACPI_HANDLE VAR_5, UINT32 VAR_6, void *VAR_7)
{
    struct acpi_ec_softc *VAR_8 = VAR_7;
    ACPI_STATUS VAR_9;
    EC_STATUS VAR_10;

    FUNC_4(VAR_7 != ((void*)0), ("EcGpeHandler called with NULL"));
    FUNC_2(VAR_3, "ec gpe handler start");







    FUNC_5(&VAR_8->ec_gencount, 1);
    FUNC_9(VAR_8);





    VAR_10 = FUNC_3(VAR_8);
    if ((VAR_10 & VAR_1) &&
 FUNC_6(&VAR_8->ec_sci_pend, 1) == 0) {
 FUNC_2(VAR_3, "ec gpe queueing query handler");
 VAR_9 = FUNC_1(VAR_4, VAR_2, VAR_7);
 if (FUNC_0(VAR_9)) {
     FUNC_8("EcGpeHandler: queuing GPE query handler failed\n");
     FUNC_7(&VAR_8->ec_sci_pend, 0);
 }
    }
    return (VAR_0);
}
