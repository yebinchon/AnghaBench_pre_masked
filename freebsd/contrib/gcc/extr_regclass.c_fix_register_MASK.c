
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const* const) ;
 int* VAR_5 ;
 int FUNC_2 (int ,char*,char const*) ;

void
FUNC_3 (const char *VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9;




  if ((VAR_9 = FUNC_0 (VAR_6)) >= 0)
    {
      if ((VAR_9 == VAR_2



    || VAR_9 == VAR_0

    )
   && (VAR_7 == 0 || VAR_8 == 0))
 {
   static const char * const VAR_10[2][2] = {
     { "call-saved", "call-used" },
     { "no-such-option", "fixed" }};

   FUNC_1 ("can't use '%s' as a %s register", VAR_6,
   VAR_10[VAR_7][VAR_8]);
 }
      else
 {
   VAR_5[VAR_9] = VAR_7;
   VAR_4[VAR_9] = VAR_8;




 }
    }
  else
    {
      FUNC_2 (0, "unknown register name: %s", VAR_6);
    }
}
