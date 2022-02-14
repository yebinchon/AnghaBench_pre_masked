
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int volatile) ;
 int VAR_4 ;
 int FUNC_2 (char const*,int,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;

const char *
FUNC_8(void)
{
 const char *VAR_5 = "test_flopen_lock_child";
 const char *VAR_6 = ((void*)0);
 pid_t VAR_7;
 volatile int VAR_8, VAR_9;

 FUNC_7(VAR_5);
 VAR_8 = FUNC_2(VAR_5, VAR_2|VAR_0, 0640);
 if (VAR_8 < 0) {
  VAR_6 = FUNC_6(VAR_4);
 } else {
  VAR_7 = FUNC_3();
  if (VAR_7 == -1) {
   VAR_6 = FUNC_6(VAR_4);
  } else if (VAR_7 == 0) {
   FUNC_5(0, 0, 0, 0, 0);
   FUNC_0(0);
  }
  FUNC_1(VAR_8);
  if ((VAR_9 = FUNC_2(VAR_5, VAR_2|VAR_1)) != -1) {
   VAR_6 = "second open succeeded";
   FUNC_1(VAR_9);
  }
  FUNC_4(VAR_7, VAR_3);
 }
 FUNC_7(VAR_5);
 return (VAR_6);
}
