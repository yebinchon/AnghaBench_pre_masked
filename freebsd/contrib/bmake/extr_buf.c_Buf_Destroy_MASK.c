
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buffer; scalar_t__ count; scalar_t__ size; } ;
typedef int Byte ;
typedef TYPE_1__ Buffer ;
typedef scalar_t__ Boolean ;


 int FUNC_0 (int *) ;

Byte *
FUNC_1(Buffer *VAR_0, Boolean VAR_1)
{
    Byte *VAR_2;

    VAR_2 = VAR_0->buffer;
    if (VAR_1) {
 FUNC_0(VAR_2);
 VAR_2 = ((void*)0);
    }

    VAR_0->size = 0;
    VAR_0->count = 0;
    VAR_0->buffer = ((void*)0);

    return VAR_2;
}
