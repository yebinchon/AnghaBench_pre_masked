
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int pos; scalar_t__ dst; } ;
struct TYPE_5__ {int state; int bytesLeft; int saved; int xxh; int seed; } ;
typedef TYPE_1__ SEQ_stream ;
typedef TYPE_2__ SEQ_outBuffer ;
typedef int BYTE ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int* const,int) ;
 int FUNC_3 (int*,int,size_t const) ;

__attribute__((used)) static size_t FUNC_4(SEQ_stream* VAR_0, unsigned VAR_1,
                                  SEQ_outBuffer* VAR_2)
{
    typedef enum {
        ml_first_byte = 0,
        ml_match_bytes,
        ml_last_byte,
    } ml_state;
    BYTE* const VAR_3 = (BYTE*)VAR_2->dst;
    BYTE* const VAR_4 = VAR_3 + VAR_2->size;
    BYTE* VAR_5 = VAR_3 + VAR_2->pos;

    switch ((ml_state)VAR_0->state) {
    case ml_first_byte:

        if (VAR_5 >= VAR_4) {
            VAR_0->bytesLeft = 1;
            break;
        }
        *VAR_5 = FUNC_1(&VAR_0->seed) & 0xFF;
        do {
            VAR_0->saved = FUNC_1(&VAR_0->seed) & 0xFF;
        } while (*VAR_5 == VAR_0->saved);
        ++VAR_5;

        VAR_0->state = ml_match_bytes;
        VAR_0->bytesLeft = VAR_1 + 1;

    case ml_match_bytes: {

        size_t const VAR_6 = FUNC_0(VAR_0->bytesLeft, (size_t)(VAR_4 - VAR_5));
        if (VAR_6 > 0) {
            FUNC_3(VAR_5, VAR_0->saved, VAR_6);
            VAR_5 += VAR_6;
            VAR_0->bytesLeft -= VAR_6;
        }
        if (VAR_0->bytesLeft > 0)
            break;

        VAR_0->state = ml_last_byte;
    }

    case ml_last_byte:

        if (VAR_5 >= VAR_4) {
            VAR_0->bytesLeft = 1;
            break;
        }
        do {
            *VAR_5 = FUNC_1(&VAR_0->seed) & 0xFF;
        } while (*VAR_5 == VAR_0->saved);
        ++VAR_5;


    default:
        VAR_0->state = 0;
        VAR_0->bytesLeft = 0;
        break;
    }
    FUNC_2(&VAR_0->xxh, VAR_3 + VAR_2->pos, (VAR_5 - VAR_3) - VAR_2->pos);
    VAR_2->pos = VAR_5 - VAR_3;
    return VAR_0->bytesLeft;
}
