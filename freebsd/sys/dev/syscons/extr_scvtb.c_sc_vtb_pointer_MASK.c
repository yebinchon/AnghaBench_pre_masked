
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_int16_t ;
struct TYPE_3__ {scalar_t__ vtb_buffer; } ;
typedef TYPE_1__ sc_vtb_t ;



vm_offset_t
FUNC_0(sc_vtb_t *VAR_0, int VAR_1)
{
 return (VAR_0->vtb_buffer + sizeof(u_int16_t)*(VAR_1));
}
