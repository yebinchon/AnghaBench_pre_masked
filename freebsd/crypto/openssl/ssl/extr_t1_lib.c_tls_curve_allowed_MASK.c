
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; int nid; int secbits; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ,void*) ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2(SSL *VAR_1, uint16_t VAR_2, int VAR_3)
{
    const TLS_GROUP_INFO *VAR_4 = FUNC_1(VAR_2);
    unsigned char VAR_5[2];

    if (VAR_4 == ((void*)0))
        return 0;




    VAR_5[0] = VAR_2 >> 8;
    VAR_5[1] = VAR_2 & 0xff;
    return FUNC_0(VAR_1, VAR_3, VAR_4->secbits, VAR_4->nid, (void *)VAR_5);
}
