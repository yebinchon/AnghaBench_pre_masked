
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int allocator; } ;
typedef TYPE_3__ serf_bucket_t ;
struct TYPE_13__ {int used; int state; } ;
struct TYPE_12__ {int code; } ;
struct TYPE_15__ {int state; int chunked; TYPE_2__ linebuf; void* body; int headers; int stream; TYPE_1__ sl; } ;
typedef TYPE_4__ response_context_t ;
typedef int apr_uint64_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_3 (void const*,int *,int) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 void* FUNC_8 (int ,int ) ;
 void* FUNC_9 (void*,int ) ;
 void* FUNC_10 (void*,int ,int ) ;
 void* FUNC_11 (int ,char*) ;
 void* FUNC_12 (void*,int ,int ) ;
 void* FUNC_13 (int *,int ,int *,int *,int ) ;
 int FUNC_14 (char*,void const*) ;

__attribute__((used)) static apr_status_t FUNC_15(serf_bucket_t *VAR_10, response_context_t *VAR_11)
{
    apr_status_t VAR_12 = VAR_2;

    switch (VAR_11->state) {
    case 129:



        VAR_12 = FUNC_6(VAR_11, VAR_8);
        if (FUNC_2(VAR_12))
            return VAR_12;

        if (VAR_11->linebuf.state == VAR_7) {

            VAR_12 = FUNC_7(VAR_11, VAR_10->allocator);
            if (VAR_12)
                return VAR_12;


            if (VAR_11->sl.code == 101) {
                VAR_11->body =
                    FUNC_8(VAR_11->stream, VAR_10->allocator);
                VAR_11->state = 131;
                break;
            }


            VAR_11->state = 130;
        }
        else {




            if (FUNC_1(VAR_12)) {
                return VAR_6;
            }
        }
        break;
    case 130:
        VAR_12 = FUNC_5(VAR_10, VAR_11);
        if (FUNC_2(VAR_12))
            return VAR_12;




        if (VAR_11->linebuf.state == VAR_7 && !VAR_11->linebuf.used) {
            const void *VAR_13;


            VAR_11->state = 132;



            if (!FUNC_4(VAR_11)) {
                VAR_11->body = FUNC_13(((void*)0), 0, ((void*)0), ((void*)0),
                                                      VAR_10->allocator);
                VAR_11->state = 132;
                break;
            }

            VAR_11->body =
                FUNC_8(VAR_11->stream, VAR_10->allocator);


            VAR_13 = FUNC_11(VAR_11->headers, "Content-Length");
            if (VAR_13) {
                apr_uint64_t VAR_14;
                VAR_14 = FUNC_3(VAR_13, ((void*)0), 10);
                if (VAR_9 == VAR_3) {
                    return FUNC_0(VAR_3);
                }
                VAR_11->body = FUNC_12(
                              VAR_11->body, VAR_14, VAR_10->allocator);
            }
            else {
                VAR_13 = FUNC_11(VAR_11->headers, "Transfer-Encoding");


                if (VAR_13 && FUNC_14("chunked", VAR_13) == 0) {
                    VAR_11->chunked = 1;
                    VAR_11->body = FUNC_9(VAR_11->body,
                                                           VAR_10->allocator);
                }
            }
            VAR_13 = FUNC_11(VAR_11->headers, "Content-Encoding");
            if (VAR_13) {

                if (VAR_13 && FUNC_14("gzip", VAR_13) == 0) {
                    VAR_11->body =
                        FUNC_10(VAR_11->body, VAR_10->allocator,
                                                   VAR_5);
                }
                else if (VAR_13 && FUNC_14("deflate", VAR_13) == 0) {
                    VAR_11->body =
                        FUNC_10(VAR_11->body, VAR_10->allocator,
                                                   VAR_4);
                }
            }
        }
        break;
    case 132:

        break;
    case 128:
        VAR_12 = FUNC_5(VAR_10, VAR_11);
        if (FUNC_2(VAR_12))
            return VAR_12;


        if (VAR_11->linebuf.state == VAR_7 && !VAR_11->linebuf.used) {
            VAR_11->state = 131;
            return VAR_1;
        }
        break;
    case 131:
        return VAR_1;
    default:

        return VAR_0;
    }

    return VAR_12;
}
