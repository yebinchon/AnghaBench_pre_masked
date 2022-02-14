
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct minimal_symbol*) ;
 int FUNC_1 (struct minimal_symbol*) ;
 int VAR_0 ;
 char* FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_4 (struct minimal_symbol *VAR_1)
{
  char *VAR_2;

  if (VAR_0 <= 32)
    VAR_2 = FUNC_2 (FUNC_1 (VAR_1)
       & (CORE_ADDR) 0xffffffff,
       "08l");
  else
    VAR_2 = FUNC_2 (FUNC_1 (VAR_1),
       "016l");
  FUNC_3 ("%s  %s\n",
     VAR_2, FUNC_0 (VAR_1));
}
