
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int result; } ;
typedef TYPE_1__ isc_socketevent_t ;
struct TYPE_8__ {int recv_list; } ;
typedef TYPE_2__ isc_socket_t ;
typedef int isc_result_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__**) ;

__attribute__((used)) static void
FUNC_3(isc_socket_t *VAR_0, isc_result_t VAR_1) {
 isc_socketevent_t *VAR_2;

 while (!FUNC_0(VAR_0->recv_list)) {
  VAR_2 = FUNC_1(VAR_0->recv_list);
  VAR_2->result = VAR_1;
  FUNC_2(VAR_0, &VAR_2);
 }
}
