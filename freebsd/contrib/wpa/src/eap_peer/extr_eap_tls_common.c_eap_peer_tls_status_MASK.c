
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
struct eap_ssl_data {int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
typedef int name ;


 int FUNC_0 (char*,size_t,char*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int) ;

int FUNC_5(struct eap_sm *VAR_0, struct eap_ssl_data *VAR_1,
   char *VAR_2, size_t VAR_3, int VAR_4)
{
 char VAR_5[20], VAR_6[128];
 int VAR_7 = 0, VAR_8;

 if (FUNC_4(VAR_1->ssl_ctx, VAR_1->conn, VAR_5,
       sizeof(VAR_5)) < 0)
  VAR_5[0] = '\0';
 if (FUNC_3(VAR_1->ssl_ctx, VAR_1->conn, VAR_6, sizeof(VAR_6)) < 0)
  VAR_6[0] = '\0';

 VAR_8 = FUNC_0(VAR_2 + VAR_7, VAR_3 - VAR_7,
     "eap_tls_version=%s\n"
     "EAP TLS cipher=%s\n"
     "tls_session_reused=%d\n",
     VAR_5, VAR_6,
     FUNC_2(VAR_1->ssl_ctx, VAR_1->conn));
 if (FUNC_1(VAR_3 - VAR_7, VAR_8))
  return VAR_7;
 VAR_7 += VAR_8;

 return VAR_7;
}
