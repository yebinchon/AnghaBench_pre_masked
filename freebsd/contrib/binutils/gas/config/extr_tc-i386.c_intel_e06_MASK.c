
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char code; } ;
struct TYPE_5__ {scalar_t__ base_reg; } ;
struct TYPE_4__ {int disp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3 (void)
{
  int VAR_8 = ~VAR_0;

  for (;;)
    {
      if (!FUNC_0())
 return 0;

      if (VAR_4.code == '*'
   || VAR_4.code == '/'
   || VAR_4.code == '%')
 {
   char VAR_9[2];

   VAR_9[0] = VAR_4.code;
   VAR_9[1] = 0;
   FUNC_2 (VAR_7.disp, VAR_9);
 }
      else if (VAR_4.code == VAR_2)
 FUNC_2 (VAR_7.disp, "<<");
      else if (VAR_4.code == VAR_3)
 FUNC_2 (VAR_7.disp, ">>");
      else
 break;

      FUNC_1 (VAR_4.code);

      if (VAR_8 < 0)
 VAR_8 = ~VAR_8;
    }
  if (VAR_8 >= 0 && VAR_0 > VAR_8)
    VAR_5.base_reg = VAR_6 + VAR_1 + 2;
  return 1;
}
