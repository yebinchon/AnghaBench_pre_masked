
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unwind_check; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3 (const char * VAR_2, const char *VAR_3)
{
  if (VAR_0.unwind_check == VAR_1)
    {
      FUNC_1 (".%s outside of %s", VAR_3, VAR_2);
      return -1;
    }
  else
    {
      FUNC_0 (".%s outside of %s", VAR_3, VAR_2);
      FUNC_2 ();
      return 0;
    }
}
