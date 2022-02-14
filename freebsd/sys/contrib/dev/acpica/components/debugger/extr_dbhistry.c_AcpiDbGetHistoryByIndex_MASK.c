
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
typedef size_t UINT16 ;
struct TYPE_2__ {scalar_t__ CmdNum; char* Command; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,size_t) ;
 size_t VAR_3 ;

char *
FUNC_1 (
    UINT32 VAR_4)
{
    UINT32 VAR_5;
    UINT16 VAR_6;




    VAR_6 = VAR_1;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        if (VAR_0[VAR_6].CmdNum == VAR_4)
        {


            return (VAR_0[VAR_6].Command);
        }



        VAR_6++;
        if (VAR_6 >= VAR_3)
        {
            VAR_6 = 0;
        }
    }

    FUNC_0 ("Invalid history number: %u\n", VAR_6);
    return (((void*)0));
}
