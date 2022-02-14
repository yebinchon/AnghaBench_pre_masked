
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct ssh {TYPE_1__* authctxt; } ;
struct TYPE_2__ {int success; } ;
typedef TYPE_1__ Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct ssh*,int ,int *) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(int VAR_3, u_int32_t VAR_4, struct ssh *VAR_5)
{
 Authctxt *VAR_6 = VAR_5->authctxt;
 u_int VAR_7;
 int VAR_8 = 0;
 char *VAR_9 = FUNC_5(&VAR_7);
 FUNC_3();

 if (VAR_6 == ((void*)0))
  FUNC_1("input_service_request: no authctxt");

 if (FUNC_11(VAR_9, "ssh-userauth") == 0) {
  if (!VAR_6->success) {
   VAR_8 = 1;

   FUNC_10(VAR_5, VAR_1, &VAR_2);
  }
 }


 if (VAR_8) {
  FUNC_8(VAR_0);
  FUNC_6(VAR_9);
  FUNC_7();
  FUNC_9();
 } else {
  FUNC_0("bad service request %s", VAR_9);
  FUNC_4("bad service request %s", VAR_9);
 }
 FUNC_2(VAR_9);
 return 0;
}
