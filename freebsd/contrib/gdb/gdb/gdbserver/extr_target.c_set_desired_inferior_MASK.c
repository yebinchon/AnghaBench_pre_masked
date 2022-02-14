
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ head; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct thread_info* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_1 (int VAR_5)
{
  struct thread_info *VAR_6;

  if (VAR_5 == 1)
    {
      VAR_6 = (struct thread_info *) FUNC_0 (&VAR_0,
             VAR_3);
    }
  else
    {
      VAR_6 = ((void*)0);




      if (VAR_4 > 0 && (VAR_1 == 0 || VAR_1 == -1))
 VAR_6 = (struct thread_info *) FUNC_0 (&VAR_0,
        VAR_4);

      if (VAR_6 == ((void*)0))
 VAR_6 = (struct thread_info *) FUNC_0 (&VAR_0,
        VAR_1);
    }

  if (VAR_6 == ((void*)0))
    VAR_2 = (struct thread_info *) VAR_0.head;
  else
    VAR_2 = VAR_6;
}
