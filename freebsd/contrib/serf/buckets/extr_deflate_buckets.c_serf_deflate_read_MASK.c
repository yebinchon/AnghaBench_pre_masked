
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int allocator; TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_14__ {unsigned long total_out; unsigned char* next_in; int * avail_in; int * avail_out; scalar_t__ next_out; } ;
struct TYPE_16__ {int state; unsigned long crc; void* stream_status; TYPE_1__* stream; TYPE_1__* inflate_stream; int * stream_size; int * stream_left; int format; TYPE_10__ zstream; int * bufferSize; scalar_t__ buffer; int windowSize; int * hdr_buffer; } ;
typedef TYPE_2__ deflate_context_t ;
typedef void* apr_status_t ;
typedef int * apr_size_t ;
typedef int Bytef ;


 void* VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (char const*,int *,int ) ;


 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (unsigned long,int const*,int *) ;
 int * VAR_8 ;
 unsigned long FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_10__*,int ) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*,int ) ;
 int FUNC_9 (int *,char const*,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 void* FUNC_13 (TYPE_1__*,int *,char const**,int **) ;

__attribute__((used)) static apr_status_t FUNC_14(serf_bucket_t *VAR_9,
                                      apr_size_t VAR_10,
                                      const char **VAR_11, apr_size_t *VAR_12)
{
    deflate_context_t *VAR_13 = VAR_9->data;
    apr_status_t VAR_14;
    const char *VAR_15;
    apr_size_t VAR_16;
    int VAR_17;

    while (1) {
        switch (VAR_13->state) {
        case 130:
        case 129:
            VAR_14 = FUNC_13(VAR_13->stream, VAR_13->stream_left,
                                      &VAR_15, &VAR_16);

            if (FUNC_2(VAR_14)) {
                return VAR_14;
            }

            FUNC_9(VAR_13->hdr_buffer + (VAR_13->stream_size - VAR_13->stream_left),
                   VAR_15, VAR_16);

            VAR_13->stream_left -= VAR_16;

            if (VAR_13->stream_left == 0) {
                VAR_13->state++;
                if (FUNC_0(VAR_14)) {
                    *VAR_12 = 0;
                    return VAR_14;
                }
            }
            else if (VAR_14) {
                *VAR_12 = 0;
                return VAR_14;
            }
            break;
        case 133:
            if (VAR_13->hdr_buffer[0] != VAR_8[0] ||
                VAR_13->hdr_buffer[1] != VAR_8[1]) {
                return VAR_3;
            }
            if (VAR_13->hdr_buffer[3] != 0) {
                return VAR_3;
            }
            VAR_13->state++;
            break;
        case 128:
        {
            unsigned long VAR_18, VAR_19, VAR_20;


            VAR_18 = FUNC_5((unsigned char*)VAR_13->hdr_buffer);
            if (VAR_13->crc != VAR_18) {
                return VAR_3;
            }
            VAR_19 = FUNC_5((unsigned char*)VAR_13->hdr_buffer + 4);


            VAR_20 = VAR_13->zstream.total_out;
            VAR_20 &= 0xFFFFFFFF;
            if (VAR_20 != VAR_19) {
                return VAR_3;
            }
            VAR_13->state++;
            break;
        }
        case 131:
            VAR_17 = FUNC_8(&VAR_13->zstream, VAR_13->windowSize);
            if (VAR_17 != VAR_6) {
                return VAR_3;
            }
            VAR_13->zstream.next_out = VAR_13->buffer;
            VAR_13->zstream.avail_out = VAR_13->bufferSize;
            VAR_13->state++;
            break;
        case 134:
            FUNC_7(&VAR_13->zstream);
            FUNC_12(VAR_13->stream, VAR_13->inflate_stream);
            VAR_13->inflate_stream = 0;
            VAR_13->state++;
            break;
        case 132:

            VAR_14 = FUNC_13(VAR_13->inflate_stream, VAR_10, VAR_11,
                                      VAR_12);
            if (FUNC_2(VAR_14)) {
                return VAR_14;
            }

            if (FUNC_1(VAR_14)) {
                VAR_14 = VAR_13->stream_status;
                if (FUNC_1(VAR_14)) {




                    VAR_14 = VAR_1;
                }
            }
            if (*VAR_12 != 0) {
                return VAR_14;
            }
            if (VAR_13->zstream.avail_in == 0) {



                VAR_13->stream_status = FUNC_13(VAR_13->stream,
                                                      VAR_13->bufferSize,
                                                      &VAR_15,
                                                      &VAR_16);

                if (FUNC_2(VAR_13->stream_status)) {
                    return VAR_13->stream_status;
                }

                if (!VAR_16 && FUNC_0(VAR_13->stream_status)) {
                    *VAR_12 = 0;
                    VAR_14 = VAR_13->stream_status;
                    VAR_13->stream_status = VAR_1;
                    return VAR_14;
                }

                VAR_13->zstream.next_in = (unsigned char*)VAR_15;
                VAR_13->zstream.avail_in = VAR_16;
            }

            while (1) {

                VAR_17 = FUNC_6(&VAR_13->zstream, VAR_5);



                if (VAR_17 == VAR_4 || VAR_13->zstream.avail_out == 0) {
                    serf_bucket_t *VAR_21;
                    VAR_13->zstream.next_out = VAR_13->buffer;
                    VAR_16 = VAR_13->bufferSize - VAR_13->zstream.avail_out;

                    VAR_13->crc = FUNC_4(VAR_13->crc, (const Bytef *)VAR_13->buffer,
                                     VAR_16);


                    VAR_21 = FUNC_3((char *)VAR_13->buffer,
                                                        VAR_16,
                                                        VAR_9->allocator);
                    FUNC_10(VAR_13->inflate_stream, VAR_21);
                    VAR_13->zstream.avail_out = VAR_13->bufferSize;
                    break;
                }

                if (VAR_17 == VAR_7) {
                    serf_bucket_t *VAR_22;

                    VAR_16 = VAR_13->bufferSize - VAR_13->zstream.avail_out;
                    VAR_13->crc = FUNC_4(VAR_13->crc, (const Bytef *)VAR_13->buffer,
                                     VAR_16);

                    VAR_22 = FUNC_3((char *)VAR_13->buffer,
                                                        VAR_16,
                                                        VAR_9->allocator);
                    FUNC_10(VAR_13->inflate_stream, VAR_22);

                    VAR_13->zstream.avail_out = VAR_13->bufferSize;


                    VAR_22 = FUNC_11(VAR_9->allocator);
                    FUNC_12(VAR_22, VAR_13->stream);
                    VAR_13->stream = VAR_22;




                    VAR_22 = FUNC_3(
                                        (const char*)VAR_13->zstream.next_in,
                                                     VAR_13->zstream.avail_in,
                                                     VAR_9->allocator);
                    FUNC_12(VAR_13->stream, VAR_22);

                    switch (VAR_13->format) {
                    case 136:
                        VAR_13->stream_left = VAR_13->stream_size =
                            VAR_2;
                        VAR_13->state++;
                        break;
                    case 137:

                        VAR_13->state = 134;
                        break;
                    default:

                        return VAR_0;
                    }

                    break;
                }


                if (VAR_17 != VAR_6) {
                    return VAR_3;
                }


            }

            VAR_14 = FUNC_13(VAR_13->inflate_stream, VAR_10, VAR_11,
                                      VAR_12);

            if (FUNC_1(VAR_14)) {
                VAR_14 = VAR_13->stream_status;


                if (VAR_17 != VAR_7)
                    return VAR_1;




                if (FUNC_1(VAR_14)) {





                    if (VAR_13->state != 132)
                        return VAR_1;
                    else
                        return VAR_3;
                }
            }
            return VAR_14;
        case 135:

            return FUNC_13(VAR_13->stream, VAR_10, VAR_11, VAR_12);
        default:

            return VAR_0;
        }
    }


}
