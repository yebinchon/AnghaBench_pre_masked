
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {int * Handle; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3 (
    UINT32 VAR_2)
{
    int VAR_3;


    if (!VAR_1[VAR_2].Handle)
    {
        return;
    }

    VAR_3 = FUNC_2 (VAR_1[VAR_2].Handle);
    if (VAR_3)
    {
        FUNC_1 (VAR_2, VAR_0);
        FUNC_0 ();
    }



    VAR_1[VAR_2].Handle = ((void*)0);
    return;
}
