
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; int mctx; int running; } ;
typedef TYPE_1__ isc_httpdmgr_t ;
struct TYPE_8__ {scalar_t__ headerlen; struct TYPE_8__* headerdata; int sock; TYPE_1__* mgr; } ;
typedef TYPE_2__ isc_httpd_t ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(isc_httpd_t **VAR_1)
{
 isc_httpd_t *VAR_2 = *VAR_1;
 isc_httpdmgr_t *VAR_3 = VAR_2->mgr;

 *VAR_1 = ((void*)0);

 FUNC_1(&VAR_3->lock);

 FUNC_5(&VAR_2->sock);
 FUNC_0(VAR_3->running, VAR_2, VAR_0);

 if (VAR_2->headerlen > 0)
  FUNC_4(VAR_3->mctx, VAR_2->headerdata,
       VAR_2->headerlen);

 FUNC_4(VAR_3->mctx, VAR_2, sizeof(isc_httpd_t));

 FUNC_2(&VAR_3->lock);

 FUNC_3(VAR_3);
}
