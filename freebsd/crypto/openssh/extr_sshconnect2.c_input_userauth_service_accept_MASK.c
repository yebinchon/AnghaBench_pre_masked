
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ssh {int * authctxt; } ;
typedef int Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ssh*,int ,int *) ;
 scalar_t__ FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*,char**,int *) ;
 int FUNC_6 (struct ssh*) ;
 int FUNC_7 (int *) ;

int
FUNC_8(int VAR_8, u_int32_t VAR_9, struct ssh *VAR_10)
{
 Authctxt *VAR_11 = VAR_10->authctxt;
 int VAR_12;

 if (FUNC_4(VAR_10) > 0) {
  char *VAR_13;

  if ((VAR_12 = FUNC_5(VAR_10, &VAR_13, ((void*)0))) != 0)
   goto out;
  FUNC_1("service_accept: %s", VAR_13);
  FUNC_2(VAR_13);
 } else {
  FUNC_1("buggy server: service_accept w/o service");
 }
 if ((VAR_12 = FUNC_6(VAR_10)) != 0)
  goto out;
 FUNC_0("SSH2_MSG_SERVICE_ACCEPT received");


 FUNC_7(VAR_11);

 FUNC_3(VAR_10, VAR_0, &VAR_5);
 FUNC_3(VAR_10, VAR_3, &VAR_7);
 FUNC_3(VAR_10, VAR_2, &VAR_6);
 FUNC_3(VAR_10, VAR_1, &VAR_4);
 VAR_12 = 0;
 out:
 return VAR_12;
}
