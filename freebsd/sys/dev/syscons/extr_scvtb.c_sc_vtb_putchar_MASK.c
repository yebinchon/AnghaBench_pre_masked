
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_int16_t ;
struct TYPE_3__ {scalar_t__ vtb_type; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

vm_offset_t
FUNC_1(sc_vtb_t *VAR_1, vm_offset_t VAR_2, int VAR_3, int VAR_4)
{

 if (VAR_1->vtb_type == VAR_0)
  FUNC_0(VAR_2, VAR_4 | VAR_3);
 else

  *(u_int16_t *)VAR_2 = VAR_4 | VAR_3;
 return (VAR_2 + sizeof(u_int16_t));
}
