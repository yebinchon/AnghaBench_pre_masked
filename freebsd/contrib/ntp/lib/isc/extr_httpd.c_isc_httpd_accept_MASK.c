
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_19__ {scalar_t__ result; int newsocket; } ;
typedef TYPE_1__ isc_socket_newconnev_t ;
typedef int isc_sockaddr_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_20__ {unsigned char* base; scalar_t__ length; } ;
typedef TYPE_2__ isc_region_t ;
struct TYPE_21__ {int lock; int sock; int mctx; int running; int cb_arg; int (* client_ok ) (int *,int ) ;} ;
typedef TYPE_3__ isc_httpdmgr_t ;
struct TYPE_22__ {int headerlen; int sock; scalar_t__ recvbuf; int bodybuffer; int bufflist; int * headerdata; int headerbuffer; scalar_t__ flags; TYPE_3__* mgr; } ;
typedef TYPE_4__ isc_httpd_t ;
struct TYPE_23__ {TYPE_3__* ev_arg; } ;
typedef TYPE_5__ isc_event_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ,TYPE_4__*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_5__**) ;
 int VAR_4 ;
 void* FUNC_15 (int ,int) ;
 int FUNC_16 (int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_17 (int ,int *,void (*) (int *,TYPE_5__*),TYPE_3__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,TYPE_2__*,int,int *,int ,TYPE_4__*) ;
 int FUNC_21 (int ,char*,int *) ;
 int VAR_5 ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (int *,int ) ;

__attribute__((used)) static void
FUNC_24(isc_task_t *VAR_6, isc_event_t *VAR_7)
{
 isc_result_t VAR_8;
 isc_httpdmgr_t *VAR_9 = VAR_7->ev_arg;
 isc_httpd_t *VAR_10;
 isc_region_t VAR_11;
 isc_socket_newconnev_t *VAR_12 = (isc_socket_newconnev_t *)VAR_7;
 isc_sockaddr_t VAR_13;

 FUNC_0("accept");

 FUNC_6(&VAR_9->lock);
 if (FUNC_7(VAR_9)) {
  FUNC_8("accept shutting down, goto out");
  goto out;
 }

 if (VAR_12->result == VAR_2) {
  FUNC_8("accept canceled, goto out");
  goto out;
 }

 if (VAR_12->result != VAR_3) {

  FUNC_8("accept returned failure, goto requeue");
  goto requeue;
 }

 (void)FUNC_19(VAR_12->newsocket, &VAR_13);
 if (VAR_9->client_ok != ((void*)0) &&
     !(VAR_9->client_ok)(&VAR_13, VAR_9->cb_arg)) {
  FUNC_18(&VAR_12->newsocket);
  goto requeue;
 }

 VAR_10 = FUNC_15(VAR_9->mctx, sizeof(isc_httpd_t));
 if (VAR_10 == ((void*)0)) {

  FUNC_8("accept failed to allocate memory, goto requeue");
  FUNC_18(&VAR_12->newsocket);
  goto requeue;
 }

 VAR_10->mgr = VAR_9;
 FUNC_3(VAR_10, VAR_5);
 FUNC_4(VAR_9->running, VAR_10, VAR_5);
 FUNC_2(VAR_10);
 VAR_10->sock = VAR_12->newsocket;
 FUNC_21(VAR_10->sock, "httpd", ((void*)0));
 VAR_10->flags = 0;




 VAR_10->headerdata = FUNC_15(VAR_9->mctx, VAR_1);
 if (VAR_10->headerdata == ((void*)0)) {
  FUNC_16(VAR_9->mctx, VAR_10, sizeof(isc_httpd_t));
  FUNC_18(&VAR_12->newsocket);
  goto requeue;
 }
 VAR_10->headerlen = VAR_1;
 FUNC_12(&VAR_10->headerbuffer, VAR_10->headerdata,
   VAR_10->headerlen);

 FUNC_5(VAR_10->bufflist);

 FUNC_13(&VAR_10->bodybuffer);
 FUNC_22(VAR_10);

 VAR_11.base = (unsigned char *)VAR_10->recvbuf;
 VAR_11.length = VAR_0 - 1;
 VAR_8 = FUNC_20(VAR_10->sock, &VAR_11, 1, VAR_6, VAR_4,
     VAR_10);

 FUNC_9(VAR_8);
 FUNC_8("accept queued recv on socket");

 requeue:
 VAR_8 = FUNC_17(VAR_9->sock, VAR_6, FUNC_24,
       VAR_9);
 if (VAR_8 != VAR_3) {

  FUNC_8("accept could not reaccept due to failure");
 }

 out:
 FUNC_10(&VAR_9->lock);

 FUNC_11(VAR_9);

 FUNC_14(&VAR_7);

 FUNC_1("accept");
}
