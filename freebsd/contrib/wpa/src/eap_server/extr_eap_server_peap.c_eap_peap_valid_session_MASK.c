
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int identity_len; int identity; int ssl_ctx; int tls_session_lifetime; } ;
struct TYPE_2__ {int conn; } ;
struct eap_peap_data {TYPE_1__ ssl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct wpabuf*) ;
 struct wpabuf* FUNC_2 (int) ;
 int FUNC_3 (struct wpabuf*,int ,int) ;
 int FUNC_4 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_5(struct eap_sm *VAR_1,
       struct eap_peap_data *VAR_2)
{
 struct wpabuf *VAR_3;

 if (!VAR_1->tls_session_lifetime ||
     FUNC_0(VAR_1->ssl_ctx, VAR_2->ssl.conn))
  return;

 VAR_3 = FUNC_2(1 + 1 + VAR_1->identity_len);
 if (!VAR_3)
  return;
 FUNC_4(VAR_3, VAR_0);
 if (VAR_1->identity) {
  u8 VAR_4;

  if (VAR_1->identity_len <= 255)
   VAR_4 = VAR_1->identity_len;
  else
   VAR_4 = 255;
  FUNC_4(VAR_3, VAR_4);
  FUNC_3(VAR_3, VAR_1->identity, VAR_4);
 } else {
  FUNC_4(VAR_3, 0);
 }
 FUNC_1(VAR_2->ssl.conn, VAR_3);
}
