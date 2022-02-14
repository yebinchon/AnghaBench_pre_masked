
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * buffer; } ;
typedef int Byte ;
typedef TYPE_1__ Buffer ;



Byte *
FUNC_0(Buffer *VAR_0, int *VAR_1)
{

    if (VAR_1 != ((void*)0))
 *VAR_1 = VAR_0->count;

    return (VAR_0->buffer);
}
