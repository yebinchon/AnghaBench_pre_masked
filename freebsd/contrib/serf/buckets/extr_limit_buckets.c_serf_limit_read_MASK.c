
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,char const**,scalar_t__*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_3,
                                    apr_size_t VAR_4,
                                    const char **VAR_5, apr_size_t *VAR_6)
{
    limit_context_t *VAR_7 = VAR_3->data;
    apr_status_t VAR_8;

    if (!VAR_7->remaining) {
        *VAR_6 = 0;
        return VAR_0;
    }

    if (VAR_4 == VAR_2 || VAR_4 > VAR_7->remaining) {
        if (VAR_7->remaining <= VAR_1) {
            VAR_4 = (apr_size_t) VAR_7->remaining;
        } else {
            VAR_4 = VAR_1;
        }
    }

    VAR_8 = FUNC_1(VAR_7->stream, VAR_4, VAR_5, VAR_6);

    if (!FUNC_0(VAR_8)) {
        VAR_7->remaining -= *VAR_6;
    }


    if (!VAR_7->remaining && !VAR_8) {
        VAR_8 = VAR_0;
    }

    return VAR_8;
}
