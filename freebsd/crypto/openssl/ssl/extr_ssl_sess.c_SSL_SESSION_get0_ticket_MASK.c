
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ticklen; unsigned char* tick; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL_SESSION ;



void FUNC_0(const SSL_SESSION *VAR_0, const unsigned char **VAR_1,
                             size_t *VAR_2)
{
    *VAR_2 = VAR_0->ext.ticklen;
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->ext.tick;
}
