
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,char*,int,int ,...) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, int VAR_6)
{
    ACPI_HANDLE VAR_7;
    ACPI_STATUS VAR_8;

    VAR_7 = FUNC_2(VAR_5);
    if (VAR_6 < VAR_1 || VAR_6 > VAR_0)
 return (VAR_3);
    if (VAR_7 == ((void*)0))
 return (0);


    VAR_8 = FUNC_4(VAR_7, VAR_6);
    if (FUNC_0(VAR_8)) {
 if (VAR_4)
     FUNC_5(VAR_5, "set ACPI power state D%d on %s\n",
  VAR_6, FUNC_3(VAR_7));
    } else if (VAR_8 != VAR_2)
 FUNC_5(VAR_5,
     "failed to set ACPI power state D%d on %s: %s\n", VAR_6,
     FUNC_3(VAR_7), FUNC_1(VAR_8));

    return (0);
}
