
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; scalar_t__ remaining; int buf; int current; int read_baton; int (* read ) (int ,int,int ,scalar_t__*) ;} ;
typedef TYPE_1__ serf_databuf_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,scalar_t__*) ;

__attribute__((used)) static apr_status_t FUNC_3(serf_databuf_t *VAR_2,
                                        apr_size_t *VAR_3)
{
    apr_size_t VAR_4;
    apr_status_t VAR_5;


    if (VAR_2->remaining > 0)
        return VAR_1;


    if (FUNC_0(VAR_2->status)) {

        *VAR_3 = 0;
        return VAR_0;
    }


    VAR_5 = (*VAR_2->read)(VAR_2->read_baton, sizeof(VAR_2->buf),
                              VAR_2->buf, &VAR_4);
    if (FUNC_1(VAR_5)) {
        return VAR_5;
    }

    VAR_2->current = VAR_2->buf;
    VAR_2->remaining = VAR_4;
    VAR_2->status = VAR_5;

    return VAR_1;
}
