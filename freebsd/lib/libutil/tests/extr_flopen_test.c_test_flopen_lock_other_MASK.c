
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int volatile) ;
 int VAR_3 ;
 int FUNC_2 (char const*,int,...) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 () ;

const char *
FUNC_6(void)
{
 const char *VAR_4 = "test_flopen_lock_other";
 const char *VAR_5 = ((void*)0);
 volatile int VAR_6, VAR_7;

 FUNC_4(VAR_4);
 VAR_6 = FUNC_2(VAR_4, VAR_2|VAR_0, 0640);
 if (VAR_6 < 0) {
  VAR_5 = FUNC_3(VAR_3);
 } else {
  VAR_7 = -42;
  if (FUNC_5() == 0) {
   VAR_7 = FUNC_2(VAR_4, VAR_2|VAR_1);
   FUNC_1(VAR_7);
   FUNC_0(0);
  }
  if (VAR_7 == -42)
   VAR_5 = "vfork() doesn't work as expected";
  if (VAR_7 >= 0)
   VAR_5 = "second open succeeded";
  FUNC_1(VAR_6);
 }
 FUNC_4(VAR_4);
 return (VAR_5);
}
