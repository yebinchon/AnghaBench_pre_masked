
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hash_len; int depth; char* subject; int * hash; struct wpabuf* cert; } ;
union tls_event_data {TYPE_2__ peer_cert; } ;
typedef int u8 ;
typedef int subject ;
struct x509_certificate {int subject; int cert_len; int cert_start; } ;
struct wpabuf {int dummy; } ;
struct tlsv1_client {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;scalar_t__ cert_in_cb; TYPE_1__* cred; } ;
typedef int hash ;
typedef int ev ;
struct TYPE_3__ {scalar_t__ cert_probe; } ;


 int VAR_0 ;
 int FUNC_0 (union tls_event_data*,int ,int) ;
 scalar_t__ FUNC_1 (int,int const**,size_t*,int *) ;
 int FUNC_2 (int ,int ,union tls_event_data*) ;
 struct wpabuf* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wpabuf*) ;
 int * FUNC_5 (struct wpabuf*) ;
 size_t FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (int *,char*,int) ;

__attribute__((used)) static void FUNC_8(struct tlsv1_client *VAR_1, int VAR_2,
    struct x509_certificate *VAR_3)
{
 union tls_event_data VAR_4;
 struct wpabuf *VAR_5 = ((void*)0);



 char VAR_6[128];

 if (!VAR_1->event_cb)
  return;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 if ((VAR_1->cred && VAR_1->cred->cert_probe) || VAR_1->cert_in_cb) {
  VAR_5 = FUNC_3(VAR_3->cert_start,
          VAR_3->cert_len);
  VAR_4.peer_cert.cert = VAR_5;
 }
 VAR_4.peer_cert.depth = VAR_2;
 FUNC_7(&VAR_3->subject, VAR_6, sizeof(VAR_6));
 VAR_4.peer_cert.subject = VAR_6;

 VAR_1->event_cb(VAR_1->cb_ctx, VAR_0, &VAR_4);
 FUNC_4(VAR_5);
}
