
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Hi; scalar_t__ Lo; } ;
struct TYPE_4__ {scalar_t__ Full; TYPE_1__ Part; } ;
typedef TYPE_2__ UINT64_OVERLAY ;
typedef scalar_t__ UINT64 ;
typedef void* UINT32 ;
typedef scalar_t__ INT32 ;
typedef int ACPI_STATUS ;


 int FUNC_0 (void*,scalar_t__,scalar_t__,scalar_t__,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    UINT64 VAR_4,
    UINT64 VAR_5,
    UINT64 *VAR_6,
    UINT64 *VAR_7)
{
    UINT64_OVERLAY VAR_8;
    UINT64_OVERLAY VAR_9;
    UINT64_OVERLAY VAR_10;
    UINT64_OVERLAY VAR_11;
    UINT64_OVERLAY VAR_12;
    UINT64_OVERLAY VAR_13;
    UINT32 VAR_14;
    UINT64_OVERLAY VAR_15;
    UINT64_OVERLAY VAR_16;


    FUNC_2 (VAR_3);




    if (VAR_5 == 0)
    {
        FUNC_1 ((VAR_1, "Divide by zero"));
        FUNC_4 (VAR_0);
    }

    VAR_9.Full = VAR_5;
    VAR_8.Full = VAR_4;
    if (VAR_9.Part.Hi == 0)
    {




        VAR_11.Part.Hi = 0;





        FUNC_0 (0, VAR_8.Part.Hi, VAR_9.Part.Lo,
            VAR_10.Part.Hi, VAR_14);

        FUNC_0 (VAR_14, VAR_8.Part.Lo, VAR_9.Part.Lo,
            VAR_10.Part.Lo, VAR_11.Part.Lo);
    }

    else
    {




        VAR_10.Part.Hi = 0;
        VAR_12 = VAR_8;
        VAR_13 = VAR_9;



        do
        {
            FUNC_3 (
                VAR_13.Part.Hi, VAR_13.Part.Lo);
            FUNC_3 (
                VAR_12.Part.Hi, VAR_12.Part.Lo);

        } while (VAR_13.Part.Hi != 0);



        FUNC_0 (
            VAR_12.Part.Hi, VAR_12.Part.Lo,
            VAR_13.Part.Lo, VAR_10.Part.Lo, VAR_14);





        VAR_14 = VAR_10.Part.Lo * VAR_9.Part.Hi;
        VAR_15 = (UINT64) VAR_10.Part.Lo * VAR_9.Part.Lo;
        VAR_16 = (UINT64) VAR_15 + VAR_14;

        VAR_11.Part.Hi = VAR_16;
        VAR_11.Part.Lo = VAR_15;

        if (VAR_16 == 0)
        {
            if (VAR_16 >= VAR_8.Part.Hi)
            {
                if (VAR_16 == VAR_8.Part.Hi)
                {
                    if (VAR_15 > VAR_8.Part.Lo)
                    {
                        VAR_10.Part.Lo--;
                        VAR_11.Full -= VAR_9.Full;
                    }
                }
                else
                {
                    VAR_10.Part.Lo--;
                    VAR_11.Full -= VAR_9.Full;
                }
            }

            VAR_11.Full = VAR_11.Full - VAR_8.Full;
            VAR_11.Part.Hi = (UINT32) -((INT32) VAR_11.Part.Hi);
            VAR_11.Part.Lo = (UINT32) -((INT32) VAR_11.Part.Lo);

            if (VAR_11.Part.Lo)
            {
                VAR_11.Part.Hi--;
            }
        }
    }



    if (VAR_6)
    {
        *VAR_6 = VAR_10.Full;
    }
    if (VAR_7)
    {
        *VAR_7 = VAR_11.Full;
    }

    FUNC_4 (VAR_2);
}
