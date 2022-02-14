
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_lst {int var; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct env_lst* FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,unsigned char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;

void
FUNC_6(unsigned char *VAR_3)
{
 struct env_lst *VAR_4;

 if (FUNC_5(VAR_0)



  ) {
  FUNC_4(VAR_2,
      "Cannot send '%s': Telnet ENVIRON option not enabled\r\n",
         VAR_3);
  return;
 }
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == 0) {
  FUNC_4(VAR_2, "Cannot send '%s': variable not defined\r\n",
         VAR_3);
  return;
 }
 FUNC_3();
 FUNC_1(VAR_4->var);
 FUNC_2(0);
}
