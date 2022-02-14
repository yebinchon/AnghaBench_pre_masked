
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* count; int state; } ;
typedef TYPE_1__ crypto_hash_sha512_state ;


 int FUNC_0 (int ,int const*,int) ;

int
FUNC_1(crypto_hash_sha512_state *VAR_0)
{
    static const uint64_t VAR_1[8] = {
        0x6a09e667f3bcc908ULL, 0xbb67ae8584caa73bULL, 0x3c6ef372fe94f82bULL,
        0xa54ff53a5f1d36f1ULL, 0x510e527fade682d1ULL, 0x9b05688c2b3e6c1fULL,
        0x1f83d9abfb41bd6bULL, 0x5be0cd19137e2179ULL
    };

    VAR_0->count[0] = VAR_0->count[1] = (uint64_t) 0U;
    FUNC_0(VAR_0->state, VAR_1, sizeof VAR_1);

    return 0;
}
