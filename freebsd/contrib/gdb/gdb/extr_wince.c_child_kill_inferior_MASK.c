
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int h; } ;
struct TYPE_4__ {scalar_t__ dwDebugEventCode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6 (void)
{
  FUNC_0 (FUNC_4 (VAR_4));

  for (;;)
    {
      if (!FUNC_1 (VAR_0, -1))
 break;
      if (!FUNC_5 (&VAR_3, VAR_2))
 break;
      if (VAR_3.dwDebugEventCode == VAR_1)
 break;
    }

  FUNC_0 (FUNC_2 (VAR_4));
  FUNC_2 (VAR_5->h);
  FUNC_3 ();
}
