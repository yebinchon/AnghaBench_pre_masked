
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;

void FUNC_2()
{
 if (VAR_0)
  FUNC_0("yyresetdict(%d)\n", VAR_2);
 if (VAR_2 > 0) {
  FUNC_1(VAR_3[--VAR_2]);
  if (VAR_0)
   FUNC_0("yysavedepth-- => %d\n", VAR_2);
 }
 VAR_1 = 0;
}
