
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t block_padding; } ;
typedef TYPE_1__ SSL ;


 size_t VAR_0 ;

int FUNC_0(SSL *VAR_1, size_t VAR_2)
{

    if (VAR_2 == 1)
        VAR_1->block_padding = 0;
    else if (VAR_2 <= VAR_0)
        VAR_1->block_padding = VAR_2;
    else
        return 0;
    return 1;
}
