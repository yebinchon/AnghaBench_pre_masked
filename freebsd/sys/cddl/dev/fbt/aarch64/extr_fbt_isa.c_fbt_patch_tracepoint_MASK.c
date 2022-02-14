
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_3__ {int * fbtp_patchpoint; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int fbt_patchval_t ;


 int FUNC_0 (int ,int) ;

void
FUNC_1(fbt_probe_t *VAR_0, fbt_patchval_t VAR_1)
{

 *VAR_0->fbtp_patchpoint = VAR_1;
 FUNC_0((vm_offset_t)VAR_0->fbtp_patchpoint, 4);
}
