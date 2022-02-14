
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* clienthello; } ;
struct TYPE_4__ {unsigned char* random; } ;
typedef TYPE_2__ SSL ;


 size_t VAR_0 ;

size_t FUNC_0(SSL *VAR_1, const unsigned char **VAR_2)
{
    if (VAR_1->clienthello == ((void*)0))
        return 0;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_1->clienthello->random;
    return VAR_0;
}
