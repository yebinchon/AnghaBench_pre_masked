
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int buffer; } ;
typedef TYPE_1__ Buffer ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

void
FUNC_2(Buffer *VAR_0)
{
    VAR_0->size += FUNC_1(VAR_0->size, 16);
    VAR_0->buffer = FUNC_0(VAR_0->buffer, VAR_0->size);
}
