
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inferior_list_entry {int id; } ;
struct TYPE_3__ {int pid; } ;




 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

int
FUNC_4 ()
{
  int VAR_3;

  VAR_1.pid = ((struct inferior_list_entry *)VAR_0)->id;

  VAR_3 = FUNC_0 (&VAR_1, &VAR_2);
  switch (VAR_3)
    {
    case 129:

      return 0;

    case 128:


      if (FUNC_1 () == 0)
 return 0;
      FUNC_2 ();
      return 1;

    default:
      FUNC_3 ("error initializing thread_db library.");
    }

  return 0;
}
