
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buffer; scalar_t__ len; } ;
typedef TYPE_1__ RAND_POOL ;


 int FUNC_0 (unsigned char*,scalar_t__) ;

void FUNC_1(RAND_POOL *VAR_0, unsigned char *VAR_1)
{
    VAR_0->buffer = VAR_1;
    FUNC_0(VAR_0->buffer, VAR_0->len);
    VAR_0->len = 0;
}
