
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef int const uint8_t ;
typedef int uint32_t ;
typedef int crypto_generichash_blake2b_state ;
typedef scalar_t__ argon2_type ;
struct TYPE_3__ {int lanes; int outlen; int m_cost; int t_cost; int pwdlen; int flags; int saltlen; int secretlen; int adlen; int * ad; int * secret; int * salt; int * pwd; } ;
typedef TYPE_1__ argon2_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *,int *,unsigned int,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int) ;

void
FUNC_5(uint8_t *VAR_4, argon2_context *VAR_5, argon2_type VAR_6)
{
    crypto_generichash_blake2b_state VAR_7;
    uint8_t VAR_8[4U ];

    if (((void*)0) == VAR_5 || ((void*)0) == VAR_4) {
        return;
    }

    FUNC_2(&VAR_7, ((void*)0), 0U,
                                    VAR_2);

    FUNC_0(VAR_8, VAR_5->lanes);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_0(VAR_8, VAR_5->outlen);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_0(VAR_8, VAR_5->m_cost);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_0(VAR_8, VAR_5->t_cost);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_0(VAR_8, VAR_3);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_0(VAR_8, (uint32_t) VAR_6);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_0(VAR_8, VAR_5->pwdlen);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    if (VAR_5->pwd != ((void*)0)) {
        FUNC_3(
            &VAR_7, (const uint8_t *) VAR_5->pwd, VAR_5->pwdlen);


        if (VAR_5->flags & VAR_0) {
            FUNC_4(VAR_5->pwd, VAR_5->pwdlen);
            VAR_5->pwdlen = 0;
        }

    }

    FUNC_0(VAR_8, VAR_5->saltlen);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));

    if (VAR_5->salt != ((void*)0)) {
        FUNC_3(
            &VAR_7, (const uint8_t *) VAR_5->salt, VAR_5->saltlen);
    }

    FUNC_0(VAR_8, VAR_5->secretlen);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));


    if (VAR_5->secret != ((void*)0)) {
        FUNC_3(
            &VAR_7, (const uint8_t *) VAR_5->secret, VAR_5->secretlen);

        if (VAR_5->flags & VAR_1) {
            FUNC_4(VAR_5->secret, VAR_5->secretlen);
            VAR_5->secretlen = 0;
        }
    }


    FUNC_0(VAR_8, VAR_5->adlen);
    FUNC_3(&VAR_7, VAR_8, sizeof(VAR_8));


    if (VAR_5->ad != ((void*)0)) {
        FUNC_3(
            &VAR_7, (const uint8_t *) VAR_5->ad, VAR_5->adlen);
    }


    FUNC_1(&VAR_7, VAR_4,
                                     VAR_2);
}
