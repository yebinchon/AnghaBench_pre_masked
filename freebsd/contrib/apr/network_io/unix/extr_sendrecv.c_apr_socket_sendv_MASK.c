
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {int iov_len; int iov_base; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_ssize_t ;
struct TYPE_5__ {int options; scalar_t__ timeout; int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_size_t ;
typedef size_t apr_int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,struct iovec const*,size_t) ;

apr_status_t FUNC_3(apr_socket_t * VAR_6, const struct iovec *VAR_7,
                              apr_int32_t VAR_8, apr_size_t *VAR_9)
{
    *VAR_9 = VAR_7[0].iov_len;
    return FUNC_0(VAR_6, VAR_7[0].iov_base, VAR_9);

}
