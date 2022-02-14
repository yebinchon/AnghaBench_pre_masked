
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {int Filename; } ;
struct TYPE_4__ {int Column; int ByteOffset; int Line; } ;
typedef TYPE_1__ DT_FIELD ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,char*) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

void
FUNC_2 (
    UINT8 VAR_2,
    UINT16 VAR_3,
    DT_FIELD *VAR_4,
    char *VAR_5)
{



    if (FUNC_1 (VAR_2, VAR_3))
    {
        return;
    }

    if (VAR_4)
    {
        FUNC_0 (VAR_2, VAR_3,
            VAR_4->Line,
            VAR_4->Line,
            VAR_4->ByteOffset,
            VAR_4->Column,
            VAR_1[VAR_0].Filename, VAR_5);
    }
    else
    {
        FUNC_0 (VAR_2, VAR_3, 0,
            0, 0, 0, 0, VAR_5);
    }
}
