
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int isc_mem_t ;
struct TYPE_9__ {int url; } ;
typedef TYPE_1__ isc_httpdurl_t ;
struct TYPE_10__ {int * mctx; int cb_arg; int (* ondestroy ) (int ) ;int lock; int urls; int * timermgr; int task; int sock; int running; } ;
typedef TYPE_2__ isc_httpdmgr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,TYPE_1__*,int) ;
 int FUNC_11 (int **,TYPE_2__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_0 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(isc_httpdmgr_t *VAR_1)
{
 isc_mem_t *VAR_2;
 isc_httpdurl_t *VAR_3;

 FUNC_0("httpdmgr_destroy");

 FUNC_5(&VAR_1->lock);

 if (!FUNC_6(VAR_1)) {
  FUNC_7("httpdmgr_destroy not shutting down yet");
  FUNC_8(&VAR_1->lock);
  return;
 }




 if (!FUNC_2(VAR_1->running)) {
  FUNC_7("httpdmgr_destroy clients still active");
  FUNC_8(&VAR_1->lock);
  return;
 }

 FUNC_7("httpdmgr_destroy detaching socket, task, and timermgr");

 FUNC_13(&VAR_1->sock);
 FUNC_14(&VAR_1->task);
 VAR_1->timermgr = ((void*)0);





 VAR_3 = FUNC_3(VAR_1->urls);
 while (VAR_3 != ((void*)0)) {
  FUNC_9(VAR_1->mctx, VAR_3->url);
  FUNC_4(VAR_1->urls, VAR_3, VAR_0);
  FUNC_10(VAR_1->mctx, VAR_3, sizeof(isc_httpdurl_t));
  VAR_3 = FUNC_3(VAR_1->urls);
 }

 FUNC_8(&VAR_1->lock);
 (void)FUNC_12(&VAR_1->lock);

 if (VAR_1->ondestroy != ((void*)0))
  (VAR_1->ondestroy)(VAR_1->cb_arg);

 VAR_2 = VAR_1->mctx;
 FUNC_11(&VAR_2, VAR_1, sizeof(isc_httpdmgr_t));

 FUNC_1("httpdmgr_destroy");
}
