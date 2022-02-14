
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {int state; int body; } ;
typedef TYPE_2__ incoming_context_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,char const**,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static apr_status_t FUNC_4(serf_bucket_t *VAR_1,
                                       apr_size_t VAR_2,
                                       const char **VAR_3, apr_size_t *VAR_4)
{
    incoming_context_t *VAR_5 = VAR_1->data;
    apr_status_t VAR_6;

    VAR_6 = FUNC_3(VAR_1, VAR_5);
    if (VAR_6) {

        if (FUNC_1(VAR_6) || FUNC_0(VAR_6)) {
            *VAR_4 = 0;
        }
        return VAR_6;
    }

    VAR_6 = FUNC_2(VAR_5->body, VAR_2, VAR_3, VAR_4);
    if (FUNC_1(VAR_6)) {
        VAR_5->state = VAR_0;
    }
    return VAR_6;
}
