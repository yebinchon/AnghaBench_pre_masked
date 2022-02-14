
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_3__ {int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

apr_status_t FUNC_1(apr_socket_t *VAR_2, apr_int32_t VAR_3)
{
    if (FUNC_0(VAR_2->socketdes, VAR_3) == -1)
        return VAR_1;
    else
        return VAR_0;
}
