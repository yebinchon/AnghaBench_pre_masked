
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {int svc_client_key; int svc_client_cert; int svc_password; int svc_username; int svc_ca_fname; int svc_address; } ;


 int FUNC_0 (struct http_ctx*) ;
 int FUNC_1 (char**,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct http_ctx*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct http_ctx *VAR_0)
{
 char *VAR_1 = ((void*)0);
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_0(VAR_0);

 FUNC_1(&VAR_1, VAR_0->svc_address);
 FUNC_1(&VAR_2, VAR_0->svc_ca_fname);
 FUNC_1(&VAR_3, VAR_0->svc_username);
 FUNC_1(&VAR_4, VAR_0->svc_password);
 FUNC_1(&VAR_5, VAR_0->svc_client_cert);
 FUNC_1(&VAR_6, VAR_0->svc_client_key);

 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6);
 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
 FUNC_4(VAR_4);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 return VAR_7;
}
