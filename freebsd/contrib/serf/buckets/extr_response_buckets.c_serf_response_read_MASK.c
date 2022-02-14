
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {int state; scalar_t__ chunked; int body; } ;
typedef TYPE_2__ response_context_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,char const**,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static apr_status_t FUNC_5(serf_bucket_t *VAR_3,
                                       apr_size_t VAR_4,
                                       const char **VAR_5, apr_size_t *VAR_6)
{
    response_context_t *VAR_7 = VAR_3->data;
    apr_status_t VAR_8;

    VAR_8 = FUNC_4(VAR_3, VAR_7);
    if (VAR_8) {

        if (FUNC_1(VAR_8) || FUNC_0(VAR_8)) {
            *VAR_6 = 0;
        }
        return VAR_8;
    }

    VAR_8 = FUNC_3(VAR_7->body, VAR_4, VAR_5, VAR_6);
    if (FUNC_2(VAR_8))
        return VAR_8;

    if (FUNC_1(VAR_8)) {
        if (VAR_7->chunked) {
            VAR_7->state = VAR_2;

            VAR_8 = VAR_0;
        } else {
            VAR_7->state = VAR_1;
        }
    }
    return VAR_8;
}
