
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int Order; int HorizontalOffset; int VerticalOffset; int Rotation; int Reference; int CardCageNumber; int CabinetNumber; int OspmEjectRequired; int Ejectable; int Bay; int GroupPosition; int GroupToken; int GroupOrientation; int Shape; int HorizontalPosition; int VerticalPosition; int Panel; int Lid; int Dock; int UserVisible; int Height; int Width; int Blue; int Green; int Red; int IgnoreColor; int Revision; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PLD_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__,TYPE_1__**) ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5 (
    UINT32 VAR_11,
    UINT8 *VAR_12,
    UINT32 VAR_13)
{
    ACPI_PLD_INFO *VAR_14;
    ACPI_STATUS VAR_15;




    if (VAR_13 < VAR_5)
    {
        return;
    }



    VAR_15 = FUNC_2 (VAR_12, VAR_13, &VAR_14);
    if (FUNC_0 (VAR_15))
    {
        return;
    }

    FUNC_4 ("\n");



    FUNC_4 (VAR_0, "PLD_Revision", VAR_14->Revision);
    FUNC_4 (VAR_0, "PLD_IgnoreColor", VAR_14->IgnoreColor);
    FUNC_4 (VAR_0, "PLD_Red", VAR_14->Red);
    FUNC_4 (VAR_0, "PLD_Green", VAR_14->Green);
    FUNC_4 (VAR_0, "PLD_Blue", VAR_14->Blue);



    FUNC_4 (VAR_2, "PLD_Width", VAR_14->Width);
    FUNC_4 (VAR_2, "PLD_Height", VAR_14->Height);



    FUNC_4 (VAR_0, "PLD_UserVisible", VAR_14->UserVisible);
    FUNC_4 (VAR_0, "PLD_Dock", VAR_14->Dock);
    FUNC_4 (VAR_0, "PLD_Lid", VAR_14->Lid);
    FUNC_4 (VAR_4, "PLD_Panel",
        FUNC_3(VAR_14->Panel, VAR_8));

    FUNC_4 (VAR_4, "PLD_VerticalPosition",
        FUNC_3(VAR_14->VerticalPosition, VAR_10));

    FUNC_4 (VAR_4, "PLD_HorizontalPosition",
        FUNC_3(VAR_14->HorizontalPosition, VAR_7));

    FUNC_4 (VAR_4, "PLD_Shape",
        FUNC_3(VAR_14->Shape, VAR_9));
    FUNC_4 (VAR_0, "PLD_GroupOrientation", VAR_14->GroupOrientation);

    FUNC_4 (VAR_0, "PLD_GroupToken", VAR_14->GroupToken);
    FUNC_4 (VAR_0, "PLD_GroupPosition", VAR_14->GroupPosition);
    FUNC_4 (VAR_0, "PLD_Bay", VAR_14->Bay);



    FUNC_4 (VAR_0, "PLD_Ejectable", VAR_14->Ejectable);
    FUNC_4 (VAR_0, "PLD_EjectRequired", VAR_14->OspmEjectRequired);
    FUNC_4 (VAR_0, "PLD_CabinetNumber", VAR_14->CabinetNumber);
    FUNC_4 (VAR_0, "PLD_CardCageNumber", VAR_14->CardCageNumber);
    FUNC_4 (VAR_0, "PLD_Reference", VAR_14->Reference);
    FUNC_4 (VAR_0, "PLD_Rotation", VAR_14->Rotation);

    if (VAR_13 >= VAR_6)
    {
        FUNC_4 (VAR_0, "PLD_Order", VAR_14->Order);



        FUNC_4 (VAR_2, "PLD_VerticalOffset", VAR_14->VerticalOffset);
        FUNC_4 (VAR_3, "PLD_HorizontalOffset", VAR_14->HorizontalOffset);
    }
    else
    {
        FUNC_4 (VAR_1, "PLD_Order", VAR_14->Order);
    }

    FUNC_1 (VAR_14);
}
