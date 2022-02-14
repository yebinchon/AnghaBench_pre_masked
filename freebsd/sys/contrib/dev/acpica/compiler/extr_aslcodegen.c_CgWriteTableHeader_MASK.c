
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_20__ {scalar_t__ Checksum; scalar_t__ Length; int AslCompilerRevision; int AslCompilerId; scalar_t__ OemRevision; int OemTableId; int OemId; scalar_t__ Revision; int Signature; } ;
struct TYPE_19__ {struct TYPE_19__* Next; scalar_t__ Comment; } ;
struct TYPE_15__ {scalar_t__ Integer; scalar_t__ String; } ;
struct TYPE_17__ {int FinalAmlOffset; scalar_t__ AmlSubtreeLength; scalar_t__ CloseBraceComment; TYPE_5__* CommentList; scalar_t__ ParseOpName; TYPE_1__ Value; TYPE_4__* Next; TYPE_4__* Child; } ;
struct TYPE_18__ {TYPE_3__ Asl; } ;
struct TYPE_16__ {scalar_t__ Filename; } ;
struct TYPE_14__ {int Handle; } ;
struct TYPE_13__ {TYPE_2__ Asl; } ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_COMMENT_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_12__* VAR_6 ;
 TYPE_11__* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,char) ;

__attribute__((used)) static void
FUNC_8 (
    ACPI_PARSE_OBJECT *VAR_10)
{
    ACPI_PARSE_OBJECT *VAR_11;
    UINT32 VAR_12;
    ACPI_COMMENT_NODE *VAR_13;


    FUNC_5 (&VAR_9, 0, sizeof (ACPI_TABLE_HEADER));



    VAR_11 = VAR_10->Asl.Child;



    VAR_11 = VAR_11->Asl.Next;
    if (VAR_4)
    {
        FUNC_0 (VAR_5, VAR_11->Asl.Value.String);
        VAR_11->Asl.Value.String = VAR_1;
    }

    FUNC_0 (VAR_9.Signature, VAR_11->Asl.Value.String);



    VAR_11 = VAR_11->Asl.Next;
    VAR_9.Revision = (UINT8) VAR_11->Asl.Value.Integer;



    if (VAR_8)
    {
        VAR_9.Revision = VAR_8;
    }



    VAR_11 = VAR_11->Asl.Next;
    FUNC_4 (VAR_9.OemId, VAR_11->Asl.Value.String,
        FUNC_6 (VAR_11->Asl.Value.String));



    VAR_11 = VAR_11->Asl.Next;
    FUNC_4 (VAR_9.OemTableId, VAR_11->Asl.Value.String,
        FUNC_6 (VAR_11->Asl.Value.String));



    VAR_11 = VAR_11->Asl.Next;
    VAR_9.OemRevision = (UINT32) VAR_11->Asl.Value.Integer;



    FUNC_0 (VAR_9.AslCompilerId, VAR_2);



    VAR_9.AslCompilerRevision = VAR_0;



    VAR_9.Length = sizeof (ACPI_TABLE_HEADER) +
        VAR_10->Asl.AmlSubtreeLength;



    if (VAR_4)
    {
        FUNC_2 ("Calculating comment lengths for %s in write header\n",
            VAR_10->Asl.ParseOpName);





        VAR_9.Length += FUNC_7 (VAR_7->Asl.Filename, '.')
            - VAR_7->Asl.Filename + 1 + 3 + 3;

        VAR_10->Asl.AmlSubtreeLength +=
            FUNC_6 (VAR_7->Asl.Filename) + 3;

        FUNC_2 ("     Length: %u\n",
            (UINT32) FUNC_6 (VAR_7->Asl.Filename) + 3);

        if (VAR_10->Asl.CommentList)
        {
            VAR_13 = VAR_10->Asl.CommentList;
            while (VAR_13)
            {
                VAR_12 = FUNC_6 (VAR_13->Comment)+3;
                FUNC_2 ("Length of standard comment): %d\n", VAR_12);
                FUNC_2 ("    Comment string: %s\n\n", VAR_13->Comment);
                VAR_9.Length += VAR_12;
                VAR_10->Asl.AmlSubtreeLength += VAR_12;
                VAR_13 = VAR_13->Next;
                FUNC_2 ("    Length: %u\n", VAR_12);
            }
        }
        if (VAR_10->Asl.CloseBraceComment)
        {
            VAR_12 = FUNC_6 (VAR_10->Asl.CloseBraceComment)+3;
            FUNC_2 ("Length of inline comment +3: %d\n", VAR_12);
            FUNC_2 ("    Comment string: %s\n\n", VAR_10->Asl.CloseBraceComment);
            VAR_9.Length += VAR_12;
            VAR_10->Asl.AmlSubtreeLength += VAR_12;
            FUNC_2 ("    Length: %u\n", VAR_12);
        }
    }

    VAR_9.Checksum = 0;
    VAR_10->Asl.FinalAmlOffset = FUNC_3 (VAR_6[VAR_3].Handle);



    FUNC_1 (VAR_10, &VAR_9, sizeof (ACPI_TABLE_HEADER));
    FUNC_5 (&VAR_9, 0, sizeof (ACPI_TABLE_HEADER));
}
