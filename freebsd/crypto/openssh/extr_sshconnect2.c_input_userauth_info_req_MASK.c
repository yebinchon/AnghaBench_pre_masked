
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
struct ssh {TYPE_1__* authctxt; } ;
struct TYPE_2__ {int info_req_seen; } ;
typedef TYPE_1__ Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (struct ssh*,int) ;
 int FUNC_7 (struct ssh*,char**,int *) ;
 int FUNC_8 (struct ssh*) ;
 int FUNC_9 (struct ssh*,scalar_t__*) ;
 int FUNC_10 (struct ssh*,scalar_t__*) ;
 int FUNC_11 (struct ssh*,char*) ;
 int FUNC_12 (struct ssh*,scalar_t__) ;
 int FUNC_13 (struct ssh*) ;
 int FUNC_14 (struct ssh*,int ) ;
 scalar_t__ FUNC_15 (char*) ;

int
FUNC_16(int VAR_2, u_int32_t VAR_3, struct ssh *VAR_4)
{
 Authctxt *VAR_5 = VAR_4->authctxt;
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 u_char VAR_11 = 0;
 u_int VAR_12, VAR_13;
 int VAR_14;

 FUNC_0("input_userauth_info_req");

 if (VAR_5 == ((void*)0))
  FUNC_1("input_userauth_info_req: no authentication context");

 VAR_5->info_req_seen = 1;

 if ((VAR_14 = FUNC_7(VAR_4, &VAR_6, ((void*)0))) != 0 ||
     (VAR_14 = FUNC_7(VAR_4, &VAR_7, ((void*)0))) != 0 ||
     (VAR_14 = FUNC_7(VAR_4, &VAR_8, ((void*)0))) != 0)
  goto out;
 if (FUNC_15(VAR_6) > 0)
  FUNC_4("%s", VAR_6);
 if (FUNC_15(VAR_7) > 0)
  FUNC_4("%s", VAR_7);

 if ((VAR_14 = FUNC_9(VAR_4, &VAR_12)) != 0)
  goto out;






 if ((VAR_14 = FUNC_14(VAR_4, VAR_1)) != 0 ||
     (VAR_14 = FUNC_12(VAR_4, VAR_12)) != 0)
  goto out;

 FUNC_0("input_userauth_info_req: num_prompts %d", VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  if ((VAR_14 = FUNC_7(VAR_4, &VAR_9, ((void*)0))) != 0 ||
      (VAR_14 = FUNC_10(VAR_4, &VAR_11)) != 0)
   goto out;
  VAR_10 = FUNC_5(VAR_9, VAR_11 ? VAR_0 : 0);
  if ((VAR_14 = FUNC_11(VAR_4, VAR_10)) != 0)
   goto out;
  FUNC_3(VAR_10, FUNC_15(VAR_10));
  FUNC_2(VAR_9);
  VAR_10 = VAR_9 = ((void*)0);
 }

 if ((VAR_14 = FUNC_8(VAR_4)) != 0 ||
     (VAR_14 = FUNC_6(VAR_4, 64)) != 0)
  goto out;
 VAR_14 = FUNC_13(VAR_4);
 out:
 if (VAR_10)
  FUNC_3(VAR_10, FUNC_15(VAR_10));
 FUNC_2(VAR_9);
 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_14;
}
