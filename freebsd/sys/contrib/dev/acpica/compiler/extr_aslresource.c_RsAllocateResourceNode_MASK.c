
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int BufferLength; void* Buffer; } ;
typedef TYPE_1__ ASL_RESOURCE_NODE ;


 void* FUNC_0 (int) ;

ASL_RESOURCE_NODE *
FUNC_1 (
    UINT32 VAR_0)
{
    ASL_RESOURCE_NODE *VAR_1;




    VAR_1 = FUNC_0 (sizeof (ASL_RESOURCE_NODE));



    VAR_1->Buffer = FUNC_0 (VAR_0);
    VAR_1->BufferLength = VAR_0;
    return (VAR_1);
}
