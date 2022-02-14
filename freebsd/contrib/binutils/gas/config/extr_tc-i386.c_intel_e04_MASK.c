
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char code; int str; } ;
struct TYPE_5__ {scalar_t__ base_reg; } ;
struct TYPE_4__ {int disp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3 (void)
{
  int VAR_6 = -1;

  for (;;)
    {
      if (!FUNC_0())
 return 0;

      if (VAR_6 >= 0 && VAR_0 > VAR_6)
 VAR_3.base_reg = VAR_4 + VAR_1;

      if (VAR_2.code == '+')
 VAR_6 = -1;
      else if (VAR_2.code == '-')
 VAR_6 = VAR_0;
      else
 return 1;

      FUNC_2 (VAR_5.disp, VAR_2.str);
      FUNC_1 (VAR_2.code);
    }
}
