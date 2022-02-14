
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct TYPE_3__ {unsigned long* poptions; unsigned long* pcert_flags; unsigned long* pvfy_flags; } ;
typedef TYPE_1__ SSL_CONF_CTX ;



 unsigned int VAR_0 ;

 unsigned int VAR_1 ;


__attribute__((used)) static void FUNC_0(SSL_CONF_CTX *VAR_2, unsigned int VAR_3,
                           unsigned long VAR_4, int VAR_5)
{
    uint32_t *VAR_6;
    if (VAR_2->poptions == ((void*)0))
        return;
    if (VAR_3 & VAR_0)
        VAR_5 ^= 1;
    switch (VAR_3 & VAR_1) {

    case 130:
        VAR_6 = VAR_2->pcert_flags;
        break;

    case 128:
        VAR_6 = VAR_2->pvfy_flags;
        break;

    case 129:
        VAR_6 = VAR_2->poptions;
        break;

    default:
        return;

    }
    if (VAR_5)
        *VAR_6 |= VAR_4;
    else
        *VAR_6 &= ~VAR_4;
}
