
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* NextLabel; int TableOffset; int Value; } ;
typedef TYPE_1__ DT_FIELD ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (
    DT_FIELD *VAR_2)
{

    FUNC_0 (VAR_0,
        "DtInsertLabelField: Found Label : %s at output table offset %X\n",
        VAR_2->Value, VAR_2->TableOffset);

    VAR_2->NextLabel = VAR_1;
    VAR_1 = VAR_2;
}
