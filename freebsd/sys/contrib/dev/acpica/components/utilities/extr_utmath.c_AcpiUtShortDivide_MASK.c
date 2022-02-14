
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Lo; int Hi; } ;
struct TYPE_4__ {int Full; TYPE_1__ Part; } ;
typedef TYPE_2__ UINT64_OVERLAY ;
typedef int UINT64 ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;


 int FUNC_0 (scalar_t__,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    UINT64 VAR_4,
    UINT32 VAR_5,
    UINT64 *VAR_6,
    UINT32 *VAR_7)
{
    UINT64_OVERLAY VAR_8;
    UINT64_OVERLAY VAR_9;
    UINT32 VAR_10;


    FUNC_2 (VAR_3);




    if (VAR_5 == 0)
    {
        FUNC_1 ((VAR_1, "Divide by zero"));
        FUNC_3 (VAR_0);
    }

    VAR_8.Full = VAR_4;





    FUNC_0 (0, VAR_8.Part.Hi, VAR_5,
        VAR_9.Part.Hi, VAR_10);

    FUNC_0 (VAR_10, VAR_8.Part.Lo, VAR_5,
        VAR_9.Part.Lo, VAR_10);



    if (VAR_6)
    {
        *VAR_6 = VAR_9.Full;
    }
    if (VAR_7)
    {
        *VAR_7 = VAR_10;
    }

    FUNC_3 (VAR_2);
}
