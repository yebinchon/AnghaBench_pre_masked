
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ssh {TYPE_2__* authctxt; } ;
typedef int prompt ;
struct TYPE_6__ {char* host_key_alias; } ;
struct TYPE_5__ {char* host; char* server_user; char* service; TYPE_1__* method; } ;
struct TYPE_4__ {char* name; } ;
typedef TYPE_2__ Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 TYPE_3__ VAR_3 ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,char*,char*,char const*) ;
 int FUNC_7 (struct ssh*,int ,int (*) (int,int ,struct ssh*)) ;
 int FUNC_8 (struct ssh*,int) ;
 int FUNC_9 (struct ssh*,char**,int *) ;
 int FUNC_10 (struct ssh*,char*) ;
 int FUNC_11 (struct ssh*,int) ;
 int FUNC_12 (struct ssh*) ;
 int FUNC_13 (struct ssh*,int ) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;

int
FUNC_16(int VAR_4, u_int32_t VAR_5, struct ssh *VAR_6)
{
 Authctxt *VAR_7 = VAR_6->authctxt;
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 char VAR_12[256];
 const char *VAR_13;
 int VAR_14;

 FUNC_0("input_userauth_passwd_changereq");

 if (VAR_7 == ((void*)0))
  FUNC_1("input_userauth_passwd_changereq: "
      "no authentication context");
 VAR_13 = VAR_3.host_key_alias ? VAR_3.host_key_alias : VAR_7->host;

 if ((VAR_14 = FUNC_9(VAR_6, &VAR_8, ((void*)0))) != 0 ||
     (VAR_14 = FUNC_9(VAR_6, &VAR_9, ((void*)0))) != 0)
  goto out;
 if (FUNC_15(VAR_8) > 0)
  FUNC_4("%s", VAR_8);
 if ((VAR_14 = FUNC_13(VAR_6, VAR_2)) != 0 ||
     (VAR_14 = FUNC_10(VAR_6, VAR_7->server_user)) != 0 ||
     (VAR_14 = FUNC_10(VAR_6, VAR_7->service)) != 0 ||
     (VAR_14 = FUNC_10(VAR_6, VAR_7->method->name)) != 0 ||
     (VAR_14 = FUNC_11(VAR_6, 1)) != 0)
  goto out;

 FUNC_6(VAR_12, sizeof(VAR_12),
     "Enter %.30s@%.128s's old password: ",
     VAR_7->server_user, VAR_13);
 VAR_10 = FUNC_5(VAR_12, 0);
 if ((VAR_14 = FUNC_10(VAR_6, VAR_10)) != 0)
  goto out;

 FUNC_3(VAR_10, FUNC_15(VAR_10));
 VAR_10 = ((void*)0);
 while (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_12, sizeof(VAR_12),
      "Enter %.30s@%.128s's new password: ",
      VAR_7->server_user, VAR_13);
  VAR_10 = FUNC_5(VAR_12, VAR_0);
  if (VAR_10 == ((void*)0)) {

   VAR_14 = 0;
   goto out;
  }
  FUNC_6(VAR_12, sizeof(VAR_12),
      "Retype %.30s@%.128s's new password: ",
      VAR_7->server_user, VAR_13);
  VAR_11 = FUNC_5(VAR_12, 0);
  if (FUNC_14(VAR_10, VAR_11) != 0) {
   FUNC_3(VAR_10, FUNC_15(VAR_10));
   FUNC_4("Mismatch; try again, EOF to quit.");
   VAR_10 = ((void*)0);
  }
  FUNC_3(VAR_11, FUNC_15(VAR_11));
 }
 if ((VAR_14 = FUNC_10(VAR_6, VAR_10)) != 0 ||
     (VAR_14 = FUNC_8(VAR_6, 64)) != 0 ||
     (VAR_14 = FUNC_12(VAR_6)) != 0)
  goto out;

 FUNC_7(VAR_6, VAR_1,
     &FUNC_16);
 VAR_14 = 0;
 out:
 if (VAR_10)
  FUNC_3(VAR_10, FUNC_15(VAR_10));
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 return VAR_14;
}
