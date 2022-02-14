
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char UINT8 ;
typedef int UINT32 ;
struct TYPE_3__ {int TableOffset; int Value; int Name; scalar_t__ Column; int ByteOffset; } ;
typedef TYPE_1__ DT_FIELD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6 (
    UINT8 *VAR_4,
    DT_FIELD *VAR_5,
    UINT32 VAR_6)
{
    UINT8 VAR_7;


    if (!VAR_3 || !VAR_5)
    {
        return;
    }



    FUNC_1 (VAR_2, "Input:  ");
    FUNC_3 (VAR_1, VAR_5->ByteOffset);

    while (FUNC_2 (VAR_1, &VAR_7, 1) == VAR_0)
    {
        FUNC_4 (VAR_2, &VAR_7, 1);
        if (VAR_7 == '\n')
        {
            break;
        }
    }



    FUNC_1 (VAR_2, "Parsed: %*s : %.64s",
        VAR_5->Column-4, VAR_5->Name, VAR_5->Value);

    if (FUNC_5 (VAR_5->Value) > 64)
    {
        FUNC_1 (VAR_2, "...Additional data, length 0x%X\n",
            (UINT32) FUNC_5 (VAR_5->Value));
    }

    FUNC_1 (VAR_2, "\n");



    FUNC_0 (VAR_2, VAR_4, VAR_5->TableOffset, VAR_6);
}
