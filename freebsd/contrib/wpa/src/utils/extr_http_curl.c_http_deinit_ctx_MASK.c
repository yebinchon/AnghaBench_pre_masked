
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {struct http_ctx* svc_client_key; struct http_ctx* svc_client_cert; int svc_password; int svc_username; struct http_ctx* svc_ca_fname; struct http_ctx* svc_address; struct http_ctx* curl_buf; } ;


 int FUNC_0 (struct http_ctx*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct http_ctx*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct http_ctx *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->curl_buf);
 FUNC_1();

 FUNC_2(VAR_0->svc_address);
 FUNC_2(VAR_0->svc_ca_fname);
 FUNC_3(VAR_0->svc_username);
 FUNC_3(VAR_0->svc_password);
 FUNC_2(VAR_0->svc_client_cert);
 FUNC_2(VAR_0->svc_client_key);

 FUNC_2(VAR_0);
}
