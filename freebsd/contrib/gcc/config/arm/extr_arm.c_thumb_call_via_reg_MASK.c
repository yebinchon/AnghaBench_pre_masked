
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int ** call_via; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,int **) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;

const char *
FUNC_4 (rtx VAR_6)
{
  int VAR_7 = FUNC_0 (VAR_6);
  rtx *VAR_8;

  FUNC_1 (VAR_7 < VAR_0);




  if (VAR_2 == VAR_3)
    {
      VAR_4 = 1;

      if (VAR_5[VAR_7] == ((void*)0))
 VAR_5[VAR_7] = FUNC_2 ();
      VAR_8 = VAR_5 + VAR_7;
    }
  else
    {
      if (VAR_1->machine->call_via[VAR_7] == ((void*)0))
 VAR_1->machine->call_via[VAR_7] = FUNC_2 ();
      VAR_8 = VAR_1->machine->call_via + VAR_7;
    }

  FUNC_3 ("bl\t%a0", VAR_8);
  return "";
}
