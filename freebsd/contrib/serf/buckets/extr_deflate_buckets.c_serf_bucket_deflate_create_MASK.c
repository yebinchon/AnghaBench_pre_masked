
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int format; int bufferSize; int memLevel; int windowSize; int stream_size; int stream_left; int state; int zstream; scalar_t__ crc; int inflate_stream; int stream_status; int * stream; } ;
typedef TYPE_1__ deflate_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int VAR_7 ;

serf_bucket_t *FUNC_4(
    serf_bucket_t *VAR_8,
    serf_bucket_alloc_t *VAR_9,
    int VAR_10)
{
    deflate_context_t *VAR_11;

    VAR_11 = FUNC_3(VAR_9, sizeof(*VAR_11));
    VAR_11->stream = VAR_8;
    VAR_11->stream_status = VAR_0;
    VAR_11->inflate_stream = FUNC_1(VAR_9);
    VAR_11->format = VAR_10;
    VAR_11->crc = 0;

    FUNC_0(&VAR_11->zstream, 0, sizeof(VAR_11->zstream));

    switch (VAR_11->format) {
        case 128:
            VAR_11->state = VAR_6;
            break;
        case 129:

            VAR_11->state = VAR_5;
            break;
        default:

            return ((void*)0);
    }


    VAR_11->stream_left = VAR_11->stream_size = VAR_2;

    VAR_11->windowSize = VAR_4;
    VAR_11->memLevel = VAR_3;
    VAR_11->bufferSize = VAR_1;

    return FUNC_2(&VAR_7, VAR_9, VAR_11);
}
