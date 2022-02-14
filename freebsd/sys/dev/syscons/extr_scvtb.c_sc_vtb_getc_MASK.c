
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_4__ {scalar_t__ vtb_type; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

int
FUNC_2(sc_vtb_t *VAR_1, int VAR_2)
{

 if (VAR_1->vtb_type == VAR_0)
  return (FUNC_0(FUNC_1(VAR_1, VAR_2)) & 0x00ff);
 else

  return (*(u_int16_t *)FUNC_1(VAR_1, VAR_2) & 0x00ff);
}
