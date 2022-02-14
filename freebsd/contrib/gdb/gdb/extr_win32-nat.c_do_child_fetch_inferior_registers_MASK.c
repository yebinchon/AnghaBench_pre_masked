
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Dr7; int Dr6; int Dr3; int Dr2; int Dr1; int Dr0; int ContextFlags; } ;
struct TYPE_4__ {scalar_t__ reload_context; TYPE_3__ context; int h; } ;
typedef TYPE_1__ thread_info ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int * VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_7)
{
  char *VAR_8 = ((char *) &VAR_4->context) + VAR_6[VAR_7];
  long VAR_9;

  if (!VAR_4)
    return;


  if (VAR_4->reload_context)
    {
      thread_info *VAR_10 = VAR_4;
      VAR_10->context.ContextFlags = VAR_0;
      FUNC_0 (VAR_10->h, &VAR_10->context);

      VAR_5[0] = VAR_10->context.Dr0;
      VAR_5[1] = VAR_10->context.Dr1;
      VAR_5[2] = VAR_10->context.Dr2;
      VAR_5[3] = VAR_10->context.Dr3;
      VAR_5[6] = VAR_10->context.Dr6;
      VAR_5[7] = VAR_10->context.Dr7;
      VAR_4->reload_context = 0;
    }



  if (VAR_7 == VAR_1)
    {
      VAR_9 = *((long *) VAR_8) & 0xffff;
      FUNC_1 (VAR_7, (char *) &VAR_9);
    }
  else if (VAR_7 == VAR_2)
    {
      VAR_9 = (*((long *) VAR_8) >> 16) & ((1 << 11) - 1);
      FUNC_1 (VAR_7, (char *) &VAR_9);
    }
  else if (VAR_7 >= 0)
    FUNC_1 (VAR_7, VAR_8);
  else
    {
      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 FUNC_2 (VAR_7);
    }


}
