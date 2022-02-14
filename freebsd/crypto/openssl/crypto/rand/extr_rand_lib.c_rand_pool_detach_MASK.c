
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buffer; scalar_t__ entropy; } ;
typedef TYPE_1__ RAND_POOL ;



unsigned char *FUNC_0(RAND_POOL *VAR_0)
{
    unsigned char *VAR_1 = VAR_0->buffer;
    VAR_0->buffer = ((void*)0);
    VAR_0->entropy = 0;
    return VAR_1;
}
