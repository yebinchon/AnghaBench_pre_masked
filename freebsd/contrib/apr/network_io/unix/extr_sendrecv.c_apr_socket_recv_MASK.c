
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,int) ;

apr_status_t FUNC_2(apr_socket_t *VAR_7, char *VAR_8, apr_size_t *VAR_9)
{
    apr_ssize_t VAR_10;
    apr_status_t VAR_11;

    if (VAR_7->options & VAR_1) {
        VAR_7->options &= ~VAR_1;
        goto do_select;
    }

    do {
        VAR_10 = FUNC_1(VAR_7->socketdes, VAR_8, (*VAR_9));
    } while (VAR_10 == -1 && VAR_6 == VAR_4);

    while ((VAR_10 == -1) && (VAR_6 == VAR_3 || VAR_6 == VAR_5)
                      && (VAR_7->timeout > 0)) {
do_select:
        VAR_11 = FUNC_0(((void*)0), VAR_7, 1);
        if (VAR_11 != VAR_2) {
            *VAR_9 = 0;
            return VAR_11;
        }
        else {
            do {
                VAR_10 = FUNC_1(VAR_7->socketdes, VAR_8, (*VAR_9));
            } while (VAR_10 == -1 && VAR_6 == VAR_4);
        }
    }
    if (VAR_10 == -1) {
        (*VAR_9) = 0;
        return VAR_6;
    }
    if ((VAR_7->timeout > 0) && (VAR_10 < *VAR_9)) {
        VAR_7->options |= VAR_1;
    }
    (*VAR_9) = VAR_10;
    if (VAR_10 == 0) {
        return VAR_0;
    }
    return VAR_2;
}
