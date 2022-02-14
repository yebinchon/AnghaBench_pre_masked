
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
 char* FUNC_0 (int) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,unsigned int,int ,char**) ;
 int FUNC_3 (char*,char*,char*,char const*,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

int
FUNC_6 (char *VAR_4, unsigned VAR_5, char **VAR_6)
{
  char *VAR_7, VAR_8[VAR_1], *VAR_9, *VAR_10;
  const char *VAR_11;
  char *VAR_12 = "%s/lib:%s/usr/lib:%s/usr/photon/lib:%s/usr/photon/dll:%s/lib/dll";


  VAR_9 = FUNC_1 ();
  if (FUNC_4 (VAR_2->arch_name, "i386") == 0)
    {
      VAR_11 = "x86";
      VAR_10 = "";
    }
  else if (FUNC_4 (VAR_2->arch_name, "rs6000") == 0
    || FUNC_4 (VAR_2->arch_name, "powerpc") == 0)
    {
      VAR_11 = "ppc";
      VAR_10 = "be";
    }
  else
    {
      VAR_11 = VAR_2->arch_name;
      VAR_10 = VAR_3 == VAR_0 ? "be" : "le";
    }

  FUNC_3 (VAR_8, "%s/%s%s", VAR_9, VAR_11, VAR_10);

  VAR_7 = FUNC_0 (FUNC_5 (VAR_12) + FUNC_5 (VAR_8) * 5 + 1);
  FUNC_3 (VAR_7, VAR_12, VAR_8, VAR_8, VAR_8, VAR_8,
    VAR_8);

  return FUNC_2 (VAR_7, 1, VAR_4, VAR_5, 0, VAR_6);
}
