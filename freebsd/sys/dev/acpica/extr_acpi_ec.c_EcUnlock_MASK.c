
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec_softc {int ec_glkhandle; scalar_t__ ec_glk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct acpi_ec_softc *VAR_1)
{
    FUNC_0(VAR_0);
    if (VAR_1->ec_glk)
 FUNC_1(VAR_1->ec_glkhandle);
}
