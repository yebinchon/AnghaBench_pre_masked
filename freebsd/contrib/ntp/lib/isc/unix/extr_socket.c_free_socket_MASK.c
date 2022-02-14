
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ impmagic; scalar_t__ magic; } ;
struct TYPE_10__ {scalar_t__ references; int recvcmsgbuflen; int sendcmsgbuflen; TYPE_2__* manager; int lock; TYPE_1__ common; struct TYPE_10__* sendcmsgbuf; struct TYPE_10__* recvcmsgbuf; int accept_list; int send_list; int recv_list; int pending_accept; int pending_send; int pending_recv; int connecting; } ;
typedef TYPE_3__ isc__socket_t ;
struct TYPE_9__ {int mctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(isc__socket_t **VAR_1) {
 isc__socket_t *VAR_2 = *VAR_1;

 FUNC_1(VAR_2->references == 0);
 FUNC_1(FUNC_4(VAR_2));
 FUNC_1(!VAR_2->connecting);
 FUNC_1(!VAR_2->pending_recv);
 FUNC_1(!VAR_2->pending_send);
 FUNC_1(!VAR_2->pending_accept);
 FUNC_1(FUNC_3(VAR_2->recv_list));
 FUNC_1(FUNC_3(VAR_2->send_list));
 FUNC_1(FUNC_3(VAR_2->accept_list));
 FUNC_1(!FUNC_2(VAR_2, VAR_0));

 if (VAR_2->recvcmsgbuf != ((void*)0))
  FUNC_5(VAR_2->manager->mctx, VAR_2->recvcmsgbuf,
       VAR_2->recvcmsgbuflen);
 if (VAR_2->sendcmsgbuf != ((void*)0))
  FUNC_5(VAR_2->manager->mctx, VAR_2->sendcmsgbuf,
       VAR_2->sendcmsgbuflen);

 VAR_2->common.magic = 0;
 VAR_2->common.impmagic = 0;

 FUNC_0(&VAR_2->lock);

 FUNC_5(VAR_2->manager->mctx, VAR_2, sizeof(*VAR_2));

 *VAR_1 = ((void*)0);
}
