
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {int body; } ;
typedef TYPE_2__ incoming_context_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (int ,int,int*,char const**,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_0,
                                           int VAR_1, int *VAR_2,
                                           const char **VAR_3, apr_size_t *VAR_4)
{
    incoming_context_t *VAR_5 = VAR_0->data;
    apr_status_t VAR_6;

    VAR_6 = FUNC_1(VAR_0, VAR_5);
    if (VAR_6) {
        return VAR_6;
    }


    return FUNC_0(VAR_5->body, VAR_1, VAR_2, VAR_3, VAR_4);
}
