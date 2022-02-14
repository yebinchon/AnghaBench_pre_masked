
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_char ;
struct ssh {int * authctxt; } ;
typedef int Authctxt ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ssh*,char**,int *) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (struct ssh*,scalar_t__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_0, u_int32_t VAR_1, struct ssh *VAR_2)
{
 Authctxt *VAR_3 = VAR_2->authctxt;
 char *VAR_4 = ((void*)0);
 u_char VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  FUNC_1("input_userauth_failure: no authentication context");

 if ((VAR_6 = FUNC_4(VAR_2, &VAR_4, ((void*)0))) != 0 ||
     (VAR_6 = FUNC_6(VAR_2, &VAR_5)) != 0 ||
     (VAR_6 = FUNC_5(VAR_2)) != 0)
  goto out;

 if (VAR_5 != 0) {
  FUNC_8("Authenticated with partial success.");

  FUNC_3(VAR_3);
 }
 FUNC_0("Authentications that can continue: %s", VAR_4);

 FUNC_7(VAR_3, VAR_4);
 VAR_4 = ((void*)0);
 out:
 FUNC_2(VAR_4);
 return 0;
}
