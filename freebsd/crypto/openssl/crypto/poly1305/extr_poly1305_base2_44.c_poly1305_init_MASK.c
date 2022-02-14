
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int* r; int* s; scalar_t__* h; } ;
typedef TYPE_1__ poly1305_internal ;


 int FUNC_0 (unsigned char const*) ;

int FUNC_1(void *VAR_0, const unsigned char VAR_1[16])
{
    poly1305_internal *VAR_2 = (poly1305_internal *)VAR_0;
    u64 VAR_3, VAR_4;


    VAR_2->h[0] = 0;
    VAR_2->h[1] = 0;
    VAR_2->h[2] = 0;

    VAR_3 = FUNC_0(&VAR_1[0]) & 0x0ffffffc0fffffff;
    VAR_4 = FUNC_0(&VAR_1[8]) & 0x0ffffffc0ffffffc;


    VAR_2->r[0] = VAR_3 & 0x0fffffffffff;
    VAR_2->r[1] = ((VAR_3 >> 44) | (VAR_4 << 20)) & 0x0fffffffffff;
    VAR_2->r[2] = (VAR_4 >> 24);

    VAR_2->s[0] = (VAR_2->r[1] + (VAR_2->r[1] << 2)) << 2;
    VAR_2->s[1] = (VAR_2->r[2] + (VAR_2->r[2] << 2)) << 2;

    return 0;
}
