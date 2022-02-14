
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int ks_inq_length; unsigned int ks_inq_start; char* ks_inq; } ;
typedef TYPE_1__ kbdmux_state_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static void
FUNC_0(kbdmux_state_t *VAR_1, char VAR_2)
{
 unsigned int VAR_3;

 if (VAR_1->ks_inq_length == VAR_0)
  return;

 VAR_3 = (VAR_1->ks_inq_start + VAR_1->ks_inq_length) % VAR_0;
 VAR_1->ks_inq[VAR_3] = VAR_2;
 VAR_1->ks_inq_length++;
}
