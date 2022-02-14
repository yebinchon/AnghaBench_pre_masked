
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relax_inst; int relax_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char**,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2)
{
  int VAR_3 = 0;

  FUNC_2 (VAR_2);

  if ((VAR_3 = FUNC_1 (&VAR_2, 4)) == (int) VAR_0
      || FUNC_0 (VAR_2) == (int) VAR_0)
    {
      return;
    }
  else
    {
      VAR_1.relax_inst |= VAR_3 << 20;
      VAR_1.relax_size = 4;
    }
}
