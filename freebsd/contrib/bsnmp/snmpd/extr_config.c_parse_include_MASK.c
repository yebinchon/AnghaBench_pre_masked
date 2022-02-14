
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 char FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 char VAR_3 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_4 = 0;
 char VAR_5[VAR_1];

 if (FUNC_0() == '<') {
  VAR_4 = 1;
  if (FUNC_0() != VAR_0)
   FUNC_2("expecting filename after in .include");
 } else if (VAR_3 != VAR_0)
  FUNC_2("expecting filename after in .include");

 FUNC_3(VAR_5, VAR_2);
 if (VAR_4 && FUNC_0() != '>')
  FUNC_2("expecting '>'");
 FUNC_0();
 if (FUNC_1(VAR_5, VAR_4) == -1)
  FUNC_2("%s: %m", VAR_5);
}
