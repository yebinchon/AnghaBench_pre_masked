
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* Next; int Value; int Name; int Flags; int TableOffset; int Column; int NameColumn; int ByteOffset; int Line; } ;
typedef TYPE_1__ DT_FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;

void
FUNC_1 (
    DT_FIELD *VAR_2)
{

    if (!VAR_1 || !VAR_2)
    {
        return;
    }

    FUNC_0 (VAR_0, "\nField List:\n"
        "LineNo   ByteOff  NameCol  Column   TableOff "
        "Flags %32s : %s\n\n", "Name", "Value");

    while (VAR_2)
    {
        FUNC_0 (VAR_0,
            "%.08X %.08X %.08X %.08X %.08X %2.2X    %32s : %s\n",
            VAR_2->Line, VAR_2->ByteOffset, VAR_2->NameColumn,
            VAR_2->Column, VAR_2->TableOffset, VAR_2->Flags,
            VAR_2->Name, VAR_2->Value);

        VAR_2 = VAR_2->Next;
    }

    FUNC_0 (VAR_0, "\n\n");
}
