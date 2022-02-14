
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum warn_strict_overflow_code { ____Placeholder_warn_strict_overflow_code } warn_strict_overflow_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_3 (const char* VAR_6, enum warn_strict_overflow_code VAR_7)
{
  FUNC_0 (!VAR_2 && !VAR_1);
  if (VAR_5 > 0)
    {
      if (VAR_4 == ((void*)0)
   || VAR_7 < VAR_3)
 {
   VAR_4 = VAR_6;
   VAR_3 = VAR_7;
 }
    }
  else if (FUNC_1 (VAR_7))
    FUNC_2 (VAR_0, "%s", VAR_6);
}
