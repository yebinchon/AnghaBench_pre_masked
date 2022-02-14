
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reason; int depth; char const* subject; char const* reason_txt; struct wpabuf* cert; } ;
union tls_event_data {TYPE_1__ cert_fail; } ;
struct wpabuf {int dummy; } ;
struct tls_context {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;} ;
struct tls_connection {struct tls_context* context; } ;
typedef int ev ;
typedef enum tls_fail_reason { ____Placeholder_tls_fail_reason } tls_fail_reason ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (union tls_event_data*,int ,int) ;
 int FUNC_3 (int ,int ,union tls_event_data*) ;
 int FUNC_4 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_5(struct tls_connection *VAR_2,
       X509 *VAR_3, int VAR_4, int VAR_5,
       const char *VAR_6, const char *VAR_7,
       enum tls_fail_reason VAR_8)
{
 union tls_event_data VAR_9;
 struct wpabuf *VAR_10 = ((void*)0);
 struct tls_context *VAR_11 = VAR_2->context;

 if (VAR_11->event_cb == ((void*)0))
  return;

 VAR_10 = FUNC_0(VAR_3);
 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cert_fail.reason = VAR_8 != VAR_1 ?
  VAR_8 : FUNC_1(VAR_4);
 VAR_9.cert_fail.depth = VAR_5;
 VAR_9.cert_fail.subject = VAR_6;
 VAR_9.cert_fail.reason_txt = VAR_7;
 VAR_9.cert_fail.cert = VAR_10;
 VAR_11->event_cb(VAR_11->cb_ctx, VAR_0, &VAR_9);
 FUNC_4(VAR_10);
}
