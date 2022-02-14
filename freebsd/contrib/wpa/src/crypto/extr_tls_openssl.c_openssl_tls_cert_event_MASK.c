
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hash_len; int depth; char const* subject; char* serial_num; char** altsubject; int num_altsubject; int tod; int * hash; struct wpabuf* cert; } ;
union tls_event_data {TYPE_3__ peer_cert; } ;
typedef int u8 ;
struct wpabuf {int dummy; } ;
struct tls_context {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;scalar_t__ cert_in_cb; } ;
struct tls_connection {int flags; scalar_t__ cert_probe; struct tls_context* context; } ;
typedef scalar_t__ stack_index_t ;
typedef int serial_num ;
typedef int hash ;
typedef int ev ;
typedef int X509 ;
struct TYPE_7__ {TYPE_1__* ia5; } ;
struct TYPE_9__ {int type; TYPE_2__ d; } ;
struct TYPE_6__ {int length; char* data; } ;
typedef TYPE_4__ GENERAL_NAME ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int *,int ,int *,int *) ;
 int * FUNC_3 (int *) ;
 struct wpabuf* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (union tls_event_data*,int ,int) ;
 scalar_t__ FUNC_10 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_11 (void*) ;
 int FUNC_12 (void*,int ) ;
 TYPE_4__* FUNC_13 (void*,scalar_t__) ;
 int FUNC_14 (int ,int ,union tls_event_data*) ;
 int FUNC_15 (char*,int,int ,int ) ;
 int FUNC_16 (struct wpabuf*) ;
 int * FUNC_17 (struct wpabuf*) ;
 size_t FUNC_18 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_19(struct tls_connection *VAR_5,
       X509 *VAR_6, int VAR_7,
       const char *VAR_8)
{
 struct wpabuf *VAR_9 = ((void*)0);
 union tls_event_data VAR_10;
 struct tls_context *VAR_11 = VAR_5->context;
 char *VAR_12[VAR_3];
 int VAR_13, VAR_14 = 0;
 GENERAL_NAME *VAR_15;
 void *VAR_16;
 stack_index_t VAR_17;
 ASN1_INTEGER *VAR_18;
 char VAR_19[128];




 if (VAR_11->event_cb == ((void*)0))
  return;

 FUNC_9(&VAR_10, 0, sizeof(VAR_10));
 if (VAR_5->cert_probe || (VAR_5->flags & VAR_2) ||
     VAR_11->cert_in_cb) {
  VAR_9 = FUNC_4(VAR_6);
  VAR_10.peer_cert.cert = VAR_9;
 }
 VAR_10.peer_cert.depth = VAR_7;
 VAR_10.peer_cert.subject = VAR_8;

 VAR_18 = FUNC_3(VAR_6);
 if (VAR_18) {
  FUNC_15(VAR_19, sizeof(VAR_19),
        FUNC_0(VAR_18),
        FUNC_1(VAR_18));
  VAR_10.peer_cert.serial_num = VAR_19;
 }

 VAR_16 = FUNC_2(VAR_6, VAR_1, ((void*)0), ((void*)0));
 for (VAR_17 = 0; VAR_16 && VAR_17 < FUNC_11(VAR_16); VAR_17++) {
  char *VAR_20;

  if (VAR_14 == VAR_3)
   break;
  VAR_15 = FUNC_13(VAR_16, VAR_17);
  if (VAR_15->type != 129 &&
      VAR_15->type != 130 &&
      VAR_15->type != 128)
   continue;

  VAR_20 = FUNC_7(10 + VAR_15->d.ia5->length + 1);
  if (VAR_20 == ((void*)0))
   break;
  VAR_12[VAR_14++] = VAR_20;

  switch (VAR_15->type) {
  case 129:
   FUNC_8(VAR_20, "EMAIL:", 6);
   VAR_20 += 6;
   break;
  case 130:
   FUNC_8(VAR_20, "DNS:", 4);
   VAR_20 += 4;
   break;
  case 128:
   FUNC_8(VAR_20, "URI:", 4);
   VAR_20 += 4;
   break;
  }

  FUNC_8(VAR_20, VAR_15->d.ia5->data, VAR_15->d.ia5->length);
  VAR_20 += VAR_15->d.ia5->length;
  *VAR_20 = '\0';
 }
 FUNC_12(VAR_16, VAR_0);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  VAR_10.peer_cert.altsubject[VAR_13] = VAR_12[VAR_13];
 VAR_10.peer_cert.num_altsubject = VAR_14;

 VAR_10.peer_cert.tod = FUNC_5(VAR_6);

 VAR_11->event_cb(VAR_11->cb_ctx, VAR_4, &VAR_10);
 FUNC_16(VAR_9);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_6(VAR_12[VAR_13]);
}
