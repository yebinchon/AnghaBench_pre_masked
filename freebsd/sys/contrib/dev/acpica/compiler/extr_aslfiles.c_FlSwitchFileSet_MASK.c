
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* Filename; } ;
struct TYPE_4__ {struct TYPE_4__* Next; int TableId; int TableSignature; TYPE_3__* Files; } ;
typedef TYPE_1__ ASL_GLOBAL_FILE_NODE ;
typedef int ASL_FILE_SWITCH_STATUS ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*) ;

ASL_FILE_SWITCH_STATUS
FUNC_1 (
    char *VAR_8)
{
    ASL_GLOBAL_FILE_NODE *VAR_9 = VAR_2;
    char *VAR_10 = VAR_9->Files[VAR_0].Filename;


    while (VAR_9)
    {
        if (!FUNC_0(VAR_9->Files[VAR_0].Filename, VAR_8))
        {
            VAR_1 = VAR_9->Files;
            VAR_4 = VAR_9->TableSignature;
            VAR_3 = VAR_9->TableId;

            if (!FUNC_0 (VAR_8, VAR_10))
            {
                return (VAR_7);
            }
            else
            {
                return (VAR_6);
            }
        }

        VAR_9 = VAR_9->Next;
    }

    return (VAR_5);
}
