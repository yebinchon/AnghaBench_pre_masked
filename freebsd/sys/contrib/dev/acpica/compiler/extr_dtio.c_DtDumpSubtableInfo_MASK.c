
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Peer; int Child; int Parent; int Flags; int SizeOfLengthField; int TotalLength; int Length; int Name; int Depth; } ;
typedef TYPE_1__ DT_SUBTABLE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (
    DT_SUBTABLE *VAR_1,
    void *VAR_2,
    void *VAR_3)
{

    FUNC_0 (VAR_0,
        "[%.04X] %24s %.08X %.08X %.08X %.08X %p %p %p %p\n",
        VAR_1->Depth, VAR_1->Name, VAR_1->Length, VAR_1->TotalLength,
        VAR_1->SizeOfLengthField, VAR_1->Flags, VAR_1,
        VAR_1->Parent, VAR_1->Child, VAR_1->Peer);
}
