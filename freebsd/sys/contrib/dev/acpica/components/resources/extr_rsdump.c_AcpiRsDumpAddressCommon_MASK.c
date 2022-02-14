
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_5__ {int ResourceType; } ;
struct TYPE_6__ {TYPE_1__ Address; } ;
typedef TYPE_2__ ACPI_RESOURCE_DATA ;



 int FUNC_0 () ;


 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4 (
    ACPI_RESOURCE_DATA *VAR_3)
{
    FUNC_0 ();




    switch (VAR_3->Address.ResourceType)
    {
    case 128:

        FUNC_1 (VAR_3, VAR_2);
        break;

    case 129:

        FUNC_1 (VAR_3, VAR_1);
        break;

    case 130:

        FUNC_3 ("Resource Type", "Bus Number Range");
        break;

    default:

        FUNC_2 ("Resource Type",
            (UINT8) VAR_3->Address.ResourceType);
        break;
    }



    FUNC_1 (VAR_3, VAR_0);
}
