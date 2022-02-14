
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

const char *
FUNC_2 (rtx *VAR_4)
{
  if (VAR_1 && !VAR_3)
    {
      FUNC_0 ("ldr%?\t%|ip, %0", VAR_4);
      FUNC_0 ("mov%?\t%|lr, %|pc", VAR_4);
      FUNC_0 ("bx%?\t%|ip", VAR_4);
    }
  else if (FUNC_1 (VAR_0, VAR_4[0]))
    {



      FUNC_0 ("ldr%?\t%|ip, %0", VAR_4);
      if (VAR_3)
 FUNC_0 ("blx%?\t%|ip", VAR_4);
      else
 {
   FUNC_0 ("mov%?\t%|lr, %|pc", VAR_4);
   if (VAR_2)
     FUNC_0 ("bx%?\t%|ip", VAR_4);
   else
     FUNC_0 ("mov%?\t%|pc, %|ip", VAR_4);
 }
    }
  else
    {
      FUNC_0 ("mov%?\t%|lr, %|pc", VAR_4);
      FUNC_0 ("ldr%?\t%|pc, %0", VAR_4);
    }

  return "";
}
