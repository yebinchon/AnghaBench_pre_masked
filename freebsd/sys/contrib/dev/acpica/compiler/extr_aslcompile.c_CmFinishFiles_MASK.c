
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {scalar_t__ Handle; } ;
typedef scalar_t__ BOOLEAN ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_2(
    BOOLEAN VAR_11)
{
    UINT32 VAR_12;
    if (VAR_5[VAR_2].Handle ==
        VAR_5[VAR_1].Handle)
    {
        VAR_5[VAR_2].Handle = ((void*)0);
    }



    for (VAR_12 = VAR_1; VAR_12 < VAR_4; VAR_12++)
    {




        if (VAR_5[VAR_12].Handle != VAR_9 &&
            VAR_5[VAR_12].Handle != VAR_10)
        {
            FUNC_0 (VAR_12);
        }
    }



    if (VAR_11)
    {
        FUNC_1 (VAR_0);
    }



    if (VAR_7 && !VAR_6)
    {
        FUNC_1 (VAR_2);
    }
    if (!VAR_8)
    {
        FUNC_1 (VAR_3);
    }
}
