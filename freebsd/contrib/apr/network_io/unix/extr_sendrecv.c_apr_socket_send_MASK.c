
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
typedef int apr_ssize_t ;
struct TYPE_4__ {int options; scalar_t__ timeout; int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char const*,int) ;

apr_status_t FUNC_2(apr_socket_t *VAR_6, const char *VAR_7,
                             apr_size_t *VAR_8)
{
    apr_ssize_t VAR_9;

    if (VAR_6->options & VAR_0) {
        VAR_6->options &= ~VAR_0;
        goto do_select;
    }

    do {
        VAR_9 = FUNC_1(VAR_6->socketdes, VAR_7, (*VAR_8));
    } while (VAR_9 == -1 && VAR_5 == VAR_3);

    while (VAR_9 == -1 && (VAR_5 == VAR_2 || VAR_5 == VAR_4)
                    && (VAR_6->timeout > 0)) {
        apr_status_t VAR_10;
do_select:
        VAR_10 = FUNC_0(((void*)0), VAR_6, 0);
        if (VAR_10 != VAR_1) {
            *VAR_8 = 0;
            return VAR_10;
        }
        else {
            do {
                VAR_9 = FUNC_1(VAR_6->socketdes, VAR_7, (*VAR_8));
            } while (VAR_9 == -1 && VAR_5 == VAR_3);
        }
    }
    if (VAR_9 == -1) {
        *VAR_8 = 0;
        return VAR_5;
    }
    if ((VAR_6->timeout > 0) && (VAR_9 < *VAR_8)) {
        VAR_6->options |= VAR_0;
    }
    (*VAR_8) = VAR_9;
    return VAR_1;
}
