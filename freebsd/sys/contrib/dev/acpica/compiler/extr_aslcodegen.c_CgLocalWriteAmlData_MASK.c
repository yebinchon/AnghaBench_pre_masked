
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int FinalAmlLength; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,scalar_t__) ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_1,
    void *VAR_2,
    UINT32 VAR_3)
{



    FUNC_0 (VAR_0, VAR_2, VAR_3);



    if (VAR_1)
    {
        VAR_1->Asl.FinalAmlLength += VAR_3;
    }
}
