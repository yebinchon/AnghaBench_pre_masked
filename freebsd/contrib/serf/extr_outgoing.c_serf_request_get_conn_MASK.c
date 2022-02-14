
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * conn; } ;
typedef TYPE_1__ serf_request_t ;
typedef int serf_connection_t ;



serf_connection_t *FUNC_0(
    const serf_request_t *VAR_0)
{
    return VAR_0->conn;
}
