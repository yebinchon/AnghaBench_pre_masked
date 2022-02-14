
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int c; } ;
struct TYPE_5__ {int* c; } ;
struct TYPE_7__ {TYPE_2__ cmac; TYPE_1__ nonce; } ;
typedef TYPE_3__ CCM128_CONTEXT ;


 int FUNC_0 (unsigned char*,int ,unsigned int) ;

size_t FUNC_1(CCM128_CONTEXT *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    unsigned int VAR_3 = (VAR_0->nonce.c[0] >> 3) & 7;

    VAR_3 *= 2;
    VAR_3 += 2;
    if (VAR_2 != VAR_3)
        return 0;
    FUNC_0(VAR_1, VAR_0->cmac.c, VAR_3);
    return VAR_3;
}
