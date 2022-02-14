
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int depth; int reason; char const* reason_txt; struct wpabuf* cert; } ;
struct TYPE_3__ {char* subject; } ;
union tls_event_data {TYPE_2__ cert_fail; TYPE_1__ peer_cert; } ;
typedef int subject ;
struct x509_certificate {int cert_len; int cert_start; int subject; } ;
struct wpabuf {int dummy; } ;
struct tlsv1_client {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;} ;
typedef int ev ;
typedef enum tls_fail_reason { ____Placeholder_tls_fail_reason } tls_fail_reason ;


 int VAR_0 ;
 int FUNC_0 (union tls_event_data*,int ,int) ;
 int FUNC_1 (int ,int ,union tls_event_data*) ;
 struct wpabuf* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void FUNC_5(struct tlsv1_client *VAR_1, int VAR_2,
      struct x509_certificate *VAR_3,
      enum tls_fail_reason VAR_4,
      const char *VAR_5)
{
 struct wpabuf *VAR_6 = ((void*)0);
 union tls_event_data VAR_7;
 char VAR_8[128];

 if (!VAR_1->event_cb || !VAR_3)
  return;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cert_fail.depth = VAR_2;
 FUNC_4(&VAR_3->subject, VAR_8, sizeof(VAR_8));
 VAR_7.peer_cert.subject = VAR_8;
 VAR_7.cert_fail.reason = VAR_4;
 VAR_7.cert_fail.reason_txt = VAR_5;
 VAR_6 = FUNC_2(VAR_3->cert_start,
         VAR_3->cert_len);
 VAR_7.cert_fail.cert = VAR_6;
 VAR_1->event_cb(VAR_1->cb_ctx, VAR_0, &VAR_7);
 FUNC_3(VAR_6);
}
