
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hs; } ;
typedef TYPE_1__ crypto_sign_ed25519ph_state ;


 int FUNC_0 (unsigned char*,unsigned char*,int,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*) ;

int
FUNC_2(crypto_sign_ed25519ph_state *VAR_1,
                                   unsigned char *VAR_2,
                                   const unsigned char *VAR_3)
{
    unsigned char VAR_4[VAR_0];

    FUNC_1(&VAR_1->hs, VAR_4);

    return FUNC_0(VAR_2, VAR_4, sizeof VAR_4, VAR_3, 1);
}
