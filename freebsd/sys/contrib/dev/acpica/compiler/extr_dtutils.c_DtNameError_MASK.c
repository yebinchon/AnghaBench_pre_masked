
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {int Filename; } ;
struct TYPE_4__ {int NameColumn; int ByteOffset; int Line; } ;
typedef TYPE_1__ DT_FIELD ;


 size_t VAR_0 ;


 int FUNC_0 (int,int ,int ,int ,int ,int ,int ,char*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;

void
FUNC_1 (
    UINT8 VAR_3,
    UINT16 VAR_4,
    DT_FIELD *VAR_5,
    char *VAR_6)
{

    switch (VAR_3)
    {
    case 129:
    case 128:

        if (VAR_2 < VAR_3)
        {
            return;
        }
        break;

    default:

        break;
    }

    if (VAR_5)
    {
        FUNC_0 (VAR_3, VAR_4,
            VAR_5->Line,
            VAR_5->Line,
            VAR_5->ByteOffset,
            VAR_5->NameColumn,
            VAR_1[VAR_0].Filename, VAR_6);
    }
    else
    {
        FUNC_0 (VAR_3, VAR_4, 0,
            0, 0, 0, 0, VAR_6);
    }
}
