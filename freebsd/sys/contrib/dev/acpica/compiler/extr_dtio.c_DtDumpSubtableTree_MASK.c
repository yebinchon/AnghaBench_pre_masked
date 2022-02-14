
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Depth; int TotalLength; int Length; int Name; } ;
typedef TYPE_1__ DT_SUBTABLE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int,char*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (
    DT_SUBTABLE *VAR_1,
    void *VAR_2,
    void *VAR_3)
{

    FUNC_0 (VAR_0,
        "[%.04X] %24s %*s%p (%.02X) - (%.02X)\n",
        VAR_1->Depth, VAR_1->Name, (4 * VAR_1->Depth), " ",
        VAR_1, VAR_1->Length, VAR_1->TotalLength);
}
