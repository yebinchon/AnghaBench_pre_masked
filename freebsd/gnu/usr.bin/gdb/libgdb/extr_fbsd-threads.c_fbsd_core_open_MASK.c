
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int core_pid; } ;
struct TYPE_6__ {int (* to_open ) (char*,int) ;} ;
struct TYPE_5__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int VAR_6 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_7, int VAR_8)
{
  int VAR_9;

  VAR_2 = 1;

  VAR_4.to_open (VAR_7, VAR_8);

  if (VAR_3)
    {
      VAR_9 = FUNC_4 (&VAR_5, &VAR_6);
      if (VAR_9 == VAR_0)
        {
          VAR_5.pid = FUNC_0 (VAR_1)->core_pid;
          FUNC_2 ();
        }
      else
        FUNC_1 ("fbsd_core_open: td_ta_new: %s", FUNC_5 (VAR_9));
    }
}
