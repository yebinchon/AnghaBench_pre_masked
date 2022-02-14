
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ks_inq_length; unsigned char* ks_inq; size_t ks_inq_start; } ;
typedef TYPE_1__ kbdmux_state_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(kbdmux_state_t *VAR_1)
{
 unsigned char VAR_2;

 if (VAR_1->ks_inq_length == 0)
  return (-1);

 VAR_2 = VAR_1->ks_inq[VAR_1->ks_inq_start];
 VAR_1->ks_inq_start = (VAR_1->ks_inq_start + 1) % VAR_0;
 VAR_1->ks_inq_length--;

 return (VAR_2);
}
