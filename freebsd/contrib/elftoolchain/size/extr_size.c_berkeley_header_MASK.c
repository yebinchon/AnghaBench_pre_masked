
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(void)
{
 static int VAR_5;

 VAR_4 = VAR_2 = VAR_1 = 0;
 if (!VAR_5) {
  FUNC_1(6);
  FUNC_0();
  FUNC_2("text", 0);
  FUNC_2("data", 1);
  FUNC_2("bss", 2);
  if (VAR_3 == VAR_0)
   FUNC_2("oct", 3);
  else
   FUNC_2("dec", 3);
  FUNC_2("hex", 4);
  FUNC_2("filename", 5);
  VAR_5 = 1;
 }
}
