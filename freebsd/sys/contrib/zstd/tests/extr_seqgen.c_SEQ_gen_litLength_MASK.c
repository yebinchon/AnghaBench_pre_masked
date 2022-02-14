
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int pos; scalar_t__ dst; } ;
struct TYPE_5__ {int state; unsigned int bytesLeft; int xxh; int saved; int seed; } ;
typedef TYPE_1__ SEQ_stream ;
typedef TYPE_2__ SEQ_outBuffer ;
typedef int BYTE ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int * const,int) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_3(SEQ_stream* VAR_1, unsigned VAR_2, SEQ_outBuffer* VAR_3)
{
    typedef enum {
        ll_start = 0,
        ll_run_bytes,
        ll_literals,
        ll_run_match,
    } ll_state;
    BYTE* const VAR_4 = (BYTE*)VAR_3->dst;
    BYTE* const VAR_5 = VAR_4 + VAR_3->size;
    BYTE* VAR_6 = VAR_4 + VAR_3->pos;

    switch ((ll_state)VAR_1->state) {
    case ll_start:
        VAR_1->state = ll_run_bytes;
        VAR_1->saved = VAR_1->seed;
        VAR_1->bytesLeft = FUNC_0(VAR_0, VAR_2);

    case ll_run_bytes:
        while (VAR_1->bytesLeft > 0 && VAR_6 < VAR_5) {
            *VAR_6++ = FUNC_1(&VAR_1->seed) | 0x80;
            --VAR_1->bytesLeft;
        }
        if (VAR_1->bytesLeft > 0)
            break;

        VAR_1->state = ll_literals;
        VAR_1->bytesLeft = VAR_2 - FUNC_0(VAR_0, VAR_2);

    case ll_literals:
        while (VAR_1->bytesLeft > 0 && VAR_6 < VAR_5) {
            *VAR_6++ = FUNC_1(&VAR_1->seed) & 0x7F;
            --VAR_1->bytesLeft;
        }
        if (VAR_1->bytesLeft > 0)
            break;

        VAR_1->state = ll_run_match;
        VAR_1->bytesLeft = FUNC_0(VAR_0, VAR_2);

    case ll_run_match: {
        while (VAR_1->bytesLeft > 0 && VAR_6 < VAR_5) {
            *VAR_6++ = FUNC_1(&VAR_1->saved) | 0x80;
            --VAR_1->bytesLeft;
        }
        if (VAR_1->bytesLeft > 0)
            break;
    }

    default:
        VAR_1->state = 0;
        VAR_1->bytesLeft = 0;
        break;
    }
    FUNC_2(&VAR_1->xxh, VAR_4 + VAR_3->pos, (VAR_6 - VAR_4) - VAR_3->pos);
    VAR_3->pos = VAR_6 - VAR_4;
    return VAR_1->bytesLeft;
}
