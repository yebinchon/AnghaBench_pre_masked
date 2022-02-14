
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {scalar_t__ state; int amt_read; } ;
typedef TYPE_2__ headers_context_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const**,scalar_t__*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_3,
                                      apr_size_t VAR_4,
                                      const char **VAR_5, apr_size_t *VAR_6)
{
    headers_context_t *VAR_7 = VAR_3->data;
    apr_size_t VAR_8;

    FUNC_1(VAR_7, VAR_5, &VAR_8);
    if (VAR_7->state == VAR_2) {
        *VAR_6 = VAR_8;
        return VAR_0;
    }

    if (VAR_4 >= VAR_8) {

        *VAR_6 = VAR_8;


        return FUNC_0(VAR_7);
    }


    *VAR_6 = VAR_4;
    VAR_7->amt_read += VAR_4;


    return VAR_1;
}
