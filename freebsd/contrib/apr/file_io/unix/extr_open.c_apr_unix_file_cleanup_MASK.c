
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
struct TYPE_4__ {scalar_t__ buffered; } ;
typedef TYPE_1__ apr_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

apr_status_t FUNC_2(void *VAR_1)
{
    apr_file_t *VAR_2 = VAR_1;
    apr_status_t VAR_3 = VAR_0, VAR_4 = VAR_0;

    if (VAR_2->buffered) {
        VAR_3 = FUNC_0(VAR_2);
    }

    VAR_4 = FUNC_1(VAR_2, 0);

    return VAR_4 != VAR_0 ? VAR_4 : VAR_3;
}
