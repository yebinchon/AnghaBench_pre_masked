
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_5__ {scalar_t__ timeout; int options; int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef scalar_t__ apr_interval_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

apr_status_t FUNC_4(apr_socket_t *VAR_3, apr_interval_time_t VAR_4)
{
    apr_status_t VAR_5;
    if (VAR_4 >= 0 && VAR_3->timeout < 0) {
        if (FUNC_0(VAR_3, VAR_1) != 1) {
            if ((VAR_5 = FUNC_3(VAR_3->socketdes)) != VAR_2) {
                return VAR_5;
            }
            FUNC_1(VAR_3, VAR_1, 1);
        }
    }
    else if (VAR_4 < 0 && VAR_3->timeout >= 0) {
        if (FUNC_0(VAR_3, VAR_1) != 0) {
            if ((VAR_5 = FUNC_2(VAR_3->socketdes)) != VAR_2) {
                return VAR_5;
            }
            FUNC_1(VAR_3, VAR_1, 0);
        }
    }



    if (VAR_4 <= 0) {
        VAR_3->options &= ~VAR_0;
    }
    VAR_3->timeout = VAR_4;
    return VAR_2;
}
