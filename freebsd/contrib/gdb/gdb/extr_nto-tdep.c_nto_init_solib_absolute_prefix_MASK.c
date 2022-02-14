
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* arch_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;

void
FUNC_4 (void)
{
  char VAR_4[VAR_1 * 2], VAR_5[VAR_1];
  char *VAR_6, *VAR_7;
  const char *VAR_8;

  VAR_6 = FUNC_1 ();
  if (FUNC_3 (VAR_2->arch_name, "i386") == 0)
    {
      VAR_8 = "x86";
      VAR_7 = "";
    }
  else if (FUNC_3 (VAR_2->arch_name, "rs6000") == 0
    || FUNC_3 (VAR_2->arch_name, "powerpc") == 0)
    {
      VAR_8 = "ppc";
      VAR_7 = "be";
    }
  else
    {
      VAR_8 = VAR_2->arch_name;
      VAR_7 = VAR_3 == VAR_0 ? "be" : "le";
    }

  FUNC_2 (VAR_5, "%s/%s%s", VAR_6, VAR_8, VAR_7);

  FUNC_2 (VAR_4, "set solib-absolute-prefix %s", VAR_5);
  FUNC_0 (VAR_4, 0);
}
