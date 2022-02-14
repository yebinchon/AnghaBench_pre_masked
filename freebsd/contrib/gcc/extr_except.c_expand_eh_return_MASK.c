
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int ehr_handler; int ehr_stackadj; int ehr_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

void
FUNC_8 (void)
{
  rtx VAR_6;

  if (! VAR_3->eh->ehr_label)
    return;

  VAR_5 = 1;





  VAR_6 = FUNC_7 ();
  FUNC_2 (VAR_6);

  FUNC_3 (VAR_3->eh->ehr_label);
  FUNC_0 ();
    {



      FUNC_5 ("__builtin_eh_return not supported on this target");

    }

  FUNC_3 (VAR_6);
}
