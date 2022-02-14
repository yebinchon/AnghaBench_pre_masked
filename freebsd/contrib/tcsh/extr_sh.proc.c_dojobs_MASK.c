
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {int p_index; scalar_t__ p_procid; scalar_t__ p_jobid; int p_flags; struct process* p_next; } ;
struct command {int dummy; } ;
struct TYPE_2__ {struct process* p_next; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct command*) ;
 int VAR_11 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct process*) ;
 int VAR_12 ;
 int FUNC_3 (struct process*,int) ;
 TYPE_1__ VAR_13 ;
 int FUNC_4 (int ) ;

void
FUNC_5(Char **VAR_14, struct command *VAR_15)
{
    struct process *VAR_16;
    int VAR_17 = VAR_5 | VAR_4 | VAR_9 | VAR_3;
    int VAR_18;

    FUNC_0(VAR_15);
    if (VAR_11)
 VAR_11 = 2;
    if (*++VAR_14) {
 if (VAR_14[1] || !FUNC_1(*VAR_14, VAR_10))
     FUNC_4(VAR_0);
 VAR_17 |= VAR_1 | VAR_2;
    }
    for (VAR_18 = 1; VAR_18 <= VAR_12; VAR_18++)
 for (VAR_16 = VAR_13.p_next; VAR_16; VAR_16 = VAR_16->p_next)
     if (VAR_16->p_index == VAR_18 && VAR_16->p_procid == VAR_16->p_jobid) {
  VAR_16->p_flags &= ~VAR_6;
  if (!(FUNC_3(VAR_16, VAR_17) & (VAR_7 | VAR_8)))
      FUNC_2(VAR_16);
  break;
     }
}
