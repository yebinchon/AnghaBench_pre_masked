
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {struct TYPE_5__* Next; TYPE_1__* Files; } ;
struct TYPE_4__ {int Filename; } ;
typedef TYPE_2__ ASL_GLOBAL_FILE_NODE ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3 (
    UINT32 VAR_3)
{
    ASL_GLOBAL_FILE_NODE *VAR_4 = VAR_1;


    while (VAR_4)
    {
        switch (FUNC_0(VAR_4->Files[VAR_0].Filename))
        {
            case 128:
            case 129:

                FUNC_2 (VAR_3, VAR_2);
                VAR_4 = VAR_4->Next;
                break;

            case 130:
            default:

                VAR_4 = ((void*)0);
                break;
        }
    }
    FUNC_1 (VAR_3);
}
