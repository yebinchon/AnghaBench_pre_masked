
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {scalar_t__ remaining; int stream; } ;
typedef TYPE_2__ body_context_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__,char const**,scalar_t__*) ;

__attribute__((used)) static apr_status_t FUNC_3(serf_bucket_t *VAR_4,
                                            apr_size_t VAR_5,
                                            const char **VAR_6,
                                            apr_size_t *VAR_7)
{
    body_context_t *VAR_8 = VAR_4->data;
    apr_status_t VAR_9;

    if (!VAR_8->remaining) {
        *VAR_7 = 0;
        return VAR_0;
    }

    if (VAR_5 == VAR_3 || VAR_5 > VAR_8->remaining) {
        if (VAR_8->remaining <= VAR_1) {
            VAR_5 = (apr_size_t) VAR_8->remaining;
        } else {
            VAR_5 = VAR_1;
        }
    }

    VAR_9 = FUNC_2(VAR_8->stream, VAR_5, VAR_6, VAR_7);

    if (!FUNC_1(VAR_9)) {
        VAR_8->remaining -= *VAR_7;
    }

    if (FUNC_0(VAR_9) && VAR_8->remaining > 0) {

        VAR_9 = VAR_2;
    }

    return VAR_9;
}
