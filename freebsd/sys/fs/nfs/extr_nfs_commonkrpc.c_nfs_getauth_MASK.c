
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct nfssockreq {int nr_client; } ;
typedef int rpc_gss_service_t ;
typedef int gss_OID ;
typedef int AUTH ;






 int * FUNC_0 (struct ucred*) ;
 int FUNC_1 (char*,int *) ;
 int * FUNC_2 (int ,struct ucred*,char*,char*,char*,int ,int *,int *,int *) ;
 int * FUNC_3 (int ,struct ucred*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static AUTH *
FUNC_4(struct nfssockreq *VAR_3, int VAR_4, char *VAR_5,
    char *VAR_6, gss_OID VAR_7, struct ucred *VAR_8)
{
 rpc_gss_service_t VAR_9;
 AUTH *VAR_10;

 switch (VAR_4) {
 case 130:
 case 129:
 case 128:
  if (!VAR_7) {
   if (!FUNC_1("kerberosv5", &VAR_7))
    return (((void*)0));
  }
  if (VAR_4 == 130)
   VAR_9 = VAR_1;
  else if (VAR_4 == 129)
   VAR_9 = VAR_0;
  else
   VAR_9 = VAR_2;

  if (VAR_5 == ((void*)0))
   VAR_10 = FUNC_3(VAR_3->nr_client, VAR_8,
       VAR_6, VAR_7, VAR_9);
  else {
   VAR_10 = FUNC_2(VAR_3->nr_client, VAR_8,
       VAR_5, VAR_6, "kerberosv5",
       VAR_9, ((void*)0), ((void*)0), ((void*)0));
   return (VAR_10);
  }
  if (VAR_10 != ((void*)0))
   return (VAR_10);

 case 131:
 default:
  return (FUNC_0(VAR_8));

 }
}
