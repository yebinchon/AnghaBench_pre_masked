
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int octx; int ictx; } ;
typedef TYPE_1__ crypto_auth_hmacsha512_state ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (void*,int) ;

int
FUNC_3(crypto_auth_hmacsha512_state *VAR_0,
                             unsigned char *VAR_1)
{
    unsigned char VAR_2[64];

    FUNC_0(&VAR_0->ictx, VAR_2);
    FUNC_1(&VAR_0->octx, VAR_2, 64);
    FUNC_0(&VAR_0->octx, VAR_1);

    FUNC_2((void *) VAR_2, sizeof VAR_2);

    return 0;
}
