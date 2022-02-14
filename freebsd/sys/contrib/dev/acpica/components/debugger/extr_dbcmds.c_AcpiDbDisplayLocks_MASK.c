
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {scalar_t__ ThreadId; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (size_t) ;

void
FUNC_2 (
    void)
{
    UINT32 VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        FUNC_0 ("%26s : %s\n", FUNC_1 (VAR_3),
            VAR_2[VAR_3].ThreadId == VAR_1
                ? "Locked" : "Unlocked");
    }
}
