
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_11__ {char* reason; int code; int version; } ;
struct TYPE_13__ {TYPE_2__* stream; TYPE_2__* headers; TYPE_1__ sl; } ;
typedef TYPE_3__ response_context_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*) ;

apr_status_t FUNC_9(serf_bucket_t *VAR_1)
{
    response_context_t *VAR_2 = VAR_1->data;
    serf_bucket_t *VAR_3;
    char VAR_4[256];
    int VAR_5;

    FUNC_5(VAR_1);


    VAR_5 = FUNC_3(VAR_4, 256, "HTTP/%d.%d %d ",
                        FUNC_1(VAR_2->sl.version),
                        FUNC_2(VAR_2->sl.version),
                        VAR_2->sl.code);
    VAR_3 = FUNC_7(VAR_4, VAR_5,
                                         VAR_1->allocator);
    FUNC_4(VAR_1, VAR_3);
    VAR_3 = FUNC_7(VAR_2->sl.reason, FUNC_8(VAR_2->sl.reason),
                                         VAR_1->allocator);
    FUNC_4(VAR_1, VAR_3);
    VAR_3 = FUNC_0("\r\n", 2,
                                        VAR_1->allocator);
    FUNC_4(VAR_1, VAR_3);


    FUNC_4(VAR_1, VAR_2->headers);
    FUNC_4(VAR_1, VAR_2->stream);

    FUNC_6(VAR_1->allocator, VAR_2);

    return VAR_0;
}
