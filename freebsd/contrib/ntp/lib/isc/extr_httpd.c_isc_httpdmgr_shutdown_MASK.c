
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lock; int task; int running; int sock; } ;
typedef TYPE_1__ isc_httpdmgr_t ;
struct TYPE_9__ {int sock; } ;
typedef TYPE_2__ isc_httpd_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_1 ;

void
FUNC_8(isc_httpdmgr_t **VAR_2)
{
 isc_httpdmgr_t *VAR_3;
 isc_httpd_t *VAR_4;
 VAR_3 = *VAR_2;
 *VAR_2 = ((void*)0);

 FUNC_0("isc_httpdmgr_shutdown");

 FUNC_4(&VAR_3->lock);

 FUNC_5(VAR_3);

 FUNC_7(VAR_3->sock, VAR_3->task, VAR_0);

 VAR_4 = FUNC_2(VAR_3->running);
 while (VAR_4 != ((void*)0)) {
  FUNC_7(VAR_4->sock, VAR_3->task,
      VAR_0);
  VAR_4 = FUNC_3(VAR_4, VAR_1);
 }

 FUNC_6(&VAR_3->lock);

 FUNC_1("isc_httpdmgr_shutdown");
}
