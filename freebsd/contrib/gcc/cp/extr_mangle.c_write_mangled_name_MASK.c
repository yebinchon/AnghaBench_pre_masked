
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int need_abi_warning; } ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (int const) ;
 scalar_t__ FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*,int const) ;
 scalar_t__ FUNC_11 (int const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (int const) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16 (const tree VAR_3, bool VAR_4)
{
  FUNC_10 ("mangled-name", VAR_3);

  if (
      FUNC_2 (VAR_3)

      && !FUNC_8 (VAR_3))
    {
    unmangled_name:;

      if (VAR_4)
 FUNC_15 (FUNC_9 (FUNC_7 (VAR_3)));
      else
 {





   if (FUNC_12 (2))
     FUNC_15 ("_Z");
   else
     VAR_0.need_abi_warning = 1;
   FUNC_14 (FUNC_7 (VAR_3));
 }
    }
  else if (FUNC_11 (VAR_3) == VAR_1

    && FUNC_1 (VAR_3)
    && (FUNC_0 (VAR_3) == VAR_2

        || FUNC_3 (VAR_3)))
    {
      if (VAR_4 || FUNC_12 (2))
 goto unmangled_name;
      else
 {
   VAR_0.need_abi_warning = 1;
   goto mangled_name;
 }
    }
  else
    {
    mangled_name:;
      FUNC_15 ("_Z");
      FUNC_13 (VAR_3);
      if (FUNC_4 (VAR_3)
   && (FUNC_6 (VAR_3)
       || FUNC_5 (VAR_3)))



 FUNC_15 (" *INTERNAL* ");
    }
}
