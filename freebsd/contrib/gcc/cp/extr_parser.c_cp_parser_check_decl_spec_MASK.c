
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* specs; } ;
typedef TYPE_1__ cp_decl_specifier_seq ;
typedef scalar_t__ cp_decl_spec ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_2 (cp_decl_specifier_seq *VAR_6)
{
  cp_decl_spec VAR_7;

  for (VAR_7 = VAR_0; VAR_7 != VAR_1; ++VAR_7)
    {
      unsigned VAR_8 = VAR_6->specs[(int)VAR_7];
      if (VAR_8 < 2)
 continue;

      if (VAR_7 == VAR_2)
 {
   if (VAR_8 > 2)
     FUNC_0 ("%<long long long%> is too long for GCC");
   else if (VAR_4 && !VAR_3 && VAR_5)
     FUNC_1 ("ISO C++ does not support %<long long%>");
 }
      else if (VAR_8 > 1)
 {
   static const char *const VAR_9[] = {
     "signed",
     "unsigned",
     "short",
     "long",
     "const",
     "volatile",
     "restrict",
     "inline",
     "virtual",
     "explicit",
     "friend",
     "typedef",
     "__complex",
     "__thread"
   };
   FUNC_0 ("duplicate %qs", VAR_9[(int)VAR_7]);
 }
    }
}
