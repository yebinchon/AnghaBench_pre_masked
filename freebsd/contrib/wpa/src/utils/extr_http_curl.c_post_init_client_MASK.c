
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {char* svc_address; char* svc_ca_fname; char* svc_username; char* svc_password; char* svc_client_cert; char* svc_client_key; int * curl; } ;


 int FUNC_0 (char**,char const*) ;
 int * FUNC_1 (struct http_ctx*,char*,char const*,char const*,char const*,char const*,char const*) ;
 char FUNC_2 (char) ;

__attribute__((used)) static int FUNC_3(struct http_ctx *VAR_0, const char *VAR_1,
       const char *VAR_2, const char *VAR_3,
       const char *VAR_4, const char *VAR_5,
       const char *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 FUNC_0(&VAR_0->svc_address, VAR_1);
 FUNC_0(&VAR_0->svc_ca_fname, VAR_2);
 FUNC_0(&VAR_0->svc_username, VAR_3);
 FUNC_0(&VAR_0->svc_password, VAR_4);
 FUNC_0(&VAR_0->svc_client_cert, VAR_5);
 FUNC_0(&VAR_0->svc_client_key, VAR_6);





 for (VAR_8 = 0, VAR_7 = VAR_0->svc_address; VAR_8 < 3 && VAR_7 && *VAR_7;
      VAR_7++) {
  if (*VAR_7 == '/')
   VAR_8++;
  *VAR_7 = FUNC_2(*VAR_7);
 }

 VAR_0->curl = FUNC_1(VAR_0, VAR_0->svc_address, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6);
 if (VAR_0->curl == ((void*)0))
  return -1;

 return 0;
}
