
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ UINT64 ;
typedef int ACPI_OBJECT ;


 int FUNC_0 (int *,int,scalar_t__*) ;

int
FUNC_1(ACPI_OBJECT *VAR_0, int VAR_1, uint32_t *VAR_2)
{
    UINT64 VAR_3;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
    if (VAR_4 == 0)
 *VAR_2 = (uint32_t)VAR_3;

    return (VAR_4);
}
