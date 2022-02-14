
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_2__ {int instruction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (enum neon_shape VAR_3)
{
  int VAR_4 = (VAR_2.instruction & 0x0fffffff) == VAR_1;

  if (VAR_3 == VAR_0)
    {
      if (VAR_4)
        FUNC_0 ("fmacs");
      else
        FUNC_0 ("fmscs");
    }
  else
    {
      if (VAR_4)
        FUNC_0 ("fmacd");
      else
        FUNC_0 ("fmscd");
    }
}
