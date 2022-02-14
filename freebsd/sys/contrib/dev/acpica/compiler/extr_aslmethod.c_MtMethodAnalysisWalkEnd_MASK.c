
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_19__ {int ParseOpcode; char* Namepath; int CompileFlags; char* ExternalName; TYPE_2__* Parent; TYPE_6__* Next; int ParentMethod; } ;
struct TYPE_22__ {TYPE_3__ Asl; } ;
struct TYPE_21__ {TYPE_4__* MethodStack; } ;
struct TYPE_20__ {int Op; int NumReturnWithValue; int NumReturnNoValue; struct TYPE_20__* Next; } ;
struct TYPE_17__ {int CompileFlags; } ;
struct TYPE_18__ {TYPE_1__ Asl; } ;
typedef TYPE_4__ ASL_METHOD_INFO ;
typedef TYPE_5__ ASL_ANALYSIS_WALK_INFO ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int ,TYPE_6__*,char*) ;
 int FUNC_7 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int FUNC_8 (char*,char*) ;

ACPI_STATUS
FUNC_9 (
    ACPI_PARSE_OBJECT *VAR_11,
    UINT32 VAR_12,
    void *VAR_13)
{
    ASL_ANALYSIS_WALK_INFO *VAR_14 = (ASL_ANALYSIS_WALK_INFO *) VAR_13;
    ASL_METHOD_INFO *VAR_15 = VAR_14->MethodStack;


    switch (VAR_11->Asl.ParseOpcode)
    {
    case 130:
    case 128:

        if (!VAR_15)
        {
            FUNC_8 ("No method info for method! [%s]\n", VAR_11->Asl.Namepath);
            FUNC_6 (VAR_2, VAR_3, VAR_11,
                "No method info for this method");

            FUNC_7 ();
            return (VAR_0);
        }
        break;

    default:

        break;
    }

    switch (VAR_11->Asl.ParseOpcode)
    {
    case 130:

        VAR_14->MethodStack = VAR_15->Next;






        if ((!FUNC_1 (VAR_11)) &&
            (!(VAR_11->Asl.CompileFlags & VAR_7)))
        {




            VAR_15->NumReturnNoValue++;
        }






        if (VAR_15->NumReturnNoValue &&
            VAR_15->NumReturnWithValue)
        {
            FUNC_6 (VAR_6, VAR_4, VAR_11,
                VAR_11->Asl.ExternalName);
        }
        if (VAR_15->NumReturnNoValue)
        {
            if (VAR_15->NumReturnWithValue)
            {
                VAR_11->Asl.CompileFlags |= VAR_10;
            }
            else
            {
                VAR_11->Asl.CompileFlags |= VAR_9;
            }
        }






        if (FUNC_3 (VAR_11, VAR_15))
        {


            FUNC_2 (VAR_11);





            FUNC_5 (VAR_11);
        }

        FUNC_0 (VAR_15);
        break;

    case 129:



        FUNC_2 (VAR_11);
        break;

    case 128:





        FUNC_4 (VAR_11, VAR_15);





        VAR_11->Asl.Parent->Asl.CompileFlags |= VAR_7;



        VAR_11->Asl.ParentMethod = VAR_15->Op;






        if (VAR_11->Asl.Next)
        {
            FUNC_6 (VAR_6, VAR_5,
                VAR_11->Asl.Next, ((void*)0));
        }
        break;

    case 131:

        if ((VAR_11->Asl.CompileFlags & VAR_7) &&
            (VAR_11->Asl.Next) &&
            (VAR_11->Asl.Next->Asl.ParseOpcode == 132))
        {





            VAR_11->Asl.Next->Asl.CompileFlags |= VAR_8;
        }
        break;

    case 132:

        if ((VAR_11->Asl.CompileFlags & VAR_7) &&
            (VAR_11->Asl.CompileFlags & VAR_8))
        {




            VAR_11->Asl.Parent->Asl.CompileFlags |= VAR_7;
        }
        break;


    default:

        if ((VAR_11->Asl.CompileFlags & VAR_7) &&
            (VAR_11->Asl.Parent))
        {


            VAR_11->Asl.Parent->Asl.CompileFlags |= VAR_7;
        }
        break;
    }

    return (VAR_1);
}
