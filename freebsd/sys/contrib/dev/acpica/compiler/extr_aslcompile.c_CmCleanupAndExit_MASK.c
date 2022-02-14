
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {scalar_t__ StartTime; scalar_t__ EndTime; } ;
struct TYPE_8__ {scalar_t__ Handle; } ;
struct TYPE_7__ {struct TYPE_7__* Next; TYPE_1__* Files; scalar_t__ ParserErrorDetected; } ;
struct TYPE_6__ {int Filename; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ASL_GLOBAL_FILE_NODE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 int* VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_25 ;

 int FUNC_5 (int ) ;


 int VAR_26 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;

int
FUNC_9 (
    void)
{
    int VAR_27 = 0;
    BOOLEAN VAR_28 = VAR_25;
    ASL_GLOBAL_FILE_NODE *VAR_29 = VAR_13;




    (void) FUNC_1 ();

    FUNC_0 (VAR_4);
    if (VAR_8)
    {


        FUNC_0 (VAR_5);
    }



    FUNC_2 ();

    if (VAR_7)
    {
        FUNC_8 ("\nMiscellaneous compile statistics\n\n");
        FUNC_8 ("%11u : %s\n", VAR_24, "Parse nodes");
        FUNC_8 ("%11u : %s\n", VAR_16, "Namespace searches");
        FUNC_8 ("%11u : %s\n", VAR_23, "Named objects");
        FUNC_8 ("%11u : %s\n", VAR_22, "Control methods");
        FUNC_8 ("%11u : %s\n", VAR_20, "Memory Allocations");
        FUNC_8 ("%11u : %s\n", VAR_19, "Total allocated memory");
        FUNC_8 ("%11u : %s\n", VAR_21, "Constant subtrees folded");
        FUNC_8 ("\n");
    }

    if (VAR_16)
    {
        FUNC_4 (VAR_0,
            "\n\nMiscellaneous compile statistics\n\n");

        FUNC_4 (VAR_0,
            "%32s : %u\n", "Total Namespace searches",
            VAR_16);

        FUNC_4 (VAR_0,
            "%32s : %u usec\n", "Time per search", ((UINT32)
            (VAR_10[VAR_15].EndTime -
                VAR_10[VAR_15].StartTime) / 10) /
                VAR_16);
    }

    if (VAR_11[VAR_1] > VAR_6)
    {
        FUNC_8 ("\nMaximum error count (%d) exceeded\n",
            VAR_6);
    }

    FUNC_7 (VAR_5);
    if (VAR_17 || VAR_18 ||
        ((VAR_11[VAR_1] > 0) &&
        (!VAR_14) &&
        VAR_12[VAR_2].Handle))
    {
        VAR_28 = VAR_26;
        VAR_27 = -1;
    }



    while (VAR_29)
    {





        if (VAR_27 != -1 && !VAR_14 &&
            VAR_29->ParserErrorDetected)
        {
            VAR_27 = -1;
        }

        switch (FUNC_5 (VAR_29->Files[VAR_3].Filename))
        {
            case 128:
            case 129:

                FUNC_3 (VAR_28);
                VAR_29 = VAR_29->Next;
                break;

            case 130:
            default:

                VAR_29 = ((void*)0);
                break;
        }
    }



    if (!VAR_9)
    {
        FUNC_6 ();
    }

    return (VAR_27);
}
