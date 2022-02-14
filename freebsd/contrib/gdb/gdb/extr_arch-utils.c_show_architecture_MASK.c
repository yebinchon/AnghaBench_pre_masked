
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* printable_name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (char *VAR_2, int VAR_3)
{
  const char *VAR_4;
  VAR_4 = VAR_0->printable_name;
  if (VAR_1)
    FUNC_0 ("The target architecture is set automatically (currently %s)\n", VAR_4);
  else
    FUNC_0 ("The target architecture is assumed to be %s\n", VAR_4);
}
