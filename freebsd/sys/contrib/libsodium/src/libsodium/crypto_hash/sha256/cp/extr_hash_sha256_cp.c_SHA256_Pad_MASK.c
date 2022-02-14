
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int count; void** buf; int state; } ;
typedef TYPE_1__ crypto_hash_sha256_state ;


 void** VAR_0 ;
 int FUNC_0 (int ,void**,int *,int *) ;
 int FUNC_1 (void**,int) ;
 int FUNC_2 (void**,int ,int) ;

__attribute__((used)) static void
FUNC_3(crypto_hash_sha256_state *VAR_1, uint32_t VAR_2[64 + 8])
{
    unsigned int VAR_3;
    unsigned int VAR_4;

    VAR_3 = (unsigned int) ((VAR_1->count >> 3) & 0x3f);
    if (VAR_3 < 56) {
        for (VAR_4 = 0; VAR_4 < 56 - VAR_3; VAR_4++) {
            VAR_1->buf[VAR_3 + VAR_4] = VAR_0[VAR_4];
        }
    } else {
        for (VAR_4 = 0; VAR_4 < 64 - VAR_3; VAR_4++) {
            VAR_1->buf[VAR_3 + VAR_4] = VAR_0[VAR_4];
        }
        FUNC_0(VAR_1->state, VAR_1->buf, &VAR_2[0], &VAR_2[64]);
        FUNC_2(&VAR_1->buf[0], 0, 56);
    }
    FUNC_1(&VAR_1->buf[56], VAR_1->count);
    FUNC_0(VAR_1->state, VAR_1->buf, &VAR_2[0], &VAR_2[64]);
}
