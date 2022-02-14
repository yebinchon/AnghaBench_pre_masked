
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {scalar_t__ LogicalLineNumber; struct TYPE_3__* Next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_1__*,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (scalar_t__,char*) ;

void
FUNC_2 (
    UINT32 VAR_2,
    UINT32 VAR_3)
{

    if ((!VAR_1) ||
        (VAR_2 < VAR_1->LogicalLineNumber ))
    {
        return;
    }



    if (VAR_3 == VAR_0)
    {
        while (VAR_1 &&
              (VAR_2 >= VAR_1->LogicalLineNumber))
        {
            FUNC_0 (VAR_3, VAR_1, "\n[****iasl****]\n");
            VAR_1 = VAR_1->Next;
        }

        FUNC_1 (VAR_3, "\n");
    }
}
