
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int k; int nonce; } ;
typedef TYPE_1__ crypto_secretstream_xchacha20poly1305_state ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,scalar_t__) ;
 unsigned char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,int) ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (unsigned char*,int,int ,int ) ;
 int FUNC_10 (unsigned char*,unsigned char const*,unsigned long long,int ,unsigned int,int ) ;
 int FUNC_11 (unsigned char*,int ,int) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (unsigned char*,int) ;
 int FUNC_15 () ;

int
FUNC_16
   (crypto_secretstream_xchacha20poly1305_state *VAR_7,
    unsigned char *VAR_8, unsigned long long *VAR_9,
    const unsigned char *VAR_10, unsigned long long VAR_11,
    const unsigned char *VAR_12, unsigned long long VAR_13, unsigned char VAR_14)
{
    crypto_onetimeauth_poly1305_state VAR_15;
    unsigned char VAR_16[64U];
    unsigned char VAR_17[8U];
    unsigned char *VAR_18;
    unsigned char *VAR_19;

    if (VAR_9 != ((void*)0)) {
        *VAR_9 = 0U;
    }
    if (VAR_11 > VAR_5) {
        FUNC_15();
    }
    FUNC_9(VAR_16, sizeof VAR_16, VAR_7->nonce, VAR_7->k);
    FUNC_6(&VAR_15, VAR_16);
    FUNC_14(VAR_16, sizeof VAR_16);

    FUNC_7(&VAR_15, VAR_12, VAR_13);
    FUNC_7(&VAR_15, VAR_0,
                                       (0x10 - VAR_13) & 0xf);
    FUNC_11(VAR_16, 0, sizeof VAR_16);
    VAR_16[0] = VAR_14;

    FUNC_10(VAR_16, VAR_16, sizeof VAR_16,
                                       VAR_7->nonce, 1U, VAR_7->k);
    FUNC_7(&VAR_15, VAR_16, sizeof VAR_16);
    VAR_8[0] = VAR_16[0];

    VAR_18 = VAR_8 + (sizeof VAR_14);
    FUNC_10(VAR_18, VAR_10, VAR_11, VAR_7->nonce, 2U, VAR_7->k);
    FUNC_7(&VAR_15, VAR_18, VAR_11);
    FUNC_7
        (&VAR_15, VAR_0, (0x10 - (sizeof VAR_16) + VAR_11) & 0xf);

    FUNC_3(VAR_17, (uint64_t) VAR_13);
    FUNC_7(&VAR_15, VAR_17, sizeof VAR_17);
    FUNC_3(VAR_17, (sizeof VAR_16) + VAR_11);
    FUNC_7(&VAR_15, VAR_17, sizeof VAR_17);

    VAR_19 = VAR_18 + VAR_11;
    FUNC_5(&VAR_15, VAR_19);
    FUNC_14(&VAR_15, sizeof VAR_15);

    FUNC_0(VAR_1 >=
                    VAR_4);
    FUNC_4(FUNC_2(VAR_7), VAR_19,
            VAR_4);
    FUNC_12(FUNC_1(VAR_7),
                     VAR_3);
    if ((VAR_14 & VAR_6) != 0 ||
        FUNC_13(FUNC_1(VAR_7),
                       VAR_3)) {
        FUNC_8(VAR_7);
    }
    if (VAR_9 != ((void*)0)) {
        *VAR_9 = VAR_2 + VAR_11;
    }
    return 0;
}
