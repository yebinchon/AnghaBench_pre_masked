
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* current; scalar_t__ remaining; } ;
typedef TYPE_1__ simple_context_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,scalar_t__*,int,int*) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_2,
                                         int VAR_3, int *VAR_4,
                                         const char **VAR_5, apr_size_t *VAR_6)
{
    simple_context_t *VAR_7 = VAR_2->data;


    *VAR_5 = VAR_7->current;
    FUNC_0(&VAR_7->current, &VAR_7->remaining, VAR_3, VAR_4);


    *VAR_6 = VAR_7->current - *VAR_5;

    return VAR_7->remaining ? VAR_1 : VAR_0;
}
