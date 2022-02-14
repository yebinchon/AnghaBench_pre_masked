
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Type; int Flags; struct TYPE_5__* Path; struct TYPE_5__* InternalPath; struct TYPE_5__* Next; int Value; } ;
typedef TYPE_1__ ACPI_EXTERNAL_LIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

void
FUNC_5 (
    void)
{
    ACPI_EXTERNAL_LIST *VAR_11;


    if (!VAR_6)
    {
        return;
    }





    VAR_11 = VAR_6;
    while (VAR_11)
    {
        if (VAR_11->Type == VAR_5)
        {
            VAR_7++;
            if (VAR_11->Flags & VAR_4)
            {
                VAR_8++;
            }
        }

        VAR_11 = VAR_11->Next;
    }



    FUNC_3 (1);

    if (VAR_9)
    {
        FUNC_4 (
            "    /*\n     * External declarations were imported from\n"
            "     * a reference file -- %s\n     */\n\n",
            VAR_9);
    }




    while (VAR_6)
    {
        if (!(VAR_6->Flags & VAR_1))
        {
            FUNC_4 ("    External (%s%s)",
                VAR_6->Path,
                FUNC_2 (VAR_6->Type));



            if ((VAR_6->Type == VAR_5) &&
                (!(VAR_6->Flags & VAR_4)))
            {
                FUNC_4 ("    // Warning: Unknown method, "
                    "guessing %u arguments",
                    VAR_6->Value);
            }



            else if (VAR_6->Flags & VAR_3)
            {
                if (VAR_6->Type == VAR_5)
                {
                    FUNC_4 ("    // %u Arguments",
                        VAR_6->Value);
                }

                FUNC_4 ("    // From external reference file");
            }



            else
            {


                if (VAR_6->Type == VAR_5)
                {
                    FUNC_4 ("    // %u Arguments",
                        VAR_6->Value);
                }
            }

            if (VAR_6->Flags &= VAR_0)
            {
                FUNC_4 ("%s", VAR_10);
                FUNC_1 (VAR_6->Path);
            }
            FUNC_4 ("\n");
        }



        VAR_11 = VAR_6->Next;
        if (VAR_6->Flags & VAR_2)
        {
            FUNC_0 (VAR_6->InternalPath);
        }

        FUNC_0 (VAR_6->Path);
        FUNC_0 (VAR_6);
        VAR_6 = VAR_11;
    }

    FUNC_4 ("\n");
}
