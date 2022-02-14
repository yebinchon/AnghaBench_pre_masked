
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_2__ {int MessageIdStr; int MessageReceived; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

void
FUNC_1 (
    void)
{
    UINT8 VAR_4;


    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    {
        if (!VAR_2[VAR_4].MessageReceived)
        {
            FUNC_0 (VAR_0, VAR_1, ((void*)0),
                VAR_2[VAR_4].MessageIdStr);
        }
    }
}
