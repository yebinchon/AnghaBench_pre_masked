
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_21__ {scalar_t__ Length; int * Data; int Aml; } ;
struct TYPE_19__ {TYPE_5__* Arg; } ;
struct TYPE_20__ {scalar_t__ AmlOpcode; int * EndBlkComment; int * CommentList; int * NameComment; int * CloseBraceComment; int * EndNodeComment; int * InlineComment; int Aml; int CvParentFilename; int CvFilename; TYPE_1__ Value; scalar_t__ ArgListLength; } ;
struct TYPE_23__ {TYPE_3__ Named; TYPE_2__ Common; } ;
struct TYPE_22__ {scalar_t__ Opcode; scalar_t__ (* DescendingCallback ) (TYPE_4__*,TYPE_5__**) ;int * Op; int ArgTypes; int ParserState; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_4__*) ;
 int * VAR_10 ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,scalar_t__,TYPE_5__**) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_5__**) ;

ACPI_STATUS
FUNC_11 (
    ACPI_WALK_STATE *VAR_12,
    UINT8 *VAR_13,
    ACPI_PARSE_OBJECT *VAR_14,
    ACPI_PARSE_OBJECT **VAR_15)
{
    ACPI_STATUS VAR_16 = VAR_6;
    ACPI_PARSE_OBJECT *VAR_17 = ((void*)0);


    FUNC_2 (VAR_11, VAR_12);


    VAR_14->Common.Value.Arg = ((void*)0);
    VAR_14->Common.ArgListLength = 0;
    VAR_14->Common.AmlOpcode = VAR_12->Opcode;





    while (FUNC_7 (VAR_12->ArgTypes) &&
          (FUNC_7 (VAR_12->ArgTypes) != VAR_9))
    {
        FUNC_3 (VAR_12);
        VAR_16 = FUNC_5 (VAR_12, &(VAR_12->ParserState),
            FUNC_7 (VAR_12->ArgTypes), &VAR_17);
        if (FUNC_1 (VAR_16))
        {
            FUNC_9 (VAR_16);
        }

        FUNC_4 (VAR_14, VAR_17);
        FUNC_8 (VAR_12->ArgTypes);
    }



    FUNC_3 (VAR_12);
    if (!FUNC_7 (VAR_12->ArgTypes))
    {
        FUNC_9 (VAR_0);
    }



    FUNC_8 (VAR_12->ArgTypes);





    VAR_12->Op = ((void*)0);

    VAR_16 = VAR_12->DescendingCallback (VAR_12, VAR_15);
    if (FUNC_1 (VAR_16))
    {
        if (VAR_16 != VAR_4)
        {
            FUNC_0 ((VAR_5, VAR_16, "During name lookup/catalog"));
        }
        FUNC_9 (VAR_16);
    }

    if (!*VAR_15)
    {
        FUNC_9 (VAR_1);
    }

    VAR_16 = FUNC_6 (VAR_12, *VAR_15, VAR_16);
    if (FUNC_1 (VAR_16))
    {
        if (VAR_16 == VAR_3)
        {
            VAR_16 = VAR_2;
        }
        FUNC_9 (VAR_16);
    }

    FUNC_4 (*VAR_15, VAR_14->Common.Value.Arg);
    if ((*VAR_15)->Common.AmlOpcode == VAR_8 ||
        (*VAR_15)->Common.AmlOpcode == VAR_7)
    {
        (*VAR_15)->Named.Data = VAR_13;
        (*VAR_15)->Named.Length = 0;
    }

    FUNC_9 (VAR_6);
}
