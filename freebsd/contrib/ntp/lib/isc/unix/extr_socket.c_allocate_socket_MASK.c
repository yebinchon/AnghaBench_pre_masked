
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct in6_pktinfo {int dummy; } ;
typedef int isc_sockettype_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_11__ {int mctx; } ;
typedef TYPE_2__ isc__socketmgr_t ;
struct TYPE_10__ {scalar_t__ impmagic; scalar_t__ magic; } ;
struct TYPE_12__ {int fd; int recvcmsgbuflen; int sendcmsgbuflen; struct TYPE_12__* sendcmsgbuf; struct TYPE_12__* recvcmsgbuf; TYPE_1__ common; int writable_ev; int readable_ev; int lock; scalar_t__ bound; scalar_t__ connecting; scalar_t__ connected; scalar_t__ listener; scalar_t__ pending_accept; scalar_t__ pending_send; scalar_t__ pending_recv; int * connect_ev; int accept_list; int send_list; int recv_list; int * tag; int name; int * statsindex; scalar_t__ dupped; int type; TYPE_2__* manager; scalar_t__ references; } ;
typedef TYPE_3__ isc__socket_t ;
typedef int intev_t ;
typedef int ISC_SOCKADDR_LEN_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int *,int ,int *,TYPE_3__*,TYPE_3__*,int *,int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc__socketmgr_t *VAR_8, isc_sockettype_t VAR_9,
  isc__socket_t **VAR_10)
{
 isc__socket_t *VAR_11;
 isc_result_t VAR_12;
 ISC_SOCKADDR_LEN_T VAR_13;

 VAR_11 = FUNC_4(VAR_8->mctx, sizeof(*VAR_11));

 if (VAR_11 == ((void*)0))
  return (VAR_2);

 VAR_11->common.magic = 0;
 VAR_11->common.impmagic = 0;
 VAR_11->references = 0;

 VAR_11->manager = VAR_8;
 VAR_11->type = VAR_9;
 VAR_11->fd = -1;
 VAR_11->dupped = 0;
 VAR_11->statsindex = ((void*)0);

 FUNC_1(VAR_11, VAR_7);

 VAR_11->recvcmsgbuf = ((void*)0);
 VAR_11->sendcmsgbuf = ((void*)0);




 VAR_13 = 0;






 VAR_11->recvcmsgbuflen = VAR_13;
 if (VAR_11->recvcmsgbuflen != 0U) {
  VAR_11->recvcmsgbuf = FUNC_4(VAR_8->mctx, VAR_13);
  if (VAR_11->recvcmsgbuf == ((void*)0)) {
   VAR_12 = VAR_2;
   goto error;
  }
 }

 VAR_13 = 0;
 VAR_11->sendcmsgbuflen = VAR_13;
 if (VAR_11->sendcmsgbuflen != 0U) {
  VAR_11->sendcmsgbuf = FUNC_4(VAR_8->mctx, VAR_13);
  if (VAR_11->sendcmsgbuf == ((void*)0)) {
   VAR_12 = VAR_2;
   goto error;
  }
 }

 FUNC_7(VAR_11->name, 0, sizeof(VAR_11->name));
 VAR_11->tag = ((void*)0);




 FUNC_2(VAR_11->recv_list);
 FUNC_2(VAR_11->send_list);
 FUNC_2(VAR_11->accept_list);
 VAR_11->connect_ev = ((void*)0);
 VAR_11->pending_recv = 0;
 VAR_11->pending_send = 0;
 VAR_11->pending_accept = 0;
 VAR_11->listener = 0;
 VAR_11->connected = 0;
 VAR_11->connecting = 0;
 VAR_11->bound = 0;




 VAR_12 = FUNC_6(&VAR_11->lock);
 if (VAR_12 != VAR_3) {
  VAR_11->common.magic = 0;
  VAR_11->common.impmagic = 0;
  goto error;
 }




 FUNC_0(&VAR_11->readable_ev, sizeof(intev_t),
         VAR_1, ((void*)0), VAR_4,
         ((void*)0), VAR_11, VAR_11, ((void*)0), ((void*)0));
 FUNC_0(&VAR_11->writable_ev, sizeof(intev_t),
         VAR_1, ((void*)0), VAR_5,
         ((void*)0), VAR_11, VAR_11, ((void*)0), ((void*)0));

 VAR_11->common.magic = VAR_0;
 VAR_11->common.impmagic = VAR_6;
 *VAR_10 = VAR_11;

 return (VAR_3);

 error:
 if (VAR_11->recvcmsgbuf != ((void*)0))
  FUNC_5(VAR_8->mctx, VAR_11->recvcmsgbuf,
       VAR_11->recvcmsgbuflen);
 if (VAR_11->sendcmsgbuf != ((void*)0))
  FUNC_5(VAR_8->mctx, VAR_11->sendcmsgbuf,
       VAR_11->sendcmsgbuflen);
 FUNC_5(VAR_8->mctx, VAR_11, sizeof(*VAR_11));

 return (VAR_12);
}
