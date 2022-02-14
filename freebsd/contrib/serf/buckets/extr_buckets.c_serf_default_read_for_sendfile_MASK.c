
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* type; } ;
typedef TYPE_2__ serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int apr_off_t ;
struct TYPE_9__ {scalar_t__ numtrailers; int numheaders; int headers; } ;
typedef TYPE_3__ apr_hdtr_t ;
typedef int apr_file_t ;
struct TYPE_7__ {int (* read_iovec ) (TYPE_2__*,int ,int ,int ,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,int *) ;

apr_status_t FUNC_1(
    serf_bucket_t *VAR_0,
    apr_size_t VAR_1,
    apr_hdtr_t *VAR_2,
    apr_file_t **VAR_3,
    apr_off_t *VAR_4,
    apr_size_t *VAR_5)
{





    apr_status_t VAR_6 = VAR_0->type->read_iovec(VAR_0, VAR_1,
                                                   VAR_2->numheaders,
                                                   VAR_2->headers,
                                                   &VAR_2->numheaders);


    *VAR_3 = ((void*)0);
    VAR_2->numtrailers = 0;

    return VAR_6;
}
