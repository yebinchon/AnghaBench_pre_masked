
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ssh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 char* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_2, u_int32_t VAR_3, struct ssh *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_4(((void*)0));
 VAR_6 = FUNC_3();
 FUNC_1("client_input_global_request: rtype %s want_reply %d",
     VAR_5, VAR_6);
 if (FUNC_8(VAR_5, "hostkeys-00@openssh.com") == 0)
  VAR_7 = FUNC_0();
 if (VAR_6) {
  FUNC_6(VAR_7 ?
      VAR_1 : VAR_0);
  FUNC_5();
  FUNC_7();
 }
 FUNC_2(VAR_5);
 return 0;
}
