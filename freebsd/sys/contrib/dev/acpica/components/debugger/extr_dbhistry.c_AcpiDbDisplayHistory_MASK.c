
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
typedef size_t UINT16 ;
struct TYPE_2__ {scalar_t__ Command; int CmdNum; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 size_t VAR_3 ;

void
FUNC_1 (
    void)
{
    UINT32 VAR_4;
    UINT16 VAR_5;


    VAR_5 = VAR_1;



    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
        if (VAR_0[VAR_5].Command)
        {
            FUNC_0 ("%3u  %s\n",
                VAR_0[VAR_5].CmdNum,
                VAR_0[VAR_5].Command);
        }

        VAR_5++;
        if (VAR_5 >= VAR_3)
        {
            VAR_5 = 0;
        }
    }
}
