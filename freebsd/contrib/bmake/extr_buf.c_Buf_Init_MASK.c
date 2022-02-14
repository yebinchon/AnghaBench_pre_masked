
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__* buffer; scalar_t__ count; } ;
typedef TYPE_1__ Buffer ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int) ;

void
FUNC_1(Buffer *VAR_1, int VAR_2)
{
    if (VAR_2 <= 0) {
 VAR_2 = VAR_0;
    }
    VAR_1->size = VAR_2;
    VAR_1->count = 0;
    VAR_1->buffer = FUNC_0(VAR_2);
    *VAR_1->buffer = 0;
}
