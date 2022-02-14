
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_5__ {int Type; scalar_t__ TypeDataLength; } ;
struct TYPE_6__ {TYPE_1__ CommonSerialBus; } ;
typedef int AML_RESOURCE_UART_SERIALBUS ;
typedef int AML_RESOURCE_SPI_SERIALBUS ;
typedef int AML_RESOURCE_I2C_SERIALBUS ;
typedef TYPE_2__ AML_RESOURCE ;


 int FUNC_0 (int,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;

 int FUNC_1 (int,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2 (
    AML_RESOURCE *VAR_5,
    UINT32 VAR_6)
{
    VAR_3 *VAR_4;
    UINT32 VAR_7;




    switch (VAR_5->CommonSerialBus.Type)
    {
    case 130:

        VAR_7 = VAR_5->CommonSerialBus.TypeDataLength -
            VAR_0;

        VAR_4 = FUNC_0 (VAR_3, VAR_5,
            sizeof (AML_RESOURCE_I2C_SERIALBUS));
        break;

    case 129:

        VAR_7 = VAR_5->CommonSerialBus.TypeDataLength -
            VAR_1;

        VAR_4 = FUNC_0 (VAR_3, VAR_5,
            sizeof (AML_RESOURCE_SPI_SERIALBUS));
        break;

    case 128:

        VAR_7 = VAR_5->CommonSerialBus.TypeDataLength -
            VAR_2;

        VAR_4 = FUNC_0 (VAR_3, VAR_5,
            sizeof (AML_RESOURCE_UART_SERIALBUS));
        break;

    default:

        return;
    }



    FUNC_1 (VAR_4, VAR_7, VAR_6);
}
