
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_3__ {int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,void*) ;

apr_status_t FUNC_2(apr_socket_t *VAR_3, int *VAR_4)
{

    int VAR_5;

    if (FUNC_1(VAR_3->socketdes, VAR_2, (void*) &VAR_5) < 0)
        return FUNC_0();

    *VAR_4 = (VAR_5 != 0);

    return VAR_1;



}
