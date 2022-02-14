
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* sig; int integer; } ;
struct target_waitstatus {TYPE_1__ value; int kind; } ;


 scalar_t__ FUNC_0 (struct target_waitstatus*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int ) ;

void
FUNC_7 (struct target_waitstatus *VAR_3, int VAR_4)
{







  if (FUNC_2 (VAR_4))
    {
      VAR_3->kind = VAR_0;
      VAR_3->value.integer = FUNC_1 (VAR_4);
    }
  else if (!FUNC_3 (VAR_4))
    {
      VAR_3->kind = VAR_1;
      VAR_3->value.sig = FUNC_6 (FUNC_5 (VAR_4));
    }
  else
    {
      VAR_3->kind = VAR_2;
      VAR_3->value.sig = FUNC_6 (FUNC_4 (VAR_4));
    }
}
