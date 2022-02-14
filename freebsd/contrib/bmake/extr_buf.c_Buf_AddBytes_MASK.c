
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int size; scalar_t__* buffer; } ;
typedef scalar_t__ Byte ;
typedef TYPE_1__ Buffer ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__* FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;

void
FUNC_4(Buffer *VAR_0, int VAR_1, const Byte *VAR_2)
{
    int VAR_3 = VAR_0->count;
    Byte *VAR_4;

    if (FUNC_0(VAR_3 + VAR_1 >= VAR_0->size)) {
 VAR_0->size += FUNC_2(VAR_0->size, VAR_1 + 16);
 VAR_0->buffer = FUNC_1(VAR_0->buffer, VAR_0->size);
    }

    VAR_4 = VAR_0->buffer + VAR_3;
    VAR_0->count = VAR_3 + VAR_1;
    VAR_4[VAR_1] = 0;
    FUNC_3(VAR_4, VAR_2, VAR_1);
}
