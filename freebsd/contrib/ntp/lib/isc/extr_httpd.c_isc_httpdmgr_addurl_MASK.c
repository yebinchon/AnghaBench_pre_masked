
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_8__ {void* action_arg; int * action; int * url; } ;
typedef TYPE_1__ isc_httpdurl_t ;
struct TYPE_9__ {int urls; int mctx; int * render_404; } ;
typedef TYPE_2__ isc_httpdmgr_t ;
typedef int isc_httpdaction_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int * FUNC_4 (int ,char const*) ;
 int VAR_2 ;

isc_result_t
FUNC_5(isc_httpdmgr_t *VAR_3, const char *VAR_4,
      isc_httpdaction_t *VAR_5, void *VAR_6)
{
 isc_httpdurl_t *VAR_7;

 if (VAR_4 == ((void*)0)) {
  VAR_3->render_404 = VAR_5;
  return (VAR_1);
 }

 VAR_7 = FUNC_2(VAR_3->mctx, sizeof(isc_httpdurl_t));
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_7->url = FUNC_4(VAR_3->mctx, VAR_4);
 if (VAR_7->url == ((void*)0)) {
  FUNC_3(VAR_3->mctx, VAR_7, sizeof(isc_httpdurl_t));
  return (VAR_0);
 }

 VAR_7->action = VAR_5;
 VAR_7->action_arg = VAR_6;
 FUNC_0(VAR_7, VAR_2);
 FUNC_1(VAR_3->urls, VAR_7, VAR_2);

 return (VAR_1);
}
