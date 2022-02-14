
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_tls_data {TYPE_1__ ssl; int eap_type; } ;
struct eap_sm {int tls_session_lifetime; } ;


 int FUNC_0 (int ,struct wpabuf*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_0, struct eap_tls_data *VAR_1)
{
 struct wpabuf *VAR_2;

 if (!VAR_0->tls_session_lifetime)
  return;

 VAR_2 = FUNC_1(1);
 if (!VAR_2)
  return;
 FUNC_2(VAR_2, VAR_1->eap_type);
 FUNC_0(VAR_1->ssl.conn, VAR_2);
}
