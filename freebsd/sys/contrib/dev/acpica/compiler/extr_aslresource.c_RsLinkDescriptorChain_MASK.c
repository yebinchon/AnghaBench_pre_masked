
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {scalar_t__ BufferLength; struct TYPE_4__* Next; } ;
typedef TYPE_1__ ASL_RESOURCE_NODE ;



UINT32
FUNC_0 (
    ASL_RESOURCE_NODE **VAR_0,
    ASL_RESOURCE_NODE *VAR_1)
{
    ASL_RESOURCE_NODE *VAR_2;
    UINT32 VAR_3;




    if (!VAR_1)
    {
        return (0);
    }



    (*VAR_0)->Next = VAR_1;
    VAR_3 = VAR_1->BufferLength;



    VAR_2 = VAR_1;
    while (VAR_2->Next)
    {
        VAR_2 = VAR_2->Next;
        VAR_3 += VAR_2->BufferLength;
    }



    *VAR_0 = VAR_2;
    return (VAR_3);
}
