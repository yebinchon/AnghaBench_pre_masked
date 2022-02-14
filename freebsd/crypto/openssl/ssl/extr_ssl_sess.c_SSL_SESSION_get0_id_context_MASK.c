
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* sid_ctx; scalar_t__ sid_ctx_length; } ;
typedef TYPE_1__ SSL_SESSION ;



const unsigned char *FUNC_0(const SSL_SESSION *VAR_0,
                                                unsigned int *VAR_1)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = (unsigned int)VAR_0->sid_ctx_length;
    return VAR_0->sid_ctx;
}
