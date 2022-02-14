
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (int VAR_1)
{
  int VAR_2 = (VAR_0.instruction & (1 << 20)) != 0;
  if (VAR_2)
    {
      if (VAR_1)
        FUNC_0 ("fldmdbs");
      else
        FUNC_0 ("fldmias");
    }
  else
    {
      if (VAR_1)
        FUNC_0 ("fstmdbs");
      else
        FUNC_0 ("fstmias");
    }
}
