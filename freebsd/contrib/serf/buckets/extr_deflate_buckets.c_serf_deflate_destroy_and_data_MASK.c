
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ stream; scalar_t__ inflate_stream; int zstream; } ;
typedef TYPE_2__ deflate_context_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(serf_bucket_t *VAR_2)
{
    deflate_context_t *VAR_3 = VAR_2->data;

    if (VAR_3->state > VAR_1 &&
        VAR_3->state <= VAR_0)
        FUNC_0(&VAR_3->zstream);




    if (VAR_3->inflate_stream) {
        FUNC_1(VAR_3->inflate_stream);
    }
    FUNC_1(VAR_3->stream);

    FUNC_2(VAR_2);
}
