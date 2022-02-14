
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ ldns_sha1_ctx ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,unsigned int) ;

void
FUNC_2(ldns_sha1_ctx *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3;
    unsigned int VAR_4;

    VAR_4 = (unsigned)(uint32_t)((VAR_0->count >> 3) & 63);
    VAR_0->count += (VAR_2 << 3);
    if ((VAR_4 + VAR_2) > 63) {
        FUNC_1(&VAR_0->buffer[VAR_4], VAR_1, (VAR_3 = 64 - VAR_4));
        FUNC_0(VAR_0->state, VAR_0->buffer);
        for ( ; VAR_3 + 63 < VAR_2; VAR_3 += 64) {
            FUNC_0(VAR_0->state, &VAR_1[VAR_3]);
        }
        VAR_4 = 0;
    }
    else VAR_3 = 0;
    FUNC_1(&VAR_0->buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
