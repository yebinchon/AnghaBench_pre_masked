
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash_len; int depth; char const* subject; char** altsubject; int num_altsubject; int * hash; struct wpabuf* cert; } ;
union tls_event_data {TYPE_1__ peer_cert; } ;
typedef int u8 ;
struct wpabuf {int dummy; } ;
struct tls_context {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;scalar_t__ cert_in_cb; } ;
struct tls_connection {int flags; scalar_t__ cert_probe; struct tls_context* context; } ;
typedef int hash ;
typedef int ev ;
typedef int WOLFSSL_X509 ;
struct TYPE_5__ {int type; char* obj; } ;
typedef TYPE_2__ WOLFSSL_ASN1_OBJECT ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (union tls_event_data*,int ,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,int const**,size_t*,int *) ;
 int FUNC_7 (int ,int ,union tls_event_data*) ;
 void* FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 TYPE_2__* FUNC_11 (void*,int) ;
 int FUNC_12 (struct wpabuf*) ;
 int * FUNC_13 (struct wpabuf*) ;
 size_t FUNC_14 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_15(struct tls_connection *VAR_4,
       WOLFSSL_X509 *VAR_5, int VAR_6,
       const char *VAR_7)
{
 struct wpabuf *VAR_8 = ((void*)0);
 union tls_event_data VAR_9;
 struct tls_context *VAR_10 = VAR_4->context;
 char *VAR_11[VAR_2];
 int VAR_12, VAR_13 = 0;
 WOLFSSL_ASN1_OBJECT *VAR_14;
 void *VAR_15;
 int VAR_16;




 if (!VAR_10->event_cb)
  return;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_4->cert_probe || (VAR_4->flags & VAR_1) ||
     VAR_10->cert_in_cb) {
  VAR_8 = FUNC_0(VAR_5);
  VAR_9.peer_cert.cert = VAR_8;
 }
 VAR_9.peer_cert.depth = VAR_6;
 VAR_9.peer_cert.subject = VAR_7;

 VAR_15 = FUNC_8(VAR_5, VAR_0, ((void*)0), ((void*)0));
 for (VAR_16 = 0; VAR_15 && VAR_16 < FUNC_10(VAR_15); VAR_16++) {
  char *VAR_17;

  if (VAR_13 == VAR_2)
   break;
  VAR_14 = FUNC_11((void *) VAR_15, VAR_16);
  if (VAR_14->type != 129 &&
      VAR_14->type != 130 &&
      VAR_14->type != 128)
   continue;

  VAR_17 = FUNC_2(10 + FUNC_5((char *) VAR_14->obj) + 1);
  if (!VAR_17)
   break;
  VAR_11[VAR_13++] = VAR_17;

  switch (VAR_14->type) {
  case 129:
   FUNC_3(VAR_17, "EMAIL:", 6);
   VAR_17 += 6;
   break;
  case 130:
   FUNC_3(VAR_17, "DNS:", 4);
   VAR_17 += 4;
   break;
  case 128:
   FUNC_3(VAR_17, "URI:", 4);
   VAR_17 += 4;
   break;
  }

  FUNC_3(VAR_17, VAR_14->obj, FUNC_5((char *)VAR_14->obj));
  VAR_17 += FUNC_5((char *)VAR_14->obj);
  *VAR_17 = '\0';
 }
 FUNC_9(VAR_15);

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  VAR_9.peer_cert.altsubject[VAR_12] = VAR_11[VAR_12];
 VAR_9.peer_cert.num_altsubject = VAR_13;

 VAR_10->event_cb(VAR_10->cb_ctx, VAR_3, &VAR_9);
 FUNC_12(VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  FUNC_1(VAR_11[VAR_12]);
}
