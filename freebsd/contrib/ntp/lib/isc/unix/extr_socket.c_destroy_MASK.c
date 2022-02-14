
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lock; int shutdown_ok; int socklist; scalar_t__ maxsocks; } ;
typedef TYPE_1__ isc__socketmgr_t ;
struct TYPE_10__ {int fd; int * connect_ev; int send_list; int recv_list; int accept_list; TYPE_1__* manager; } ;
typedef TYPE_2__ isc__socket_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_2__*,int *,int ,int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_10(isc__socket_t **VAR_5) {
 int VAR_6;
 isc__socket_t *VAR_7 = *VAR_5;
 isc__socketmgr_t *VAR_8 = VAR_7->manager;

 FUNC_9(VAR_7, ((void*)0), VAR_0, VAR_3, VAR_1,
     VAR_2, "destroying");

 FUNC_0(FUNC_1(VAR_7->accept_list));
 FUNC_0(FUNC_1(VAR_7->recv_list));
 FUNC_0(FUNC_1(VAR_7->send_list));
 FUNC_0(VAR_7->connect_ev == ((void*)0));
 FUNC_4(VAR_7->fd == -1 || VAR_7->fd < (int)VAR_8->maxsocks);

 if (VAR_7->fd >= 0) {
  VAR_6 = VAR_7->fd;
  VAR_7->fd = -1;
  FUNC_7(VAR_8, VAR_7, VAR_6);
 }

 FUNC_3(&VAR_8->lock);

 FUNC_2(VAR_8->socklist, VAR_7, VAR_4);







 FUNC_8(VAR_5);

 FUNC_6(&VAR_8->lock);
}
