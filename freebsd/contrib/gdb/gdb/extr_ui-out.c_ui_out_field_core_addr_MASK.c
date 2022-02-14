
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct ui_out*,char const*,char*) ;

void
FUNC_3 (struct ui_out *VAR_1,
   const char *VAR_2,
   CORE_ADDR VAR_3)
{
  char VAR_4[20];





  if (VAR_0 <= 32)
    FUNC_1 (VAR_4, FUNC_0 (VAR_3, "08l"));
  else
    FUNC_1 (VAR_4, FUNC_0 (VAR_3, "016l"));

  FUNC_2 (VAR_1, VAR_2, VAR_4);
}
