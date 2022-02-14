
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7 (tree VAR_5, int VAR_6)
{
  if (VAR_5 && FUNC_1 (VAR_5)
      && FUNC_2 (FUNC_1 (VAR_5)) <= 17







      && (FUNC_0 (VAR_5) == VAR_3
   || FUNC_4 (FUNC_0 (VAR_5)) == VAR_4)
      && FUNC_5 (VAR_5))
    {
      const char *VAR_7 = FUNC_3 (FUNC_1 (VAR_5));
      const char *VAR_8 = VAR_7;




      if (((FUNC_2 (FUNC_1 (VAR_5)) == 6
     && VAR_7[0] == 'a'
     && ! FUNC_6 (VAR_7, "alloca"))
    || (FUNC_2 (FUNC_1 (VAR_5)) == 16
        && VAR_7[0] == '_'
        && ! FUNC_6 (VAR_7, "__builtin_alloca"))))
 VAR_6 |= VAR_0;


      if (VAR_7[0] == '_')
 {
   if (VAR_7[1] == '_' && VAR_7[2] == 'x')
     VAR_8 += 3;
   else if (VAR_7[1] == '_')
     VAR_8 += 2;
   else
     VAR_8 += 1;
 }

      if (VAR_8[0] == 's')
 {
   if ((VAR_8[1] == 'e'
        && (! FUNC_6 (VAR_8, "setjmp")
     || ! FUNC_6 (VAR_8, "setjmp_syscall")))
       || (VAR_8[1] == 'i'
    && ! FUNC_6 (VAR_8, "sigsetjmp"))
       || (VAR_8[1] == 'a'
    && ! FUNC_6 (VAR_8, "savectx")))
     VAR_6 |= VAR_2;

   if (VAR_8[1] == 'i'
       && ! FUNC_6 (VAR_8, "siglongjmp"))
     VAR_6 |= VAR_1;
 }
      else if ((VAR_8[0] == 'q' && VAR_8[1] == 's'
  && ! FUNC_6 (VAR_8, "qsetjmp"))
        || (VAR_8[0] == 'v' && VAR_8[1] == 'f'
     && ! FUNC_6 (VAR_8, "vfork"))
        || (VAR_8[0] == 'g' && VAR_8[1] == 'e'
     && !FUNC_6 (VAR_8, "getcontext")))
 VAR_6 |= VAR_2;

      else if (VAR_8[0] == 'l' && VAR_8[1] == 'o'
        && ! FUNC_6 (VAR_8, "longjmp"))
 VAR_6 |= VAR_1;
    }

  return VAR_6;
}
