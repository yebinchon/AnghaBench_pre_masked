
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_long ;
struct TYPE_6__ {void* pm_offset; void* pm_selector; } ;
struct TYPE_5__ {void* pm_offset; void* pm_selector; } ;
struct intrupt {int inuse; TYPE_2__ new_pmhandler; int old_pmhandler; TYPE_1__ new_rmhandler; int regs; int old_rmhandler; } ;
typedef scalar_t__ isr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (unsigned int,TYPE_2__*) ;
 scalar_t__ FUNC_5 (unsigned int,TYPE_1__*) ;
 void* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 struct intrupt* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static struct intrupt *
FUNC_11 (unsigned int VAR_4)
{
  struct intrupt *VAR_5;
  unsigned int VAR_6;
  isr_t VAR_7;

  if (VAR_4 >= VAR_1)
    return 0;

  VAR_5 = &VAR_2[VAR_4];
  if (VAR_5->inuse)
    return 0;

  VAR_6 = 0x08 + VAR_4;
  VAR_7 = VAR_3[VAR_4];


  FUNC_3 (VAR_6, &VAR_5->old_rmhandler);

  VAR_5->new_rmhandler.pm_selector = FUNC_6 ();
  VAR_5->new_rmhandler.pm_offset = (u_long) VAR_7;
  if (FUNC_1 (&VAR_5->new_rmhandler,
         &VAR_5->regs))
    {
      return 0;
    }

  if (FUNC_5 (VAR_6, &VAR_5->new_rmhandler))
    {
      return 0;
    }


  FUNC_2 (VAR_6, &VAR_5->old_pmhandler);

  VAR_5->new_pmhandler.pm_selector = FUNC_6 ();
  VAR_5->new_pmhandler.pm_offset = (u_long) VAR_7;
  FUNC_0 (&VAR_5->new_pmhandler);

  if (FUNC_4 (VAR_6,
            &VAR_5->new_pmhandler))
    {
      return 0;
    }


  FUNC_7 ();
  FUNC_10 (VAR_0, FUNC_9 (VAR_0) & ~(1 << VAR_4));
  FUNC_8 ();

  VAR_5->inuse = 1;
  return VAR_5;
}
