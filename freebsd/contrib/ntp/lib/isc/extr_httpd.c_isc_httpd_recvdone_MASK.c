
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int isc_time_t ;
typedef int isc_task_t ;
struct TYPE_25__ {scalar_t__ result; int n; } ;
typedef TYPE_2__ isc_socketevent_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_26__ {unsigned char* base; int length; } ;
typedef TYPE_3__ isc_region_t ;
struct TYPE_27__ {scalar_t__ (* action ) (int ,int ,int ,int *,int *,char**,int *,int *,int *) ;int action_arg; int url; } ;
typedef TYPE_4__ isc_httpdurl_t ;
struct TYPE_28__ {int recvlen; char* mimetype; int bufflist; int sock; int bodybuffer; int headerbuffer; int freecb_arg; int freecb; int retmsg; int retcode; int querystring; int url; TYPE_1__* mgr; scalar_t__ recvbuf; } ;
typedef TYPE_5__ isc_httpd_t ;
struct TYPE_29__ {TYPE_5__* ev_arg; } ;
typedef TYPE_6__ isc_event_t ;
typedef int datebuf ;
struct TYPE_24__ {scalar_t__ (* render_404 ) (int ,int ,int *,int *,int *,char**,int *,int *,int *) ;scalar_t__ (* render_500 ) (int ,int ,int *,int *,int *,char**,int *,int *,int *) ;int urls; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int *,int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__**) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_6__**) ;
 int FUNC_15 (TYPE_5__*,char*,char*) ;
 int FUNC_16 (TYPE_5__*,char*,int ) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_19 (int ,TYPE_3__*,int,int *,void (*) (int *,TYPE_6__*),TYPE_5__*) ;
 int FUNC_20 (int ,int *,int *,int ,TYPE_5__*) ;
 int FUNC_21 (int *,char*,int) ;
 int FUNC_22 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_23 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_24 (int ,int ) ;
 scalar_t__ FUNC_25 (int ,int ,int *,int *,int *,char**,int *,int *,int *) ;
 scalar_t__ FUNC_26 (int ,int ,int ,int *,int *,char**,int *,int *,int *) ;
 scalar_t__ FUNC_27 (int ,int ,int *,int *,int *,char**,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_28(isc_task_t *VAR_5, isc_event_t *VAR_6)
{
 isc_region_t VAR_7;
 isc_result_t VAR_8;
 isc_httpd_t *VAR_9 = VAR_6->ev_arg;
 isc_socketevent_t *VAR_10 = (isc_socketevent_t *)VAR_6;
 isc_httpdurl_t *VAR_11;
 isc_time_t VAR_12;
 char VAR_13[32];

 FUNC_0("recv");

 FUNC_2(FUNC_3(VAR_9));

 if (VAR_10->result != VAR_2) {
  FUNC_8("recv destroying client");
  FUNC_10(&VAR_9);
  goto out;
 }

 VAR_8 = FUNC_23(VAR_9, VAR_10->n);
 if (VAR_8 == VAR_1) {
  if (VAR_9->recvlen >= VAR_0 - 1) {
   FUNC_10(&VAR_9);
   goto out;
  }
  VAR_7.base = (unsigned char *)VAR_9->recvbuf + VAR_9->recvlen;
  VAR_7.length = VAR_0 - VAR_9->recvlen - 1;

  (void)FUNC_19(VAR_9->sock, &VAR_7, 1, VAR_5,
          FUNC_28, VAR_9);
  goto out;
 } else if (VAR_8 != VAR_2) {
  FUNC_10(&VAR_9);
  goto out;
 }

 FUNC_4(VAR_9);





 FUNC_11(&VAR_9->bodybuffer);
 FUNC_22(&VAR_12);
 FUNC_21(&VAR_12, VAR_13, sizeof(VAR_13));
 VAR_11 = FUNC_6(VAR_9->mgr->urls);
 while (VAR_11 != ((void*)0)) {
  if (FUNC_24(VAR_9->url, VAR_11->url) == 0)
   break;
  VAR_11 = FUNC_7(VAR_11, VAR_4);
 }
 if (VAR_11 == ((void*)0))
  VAR_8 = VAR_9->mgr->render_404(VAR_9->url, VAR_9->querystring,
      ((void*)0),
      &VAR_9->retcode,
      &VAR_9->retmsg,
      &VAR_9->mimetype,
      &VAR_9->bodybuffer,
      &VAR_9->freecb,
      &VAR_9->freecb_arg);
 else
  VAR_8 = VAR_11->action(VAR_9->url, VAR_9->querystring,
         VAR_11->action_arg,
         &VAR_9->retcode, &VAR_9->retmsg,
         &VAR_9->mimetype, &VAR_9->bodybuffer,
         &VAR_9->freecb, &VAR_9->freecb_arg);
 if (VAR_8 != VAR_2) {
  VAR_8 = VAR_9->mgr->render_500(VAR_9->url, VAR_9->querystring,
      ((void*)0), &VAR_9->retcode,
      &VAR_9->retmsg,
      &VAR_9->mimetype,
      &VAR_9->bodybuffer,
      &VAR_9->freecb,
      &VAR_9->freecb_arg);
  FUNC_9(VAR_8 == VAR_2);
 }

 FUNC_18(VAR_9);
 FUNC_15(VAR_9, "Content-Type", VAR_9->mimetype);
 FUNC_15(VAR_9, "Date", VAR_13);
 FUNC_15(VAR_9, "Expires", VAR_13);
 FUNC_15(VAR_9, "Last-Modified", VAR_13);
 FUNC_15(VAR_9, "Pragma: no-cache", ((void*)0));
 FUNC_15(VAR_9, "Cache-Control: no-cache", ((void*)0));
 FUNC_15(VAR_9, "Server: libisc", ((void*)0));
 FUNC_16(VAR_9, "Content-Length",
    FUNC_13(&VAR_9->bodybuffer));
 FUNC_17(VAR_9);

 FUNC_5(VAR_9->bufflist, &VAR_9->headerbuffer, VAR_4);





 if (FUNC_12(&VAR_9->bodybuffer) > 0)
  FUNC_5(VAR_9->bufflist, &VAR_9->bodybuffer, VAR_4);


 (void)FUNC_20(VAR_9->sock, &VAR_9->bufflist, VAR_5,
          VAR_3, VAR_9);

 out:
 FUNC_14(&VAR_6);
 FUNC_1("recv");
}
