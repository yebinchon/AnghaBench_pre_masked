
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pending_iocp; scalar_t__ pending_recv; scalar_t__ pending_send; scalar_t__ pending_accept; scalar_t__ references; int pending_connect; scalar_t__ fd; int lock; int accept_list; int send_list; int recv_list; } ;
typedef TYPE_1__ isc_socket_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,int) ;

__attribute__((used)) static void
FUNC_6(isc_socket_t **VAR_1, int VAR_2) {
 isc_socket_t *VAR_3 = *VAR_1;
 *VAR_1 = ((void*)0);

 FUNC_1(FUNC_4(VAR_3));
 FUNC_0(VAR_3);

 if (VAR_3->pending_iocp > 0
     || VAR_3->pending_recv > 0
     || VAR_3->pending_send > 0
     || VAR_3->pending_accept > 0
     || VAR_3->references > 0
     || VAR_3->pending_connect == 1
     || !FUNC_2(VAR_3->recv_list)
     || !FUNC_2(VAR_3->send_list)
     || !FUNC_2(VAR_3->accept_list)
     || VAR_3->fd != VAR_0) {
  FUNC_3(&VAR_3->lock);
  return;
 }
 FUNC_3(&VAR_3->lock);

 FUNC_5(&VAR_3, VAR_2);
}
