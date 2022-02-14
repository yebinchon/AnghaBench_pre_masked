
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * fp_regs; } ;
struct TYPE_6__ {unsigned int fp_csr; TYPE_1__ fp_r; } ;
typedef TYPE_2__ fpregset_t ;
struct TYPE_7__ {int fp0; int fp_control_status; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*,char*,int ) ;
 TYPE_3__* FUNC_3 (int ) ;

void
FUNC_4 (fpregset_t *VAR_2, int VAR_3)
{
  int VAR_4;
  char *VAR_5, *VAR_6;

  for (VAR_4 = FUNC_3 (VAR_0)->fp0;
       VAR_4 < FUNC_3 (VAR_0)->fp0 + 32; VAR_4++)
    {
      if ((VAR_3 == -1) || (VAR_3 == VAR_4))
 {
   VAR_5 = (char *) &VAR_1[FUNC_0 (VAR_4)];
   VAR_6 = (char *) &(VAR_2->fp_r.fp_regs[VAR_4 - FUNC_3 (VAR_0)->fp0]);
   FUNC_2 (VAR_6, VAR_5, FUNC_1 (VAR_4));
 }
    }

  if ((VAR_3 == -1)
      || (VAR_3 == FUNC_3 (VAR_0)->fp_control_status))
    VAR_2->fp_csr = *(unsigned *) &VAR_1[FUNC_0 (FUNC_3 (VAR_0)->fp_control_status)];
}
