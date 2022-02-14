
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef TYPE_2__ headers_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const**,int *) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_bucket_t *VAR_7,
                                          int VAR_8, int *VAR_9,
                                          const char **VAR_10, apr_size_t *VAR_11)
{
    headers_context_t *VAR_12 = VAR_7->data;
    apr_status_t VAR_13;


    if ((VAR_8 & VAR_5) == 0)
        return VAR_0;


    FUNC_1(VAR_12, VAR_10, VAR_11);
    if (VAR_12->state == VAR_3)
        return VAR_1;


    VAR_13 = FUNC_0(VAR_12);


    *VAR_9 = (VAR_12->state == VAR_2 || VAR_12->state == VAR_4)
        ? VAR_5 : VAR_6;

    return VAR_13;
}
