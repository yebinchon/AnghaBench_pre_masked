
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int static_pass_number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static unsigned int
FUNC_9 (void)
{
  bool VAR_5;




  if (VAR_2)
    VAR_5 = FUNC_5 ();
  else
    {
      FUNC_0 (FUNC_4 ());
      VAR_5 = FUNC_6 (FUNC_4 (), 0);
    }

  if (FUNC_1 (VAR_3.static_pass_number))
    {
      FUNC_8 (VAR_0);
      FUNC_2 (VAR_1);
      FUNC_7 (VAR_0);
    }

  FUNC_3 (VAR_4 || VAR_5);
  VAR_4 = !VAR_5;
  return 0;
}
