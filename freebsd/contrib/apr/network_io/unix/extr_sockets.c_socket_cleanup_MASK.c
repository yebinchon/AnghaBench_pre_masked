
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_2__ {int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t FUNC_1(void *VAR_2)
{
    apr_socket_t *VAR_3 = VAR_2;
    int VAR_4 = VAR_3->socketdes;




    VAR_3->socketdes = -1;

    if (FUNC_0(VAR_4) == 0) {
        return VAR_0;
    }
    else {

        VAR_3->socketdes = VAR_4;

        return VAR_1;
    }
}
