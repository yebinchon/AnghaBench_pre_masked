
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_ssize_t ;
struct TYPE_6__ {scalar_t__ timeout; int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
struct TYPE_7__ {int salen; int sa; } ;
typedef TYPE_2__ apr_sockaddr_t ;
typedef int apr_size_t ;
typedef int apr_int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char const*,int,int ,struct sockaddr const*,int ) ;

apr_status_t FUNC_2(apr_socket_t *VAR_5, apr_sockaddr_t *VAR_6,
                               apr_int32_t VAR_7, const char *VAR_8,
                               apr_size_t *VAR_9)
{
    apr_ssize_t VAR_10;

    do {
        VAR_10 = FUNC_1(VAR_5->socketdes, VAR_8, (*VAR_9), VAR_7,
                    (const struct sockaddr*)&VAR_6->sa,
                    VAR_6->salen);
    } while (VAR_10 == -1 && VAR_4 == VAR_2);

    while ((VAR_10 == -1) && (VAR_4 == VAR_1 || VAR_4 == VAR_3)
                      && (VAR_5->timeout > 0)) {
        apr_status_t VAR_11 = FUNC_0(((void*)0), VAR_5, 0);
        if (VAR_11 != VAR_0) {
            *VAR_9 = 0;
            return VAR_11;
        } else {
            do {
                VAR_10 = FUNC_1(VAR_5->socketdes, VAR_8, (*VAR_9), VAR_7,
                            (const struct sockaddr*)&VAR_6->sa,
                            VAR_6->salen);
            } while (VAR_10 == -1 && VAR_4 == VAR_2);
        }
    }
    if (VAR_10 == -1) {
        *VAR_9 = 0;
        return VAR_4;
    }
    *VAR_9 = VAR_10;
    return VAR_0;
}
