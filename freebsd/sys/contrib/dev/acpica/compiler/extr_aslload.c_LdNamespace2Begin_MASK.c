
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_17__ {int Object; } ;
struct TYPE_14__ {scalar_t__ ParseOpcode; int CompileFlags; char* Namepath; int ExternalName; TYPE_3__* Child; int AmlOpcode; TYPE_4__* Node; int ParseOpName; } ;
struct TYPE_16__ {TYPE_1__ Asl; } ;
struct TYPE_15__ {int ScopeInfo; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__ (*) (TYPE_3__*,int ,void*)) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,char*,int ,int ,int,TYPE_2__*,TYPE_4__**) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,char*,scalar_t__) ;
 int FUNC_8 (int ,int ,TYPE_3__*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_10 (int ,char**) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_13 (
    ACPI_PARSE_OBJECT *VAR_21,
    UINT32 VAR_22,
    void *VAR_23)
{
    ACPI_WALK_STATE *VAR_24 = (ACPI_WALK_STATE *) VAR_23;
    ACPI_STATUS VAR_25;
    ACPI_NAMESPACE_NODE *VAR_26;
    ACPI_OBJECT_TYPE VAR_27;
    BOOLEAN VAR_28 = VAR_15;
    ACPI_PARSE_OBJECT *VAR_29;
    char *VAR_30;
    ACPI_NAMESPACE_NODE *VAR_31;


    FUNC_3 (FUNC_13);
    FUNC_1 ((VAR_0, "Op %p [%s]\n",
        VAR_21, VAR_21->Asl.ParseOpName));




    VAR_26 = VAR_21->Asl.Node;
    if (!VAR_26)
    {
        return (VAR_11);
    }



    if ((VAR_21->Asl.ParseOpcode == VAR_18) &&
        (VAR_21->Asl.CompileFlags == VAR_16))
    {
        VAR_27 = VAR_9;
    }
    else
    {
        VAR_27 = FUNC_9 (VAR_21->Asl.AmlOpcode);
    }



    if (VAR_21->Asl.ParseOpcode == VAR_19)
    {
        if (VAR_21->Asl.CompileFlags & VAR_16)
        {
            VAR_28 = VAR_20;
        }
    }



    if (VAR_28 || FUNC_6 (VAR_27))
    {
        VAR_25 = FUNC_4 (VAR_26, VAR_27, VAR_24);
        if (FUNC_2 (VAR_25))
        {
            FUNC_11 (VAR_25);
        }
    }

    if (VAR_21->Asl.ParseOpcode == VAR_17)
    {




        VAR_29 = VAR_21->Asl.Child;



        VAR_30 = VAR_29->Asl.Namepath;
        if (!VAR_30)
        {
            VAR_25 = FUNC_10 (VAR_29->Asl.ExternalName, &VAR_30);
            if (FUNC_2 (VAR_25))
            {
                return (VAR_25);
            }
        }



        VAR_25 = FUNC_5 (VAR_24->ScopeInfo, VAR_30, VAR_8,
            VAR_1, VAR_6 | VAR_4,
            VAR_24, &VAR_31);
        if (FUNC_2 (VAR_25))
        {
            if (VAR_25 == VAR_10)
            {


                if (FUNC_12 (VAR_29->Asl.ExternalName) == VAR_3)
                {
                    FUNC_8 (VAR_12, VAR_14, VAR_21,
                        VAR_29->Asl.ExternalName);
                }
                else
                {
                    FUNC_8 (VAR_12, VAR_13, VAR_21,
                        VAR_29->Asl.ExternalName);
                }
                return (VAR_25);

            }

            FUNC_7 (VAR_21, VAR_25,
                "Failure from namespace lookup", VAR_15);
            return (VAR_11);
        }



        VAR_26->Object = FUNC_0 (VAR_7, VAR_31);
    }

    return (VAR_11);
}
