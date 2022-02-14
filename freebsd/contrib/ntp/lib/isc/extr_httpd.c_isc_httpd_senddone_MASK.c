
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_13__ {scalar_t__ result; int bufferlist; } ;
typedef TYPE_1__ isc_socketevent_t ;
struct TYPE_14__ {unsigned char* base; scalar_t__ length; } ;
typedef TYPE_2__ isc_region_t ;
struct TYPE_15__ {int flags; int sock; scalar_t__ recvbuf; int bodybuffer; int freecb_arg; int (* freecb ) (int *,int ) ;int headerbuffer; } ;
typedef TYPE_3__ isc_httpd_t ;
struct TYPE_16__ {TYPE_3__* ev_arg; } ;
typedef TYPE_4__ isc_event_t ;
typedef int isc_buffer_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__**) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__**) ;
 int VAR_3 ;
 int FUNC_11 (int ,TYPE_2__*,int,int *,int ,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static void
FUNC_14(isc_task_t *VAR_5, isc_event_t *VAR_6)
{
 isc_httpd_t *VAR_7 = VAR_6->ev_arg;
 isc_region_t VAR_8;
 isc_socketevent_t *VAR_9 = (isc_socketevent_t *)VAR_6;

 FUNC_0("senddone");
 FUNC_2(FUNC_3(VAR_7));






 FUNC_7("senddone unlinked header");
 FUNC_6(VAR_9->bufferlist, &VAR_7->headerbuffer, VAR_4);
 if (VAR_7->freecb != ((void*)0)) {
  isc_buffer_t *VAR_10 = ((void*)0);
  if (FUNC_9(&VAR_7->bodybuffer) > 0)
   VAR_10 = &VAR_7->bodybuffer;
  VAR_7->freecb(VAR_10, VAR_7->freecb_arg);
  FUNC_7("senddone free callback performed");
 }
 if (FUNC_5(&VAR_7->bodybuffer, VAR_4)) {
  FUNC_6(VAR_9->bufferlist, &VAR_7->bodybuffer, VAR_4);
  FUNC_7("senddone body buffer unlinked");
 }

 if (VAR_9->result != VAR_2) {
  FUNC_8(&VAR_7);
  goto out;
 }

 if ((VAR_7->flags & VAR_0) != 0) {
  FUNC_8(&VAR_7);
  goto out;
 }

 FUNC_4(VAR_7);

 FUNC_7("senddone restarting recv on socket");

 FUNC_12(VAR_7);

 VAR_8.base = (unsigned char *)VAR_7->recvbuf;
 VAR_8.length = VAR_1 - 1;

 (void)FUNC_11(VAR_7->sock, &VAR_8, 1, VAR_5,
         VAR_3, VAR_7);

out:
 FUNC_10(&VAR_6);
 FUNC_1("senddone");
}
