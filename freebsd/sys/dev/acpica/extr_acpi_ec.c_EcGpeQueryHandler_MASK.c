
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec_softc {int ec_sci_pend; } ;


 int FUNC_0 (struct acpi_ec_softc*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
    struct acpi_ec_softc *VAR_1 = (struct acpi_ec_softc *)VAR_0;
    int VAR_2;

    FUNC_1(VAR_0 != ((void*)0), ("EcGpeQueryHandler called with NULL"));

    do {

 VAR_2 = FUNC_3(&VAR_1->ec_sci_pend);


 FUNC_0(VAR_1);






    } while (!FUNC_2(&VAR_1->ec_sci_pend, VAR_2, 0));
}
