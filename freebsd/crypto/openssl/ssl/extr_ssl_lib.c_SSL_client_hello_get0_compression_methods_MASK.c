
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* clienthello; } ;
struct TYPE_4__ {unsigned char* compressions; size_t compressions_len; } ;
typedef TYPE_2__ SSL ;



size_t FUNC_0(SSL *VAR_0, const unsigned char **VAR_1)
{
    if (VAR_0->clienthello == ((void*)0))
        return 0;
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->clienthello->compressions;
    return VAR_0->clienthello->compressions_len;
}
