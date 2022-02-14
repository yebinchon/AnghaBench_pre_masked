
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ evutil_socket_t ;
struct TYPE_3__ {scalar_t__ resp_read_pipe; } ;
typedef TYPE_1__ blocking_child ;


 int FUNC_0 (int) ;
 short VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(
 evutil_socket_t VAR_1,
 short VAR_2,
 void * VAR_3
 )
{
 blocking_child * VAR_4;

 FUNC_0(VAR_0 & VAR_2);
 VAR_4 = VAR_3;
 FUNC_0(VAR_1 == VAR_4->resp_read_pipe);
 FUNC_1(VAR_4);
}
