
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ n; scalar_t__ minimum; int result; } ;
typedef TYPE_2__ isc_socketevent_t ;
struct TYPE_10__ {scalar_t__ remaining; } ;
struct TYPE_12__ {scalar_t__ pending_recv; int recv_list; TYPE_1__ recvbuf; } ;
typedef TYPE_3__ isc_socket_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__**) ;

__attribute__((used)) static void
FUNC_4(isc_socket_t *VAR_1)
{
 isc_socketevent_t *VAR_2;





 if (VAR_1->pending_recv > 0)
  return;

 while (VAR_1->recvbuf.remaining > 0 && !FUNC_0(VAR_1->recv_list)) {
  VAR_2 = FUNC_1(VAR_1->recv_list);





  FUNC_2(VAR_1, VAR_2);




  if (VAR_2->n >= VAR_2->minimum) {
   VAR_2->result = VAR_0;
   FUNC_3(VAR_1, &VAR_2);
  }
 }
}
