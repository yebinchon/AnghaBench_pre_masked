
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {scalar_t__ remaining; int stream; } ;
typedef TYPE_2__ limit_context_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int*,char const**,scalar_t__*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_1,
                                         int VAR_2, int *VAR_3,
                                         const char **VAR_4, apr_size_t *VAR_5)
{
    limit_context_t *VAR_6 = VAR_1->data;
    apr_status_t VAR_7;

    if (!VAR_6->remaining) {
        *VAR_5 = 0;
        return VAR_0;
    }

    VAR_7 = FUNC_1(VAR_6->stream, VAR_2, VAR_3, VAR_4, VAR_5);

    if (!FUNC_0(VAR_7)) {
        VAR_6->remaining -= *VAR_5;
    }


    if (!VAR_6->remaining && !VAR_7) {
        VAR_7 = VAR_0;
    }

    return VAR_7;
}
