
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * fp_regs; } ;
struct TYPE_6__ {int fp_csr; TYPE_1__ fp_r; } ;
typedef TYPE_2__ fpregset_t ;
struct TYPE_7__ {scalar_t__ fp_implementation_revision; scalar_t__ fp_control_status; scalar_t__ fp0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char*) ;

void
FUNC_3 (fpregset_t *VAR_2)
{
  int VAR_3;
  char VAR_4[VAR_0];
  FUNC_0 (VAR_4, 0, VAR_0);

  for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
    FUNC_2 (FUNC_1 (VAR_1)->fp0 + VAR_3,
       (char *) &VAR_2->fp_r.fp_regs[VAR_3]);

  FUNC_2 (FUNC_1 (VAR_1)->fp_control_status,
     (char *) &VAR_2->fp_csr);


  FUNC_2 (FUNC_1 (VAR_1)->fp_implementation_revision,
     VAR_4);
}
