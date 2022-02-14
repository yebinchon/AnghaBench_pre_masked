
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Next; } ;
typedef TYPE_1__ ASL_LISTING_NODE ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,char*) ;
 TYPE_1__* VAR_2 ;

ASL_LISTING_NODE *
FUNC_2 (
    void)
{
    ASL_LISTING_NODE *VAR_3;




    VAR_3 = VAR_2;
    if ((!VAR_3) ||
        (!VAR_3->Next))
    {
        FUNC_1 (VAR_0, VAR_1, ((void*)0),
            "Could not pop empty listing stack");
        return (VAR_2);
    }

    VAR_2 = VAR_3->Next;
    FUNC_0 (VAR_3);



    return (VAR_2);
}
