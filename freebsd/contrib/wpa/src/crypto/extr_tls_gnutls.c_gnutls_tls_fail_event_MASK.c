
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; char const* subject; int reason; char const* reason_txt; struct wpabuf* cert; } ;
union tls_event_data {TYPE_1__ cert_fail; } ;
struct wpabuf {int dummy; } ;
struct tls_global {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;} ;
struct tls_connection {struct tls_global* global; } ;
struct TYPE_5__ {int size; int data; } ;
typedef TYPE_2__ gnutls_datum_t ;
typedef int ev ;
typedef enum tls_fail_reason { ____Placeholder_tls_fail_reason } tls_fail_reason ;


 int VAR_0 ;
 int FUNC_0 (union tls_event_data*,int ,int) ;
 int FUNC_1 (int ,int ,union tls_event_data*) ;
 struct wpabuf* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_4(struct tls_connection *VAR_1,
      const gnutls_datum_t *VAR_2, int VAR_3,
      const char *VAR_4, const char *VAR_5,
      enum tls_fail_reason VAR_6)
{
 union tls_event_data VAR_7;
 struct tls_global *VAR_8 = VAR_1->global;
 struct wpabuf *VAR_9 = ((void*)0);

 if (VAR_8->event_cb == ((void*)0))
  return;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cert_fail.depth = VAR_3;
 VAR_7.cert_fail.subject = VAR_4 ? VAR_4 : "";
 VAR_7.cert_fail.reason = VAR_6;
 VAR_7.cert_fail.reason_txt = VAR_5;
 if (VAR_2) {
  VAR_9 = FUNC_2(VAR_2->data, VAR_2->size);
  VAR_7.cert_fail.cert = VAR_9;
 }
 VAR_8->event_cb(VAR_8->cb_ctx, VAR_0, &VAR_7);
 FUNC_3(VAR_9);
}
