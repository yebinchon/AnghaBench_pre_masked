
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arch; int mach; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;





 int FUNC_0 (int *,char*,int,int ,char const*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1 (char *VAR_4, int VAR_5)
{
  const char *VAR_6 = ((void*)0);
  if (VAR_1 != ((void*)0)
      && VAR_1->arch == VAR_2)
    {
    switch (VAR_1->mach)
      {
      case 132:
      case 131:
      case 130:
      case 129:
      case 128:
 VAR_6 = "<RISQ> ";
 break;
      }
    }
  if (VAR_6 == ((void*)0))
    VAR_6 = "<IDT>";
  FUNC_0 (&VAR_3, VAR_4, VAR_5, VAR_0, VAR_6);
}
