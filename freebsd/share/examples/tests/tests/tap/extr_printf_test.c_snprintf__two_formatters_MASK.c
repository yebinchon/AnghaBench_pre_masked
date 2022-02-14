
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char VAR_0[128];

 if (FUNC_3(VAR_0, sizeof(VAR_0), "%s, %s!", "Hello",
     "tests") <= 0) {
  FUNC_0("snprintf with two formatters failed");
  FUNC_2(1);
 } else {
  FUNC_1();
  if (FUNC_4(VAR_0, "Hello, tests!") != 0)
   FUNC_0("Bad formatting: got %s", VAR_0);
  else
   FUNC_1();
 }
}
