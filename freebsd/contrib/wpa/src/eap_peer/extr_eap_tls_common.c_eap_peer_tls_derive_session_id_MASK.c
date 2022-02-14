
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tls_random {scalar_t__* client_random; scalar_t__* server_random; int client_random_len; int server_random_len; } ;
struct eap_ssl_data {int conn; scalar_t__ tls_v13; } ;
struct eap_sm {int ssl_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (struct eap_sm*,struct eap_ssl_data*,char*,scalar_t__ const*,int,int) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (int ,int ,struct tls_random*) ;

u8 * FUNC_5(struct eap_sm *VAR_1,
        struct eap_ssl_data *VAR_2, u8 VAR_3,
        size_t *VAR_4)
{
 struct tls_random VAR_5;
 u8 *VAR_6;

 if (VAR_3 == VAR_0 && VAR_2->tls_v13) {
  u8 *VAR_7, *VAR_8;
  const u8 VAR_9[] = { VAR_0 };





  *VAR_4 = 1 + 64;
  VAR_7 = FUNC_2(*VAR_4);
  if (!VAR_7)
   return ((void*)0);
  VAR_8 = FUNC_0(
   VAR_1, VAR_2, "EXPORTER_EAP_TLS_Method-Id", VAR_9, 1, 64);
  if (!VAR_8) {
   FUNC_1(VAR_7);
   return ((void*)0);
  }
  VAR_7[0] = VAR_3;
  FUNC_3(VAR_7 + 1, VAR_8, 64);
  FUNC_1(VAR_8);
  return VAR_7;
 }

 if (FUNC_4(VAR_1->ssl_ctx, VAR_2->conn, &VAR_5) ||
     VAR_5.client_random == ((void*)0) || VAR_5.server_random == ((void*)0))
  return ((void*)0);

 *VAR_4 = 1 + VAR_5.client_random_len + VAR_5.server_random_len;
 VAR_6 = FUNC_2(*VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);


 VAR_6[0] = VAR_3;
 FUNC_3(VAR_6 + 1, VAR_5.client_random, VAR_5.client_random_len);
 FUNC_3(VAR_6 + 1 + VAR_5.client_random_len, VAR_5.server_random,
    VAR_5.server_random_len);

 return VAR_6;
}
